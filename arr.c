#include <stdio.h>

int main (){

int marks[3];
printf("marks of 5 students \n" );

for (int i = 0; i<5; i++){
    scanf("%d", &marks[i]);
}

printf("marks of zero and 1 is   %d %d", marks[0],marks[1]);
return 0;

}