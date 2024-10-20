#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int num;
    printf("Enter your number: ");
    scanf("%i", &num);
    if(num % 2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    *///}


    /*int score;
    printf("Enter your score: ");
    scanf("%i", &score);
    if(score >= 85 && score < 90){
        printf("A");
    }
    else if(score >= 75 && score < 85){
        printf("B");
    }
    else if(score >= 70 && score < 75){
        printf("C");
    }
    else if(score >= 65 && score < 70){
        printf("D");
    }
    else{
        printf("Failed");
    *///}



    /*float amount;
    int numofYears;
    float interst = 0.1;
    printf("Enter the amount: \n");
    scanf("%f", &amount);
    printf("Enter number of Years: \n");
    scanf("%i", &numofYears);
    for(int i = 1; i <= numofYears; i++){
        amount += (amount * interst);
        printf("%i %f", i, amount);
    *///}


    /*int num, sum = 0;
    while(sum <= 1000){
        printf("Enter your number: ");
        scanf("%i", &num);
        sum += num;
        printf("%i \n", sum);
    }
    *///printf("all amount: = %i", sum);



    /*char c;
    printf("Enter your char: ");
    scanf("%c", &ch);
    *///printf("char %c = %d", c,c);


    /*char c;
    do{
        printf("Enter your char: \n");
        scanf("%c", &c);
        printf("%c %d ",c,c);
    *///}while(c != 27);





   /* printf("---------------\n");
    printf("|  a : add    \n|");
    printf("|  d : delete \n|");
    printf("|  s : save   \n|");
    printf("|  e : exit   \n|");
    printf("---------------\n");

    int flag = 0;
    do
    {
        char ch;
        printf("Enter your char: \n");
        ch = getch();
        switch(ch)
        {
        case 'a':
        case 'A':
            {
               printf("you pressed add \n");
               break;
            }
        case 'd':
        case 'D':
            {
                printf("you pressed delete \n");
                break;
            }
        case 's':
        case 'S':
            {
                printf("you pressed save \n");
                break;
            }
        case 'e':
        case 'E':
            {
                printf("you pressed exit \n");
                flag = 1;
                break;
            }
        default:
            printf("Invalid \n");
        }
        getch();

    *///}while(flag == 0);
















    /*for(int i = 0; i <= 100; i+=2){
        printf("%i \n", i);
    *///}

    /*for(int i = 0; i <= 100; i++){
        if(i % 2 == 0){
            printf("%i \n", i);
        }
   */// }


    return 0;
}
