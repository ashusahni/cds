#include <stdio.h>
#include <string.h>

int main (void){
    char *names[] =  {"ashu","ashok","nitesh"};
    char *num[] = {"34343434344","43432424","23423444432"};
    
    char name[3];
    scanf("Name :");

    for (int i=0; i<3; i++){
        if (strcmp(names[i],name)==0)
        {
            printf("found %s\n", num[i]);
            return 0;
        }
        
    }
    printf("NOT FOUND");
    return 1;

}