#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<windows.h>
#define null -32
#define highlight 150
#define normal 15

struct Employee
{
    int id;
    char name[20];
    float salary;
};
void Add(struct Employee *emp, int sz);
void DisplayAll(struct Employee *emp, int sz);
void DisplayOne(struct Employee *emp, int idx);
void Edit(struct Employee *emp, int idx);


void gotoxy(int x, int y)
{
    COORD coord = {0,0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void textattr(int i)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
}



int main()
{

    int flag = 0;
    int x = 20, y = 10, currentPosition = 0, sz = 3;
    struct Employee emp[sz];
    do
    {
        system("cls");
        char Menu[4][20] = {"a - add", "b - edit", "c - display", "d - exit"};
        for(int i = 0; i < 4; i++)
        {
            gotoxy(x, y + i);
            if(currentPosition == i)
            {
                textattr(highlight);
            }
            else
            {
                textattr(normal);
            }
            printf("%s \n", Menu[i]);
            textattr(normal);
        }
        char key, click;
        key = getch();
        switch(key)
        {
        case -32:
        {
            click = getch();
            switch(click)
            {
            case 72:  // up
            {
                if(currentPosition > 0)
                {
                    currentPosition--;
                }
                break;
            }
            case 80:  // down
            {
                if(currentPosition < 3)
                {
                    currentPosition ++;
                }
                break;
            }
            }
            break;
        }
        case 13:
        {
            if(currentPosition == 0)
            {
                printf("add \n");
                Add(emp,sz);
            }
            else if(currentPosition == 1)
            {
                printf("edit \n");
                int idx;
                printf("Enter your idx: \n");
                scanf("%i", &idx);
                if(idx <= sz)
                {
                    Edit(emp, idx);
                }
                else
                {
                    printf("Not found\n");
                }
            }
            else if(currentPosition == 2)
            {
                printf("displayall \n");
                DisplayAll(emp,sz);
            }
            else if(currentPosition == 3)
            {
                printf("displayone \n");
                int idx;
                printf("Enter your idx: \n");
                scanf("%i", &idx);
                if(idx <= sz)
                {
                    DisplayOne(emp, idx);
                }
                else
                {
                    printf("Not found\n");
                }

            }
            else if(currentPosition == 4)
            {
                printf("Out");
                flag = 1;
            }
            getch();
            break;
        }
        }
    }
    while(flag == 0);




    return 0;
}

void Add(struct Employee *emp, int sz)
{
    for(int i = 0; i < sz; i++)
    {
        printf(" enter your id %i",i+1);
        scanf("%i",&emp[i].id);
        printf(" enter your your name %i",i+1);
        scanf("%s", emp[i].name);
        printf(" enter your salary %i",i+1);
        scanf("%f",&emp[i].salary);
    }
}
void DisplayAll(struct Employee *emp, int sz)
{
    printf("id %i\n",emp->id);
    printf("name %s\n",emp->name);
    printf("salary %f\n",emp->salary);
    emp++;
}
void DisplayOne(struct Employee *emp, int idx)
{
    printf("id %i\n",emp[idx-1].id);
    printf("name %s\n",emp[idx-1].name);
    printf("salary %f\n",emp[idx-1].salary);
}
void Edit(struct Employee *emp,int idx)
{
    printf("id %i",idx-1);
    scanf("%i",&emp[idx-1].id);
    printf("name %i",idx-1);
    scanf("%s", emp[idx-1].name);
    printf("salary %i",idx-1);
    scanf("%f",&emp[idx-1].salary);
}



