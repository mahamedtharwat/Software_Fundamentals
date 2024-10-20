#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<windows.h>
#define null -32
#define highlight 150
#define normal 15


void gotoxy(int x, int y){
    COORD coord = {0,0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void textattr(int i){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
}



int main()
{

int flag = 0;
int x = 20, y = 10, currentPosition = 0;
do{
char Menu[4][20] = {"a - add", "b - edit", "c - display", "d - exit"};
for(int i = 0; i < 4; i++){
    gotoxy(x, y + i);
    if(currentPosition == i){
        textattr(highlight);
    }else{
        textattr(normal);
    }
    printf("%s \n", Menu[i]);
    textattr(normal);
}
char key, click;
key = getch();
switch(key){
    case -32:{
        click = getch();
        switch(click){
            case 72:{ // up
                if(currentPosition > 0){
                    currentPosition--;
                }
                break;
            }
            case 80:{ // down
                if(currentPosition < 3){
                    currentPosition ++;
                }
                break;
            }
        }
        break;
    }
    case 13:{
        if(currentPosition == 0){
            printf("add \n");
        }
        else if(currentPosition == 1){
            printf("edit \n");
        }
        else if(currentPosition == 2){
            printf("display \n");
        }
        else if(currentPosition == 3){
            flag = 1;
        }
        break;
    }
}
}while(flag == 0);


    /* char names [4][10];
    for(int i = 0; i < 4; i++){
        scanf("%s",names[i]);
    }
    for(int i = 0; i < 4; i++){
        printf("%s \n",names[i]);
    }
    */




    /*
    char firstName[10];
    char LastName[10];
    scanf("%s", firstName);
    scanf("%s", LastName);

    strcat(firstName, LastName);
    printf("%s",firstName);
    */



    /*char key, click;
    do{
        key = getch();
        click = getch();
        if(click == 75)
        {
            printf("Left\n");
        }
        else if(click == 80)
        {
            printf("Down\n");
        }
        else if(click == 79)
        {
            printf("End\n");
        }
        else if(click == 72)
        {
            printf("up\n");
        }
        else if(click == 71)
        {
            printf("Home\n");
        }
        else if(click == 83)
        {
            printf("Del\n");
        }
        else if(click == 77)
        {
            printf("Right\n");
        }
    }while(key != 27);

*/





    return 0;
}
