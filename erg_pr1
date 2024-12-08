#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[20];
    int yob;
    char AM[7];
}stud[3];


int main(int argc, char *argv[]){
    int max = 2025, pi;

    for (int i = 0; i < 3; i++){
        printf("Give the name of the student:\t");
        scanf(" %s", &stud[i].name);
        //printf("Name:\t%s", stud[i].name);
        printf("Give the registration number of the student:\t");
        scanf(" %s", &stud[i].AM);
        printf("Give the year of birth of the student:\t");
        scanf(" %d", &stud[i].yob);

        if (max > stud[i].yob){
            max = stud[i].yob;
            pi = i;
        }
    }

    switch (pi){
    case 0:
        printf("The older student is the first one\n");
        break;

    case 1:
        printf("The older student is the second one\n");
        break;
    
    default:
        printf("The older student is the third one\n");
        break;
    }
    // printf("Name:\t");
    // printf("\nexited\n");
    
    printf("Name:\t%s\n", stud[pi].name);
    printf("AM:\t%s\n", stud[pi].AM);
    printf("Year of birth:\t%d\n", stud[pi].yob);

    return 0;
}



