#include <stdio.h>
#include <stdlib.h>

int main()
{

   /* int scores[5]; // task 1

    for(int i = 0; i < 5; i++){
            printf("Enter subjects for student 1 : \n", i);
            scanf("%i", &scores[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("scores[%i] = %i \n", i , scores[i]);
    }*/


    /*int grades[5];   // task 2 bonus
    int max , min;
    for(int i = 0; i < 5; i++){
        printf("Enter number of grades %i: ", i);
        scanf("%i", &grades[i]);

    }
    max = grades[0];
    min = grades[0];
    for(int i = 0; i < 5; i++){
        if(grades[i] > max){
            max = grades[i];
        }
        if(grades[i] < min){
            min = grades[i];
        }
    }
    printf("max grades = %i \n", max);
    printf("min grades = %i ", min); */






    /*int grades[4][5];  // 4 student     // 5 subject  // task 4

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            printf("Enter grades for student : %i, subject : ", i ,j);
            scanf("%i", &grades[i][j]);
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            printf("grades[%i][%i] = %i \n", i, j, grades[i][j]);
        }
    }
    int sum = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            sum += grades[i][j];
        }
        printf("sum of grades for student %i = %i \n", i, sum);
        sum = 0;
    }
    float average = 0;
    for(int i = 0; i < 5; i++){   // subject
        for(int j = 0; j < 4; j++){  // student
            average += grades[i][j];
        }
        printf("average of subject for student %i = %f \n", i, average/5);
        average = 0;
    } */



    return 0;
}
