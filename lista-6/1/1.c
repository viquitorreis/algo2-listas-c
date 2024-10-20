#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
    char name[50];
    float notes[3];
    float freq;
} student;

void menu();
void addStudent();
void readStudents();
float avgNote(struct student *std);
void isAproved(struct student *std);
void biggestNote(struct student *std);

student *students = NULL;
int numStudents = 0;

int main() {
    menu();
    readStudents();
    free(students);
    printf("Até mais =D\n");
    return 0;
}

void menu() {
    int option = 0;
    printf("Adicionar mais alunos?\n1 - Sim | 2 - Não\n");
    scanf("%d", &option);

    if (option == 2) {
        return;
    }

    addStudent();
    menu();
}

void addStudent() {
    if (numStudents >= 40) {
        printf("Número máximo de alunos atingido!\n");
        return;
    }
    // realloc -> 1º param: representa o ponteiro para um bloco de memória que deve ser realocado
    students = (student*) realloc(students, (numStudents + 1) * sizeof(student));

    printf("Digite o nome do aluno: ");
    scanf("%s", students[numStudents].name);
    
    printf("\nDigite as 3 notas do aluno:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Nota nº %d: ", i+1);
        scanf("%f", &students[numStudents].notes[i]);
    }

    printf("Digite a frequência do aluno: ");
    scanf("%f", &students[numStudents].freq);

    numStudents++;
}

void readStudents() {
    for (int i = 0; i < numStudents; ++i) {
        printf("Aluno - Nome: %s Notas: %.2f, %.2f, %.2f, Frequência: %.2f\n",
        students[i].name, students[i].notes[0], students[i].notes[1], students[i].notes[2], students[i].freq);
        isAproved(&students[i]);
    }
}

float avgNote(struct student *std) {
    int avg = 0;
    for (int i = 0; i < 3; ++i) {
        avg += std->notes[i];
    }
    return avg;
}

void isAproved(student *std) {
    if (std->freq < 75) {
        printf("[%s] - Estudante Reprovado!\n", std->name);
        return;
    }

    for (int i = 0; i < 3; ++i) {
        if (avgNote(std) < 60) {
            printf("[%s] - Estudante Reprovado!\n", std->name);
            return;
        }
    }

    printf("[%s] - Estudante aprovado!\n", std->name);
    return;
}

void biggestNote(struct student *std) {
    float biggestAvgNote = 0;
    float smallestAvgNote = 100;
    char biggestNome[50] = "";
    char smallestNome[50] = "";
    for (int i = 0; i < numStudents; ++i) {
        float currentAvgNote = avgNote(&students[i]);

        if (currentAvgNote > biggestAvgNote) {
            biggestAvgNote = currentAvgNote; 
            strcpy(biggestNome, students[i].name);
        }

        if (currentAvgNote < smallestAvgNote) {
            smallestAvgNote = currentAvgNote; 
            strcpy(smallestNome, students[i].name); 
        }
    }

    printf("Aluno de maior nota: [%s]. Nota parcial: %.2f\n", biggestNome, biggestAvgNote);
    printf("Aluno de menor nota: [%s]. Nota parcial: %.2f\n", smallestNome, smallestAvgNote);
}
