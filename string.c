#include <stdio.h>

int main (void){
    int num[]= {34,434,650,50,40,100,540};
    int n; 
    printf("number :");
    scanf("%d", &n);

    for (int i = 0; i<7; i++){
        if (num[i] == n){
            printf("number found");
            return 0;
        }
    }
       {
            printf("not fund");
            return 1;
        }

    // printf("u enter : %d\n", n);
}