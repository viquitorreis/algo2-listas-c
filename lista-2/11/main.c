#include <stdio.h>

// int main()
// {
//     double vetor[5];
//     double *pt1;
//     double *pt2;

//     for (int i = 0; i < 5; i++)
//     {
//         printf(" Digite o valor para o vetor [%d]: ", i);
//         scanf("%lf", &vetor[i]);
//     }
//     pt2 = &vetor[0]; // inicia o vetor no primeiro elemento (0)

//     for (int i = 0; i < 5; i++)
//     {
//         if (vetor[i] < *pt2)
//         {
//             // pt1 = pt2;
//             pt2 = &vetor[i];
//         }
//     }
//     printf(" O menor valor no vetor eh: %lf\n", *pt2);
//     return 0;
// }

int main(){
    double vetor[5];
    double *pt1;
    double *pt2;

    for(int i = 0; i<5; i++){
    printf(" Digite o valor para o vetor [%d]: ", i);
    scanf("%lf", &vetor[i]);

    }
        pt1 = &vetor[0];
        pt2 = &vetor[0];
        //inicia o vetor no primeiro elemento (0)

        for (int i = 1; i<5; i++){
            pt2 = &vetor[i];//atualiza pt2 para o proximo elemento
            if(*pt2 < *pt1){
            pt1 = pt2; // atualiza pt1 se *pt2 for menor

            }
        }
    printf(" O menor valor no vetor eh: %lf\n", *pt1);
    return 0;
}