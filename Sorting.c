#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* sortingAlg(int n){
    char* Temp = (char*)malloc(100);
    char Fz[4] = "Fizz";
    char Bz[4] = "Buzz";
    char FzBz[8] = "FizzBuzz";
    Temp[0] = '\0';
    for(int i = 1; i <=n; i++){
        char tempChI = i;
        if(i%3 == 0 && i%5 != 0){ //div par 3
            strncat(Temp, Fz, 4); // add Fizz to string
            //printf("Fizz");
        }
        else if(i%3 != 0 && i%5 == 0){ //div par 5
            strncat(Temp, Bz, 4); // add Buzz to string
            //printf("Buzz");
        }
        else if(i%3 == 0 && i%5 == 0){ //div par 3 et 5
            strncat(Temp, FzBz, 8); //add FizzBuzz to string
            //printf("FizzBuzz");
        }
        else{
            char tempChI[2];
            snprintf(tempChI, sizeof(tempChI), "%d", i);
            strncat(Temp, tempChI, 2); // add int i as char to string
            //strncat(Temp, &tempChI, 1);
            //printf("%d", i); // non div par 3 ou 5
        }
    }
    return Temp;
}
