#include <stdio.h>;
#include <stdlib.h>;

int main(int argc, char * argv[]){
    char c; 
    int counter[4] = {0,0,0,0};
    char daContare[3]= {9,10,32};

    while((c = getchar()) != EOF){
        counter[0]++;
        if(c == daContare[1]){
            counter[1]++;
        }
        if(c == daContare[0]){
            counter[2]++;
        }
        if(c == daContare[2]){
            counter[3]++;
        }
    }
    printf("Ho letto %d caratteri!\n", counter[0]);
    printf("%d dei quali erano \\n.\n", counter[1]);
    printf("%d dei quali erano \\t.\n", counter[2]);
    printf("%d dei quali erano ' '.\n", counter[3]);
    return 0;
}