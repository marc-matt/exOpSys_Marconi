#include <stdlib.h>;
#include <stdio.h>;

int main(int argc, char * argv[]){

    char c;
    int counter = 1;
    int countElem = 0;
    char * arr;
    arr = calloc(counter, sizeof(char));

    printf("Inserisci caratteri, per terminare EOF(crl-d)\n");

    while((c = getchar()) != EOF){
        arr[counter-1] = c;
        counter++;
        countElem++;
        realloc(arr, (counter * sizeof(int)));
    }

    printf("Ho letto i seguenti caratteri(reverse): \n");

    for(int i = (countElem - 1); i > 0; i--){
        printf("%c ", arr[i]);
    }

    printf("\n");
    
    return 0;
}