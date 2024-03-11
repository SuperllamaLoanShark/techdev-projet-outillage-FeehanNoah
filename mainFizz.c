#include<stdio.h>
#include<math.h>
#include "sortingAlg.h"
// Projet FizzBuzz
void main(){
    int n;
    printf("Entrer un numéro entier >0 \n");
    scanf("%d", &n);
    char* final = sortingAlg(n);
    printf("%s\n", final);
    /*for(int i = 1; i <=n; i++){
        if(i%3 == 0 && i%5 != 0){ //div par 3
            printf("Fizz");
        }
        else if(i%3 != 0 && i%5 == 0){ //div par 5
            printf("Buzz");
        }
        else if(i%3 == 0 && i%5 == 0){ //div par 3 et 5
            printf("FizzBuzz");
        }
        else printf("%d", i); // non div par 3 ou 5
    }
    printf("\n"); // just good manners innit */
    free(final);
}