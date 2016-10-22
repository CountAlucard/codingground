#include <stdio.h>
#include <stdlib.h>

int x[10];
int option;
char fname[10];

void menu();
void addition();
void subtraction();
void multiplication();
void division();
int loadFile(char fname[]);

int main()
{
    menu();

    return 0;
}

void menu()
{
    
    printf("\nEnter the name of the file you will use for this application:\n");
    
    while(1)
    {
        scanf("%s", fname);
        if(loadFile(fname)) break;
    }
    
    printf("\nSelect the mathematical operation you want to use: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &option);
    
    switch(option)
    {
        case 1:
                addition();
                break;
        case 2:
                printf("You have selected subtraction.\n");
                break;
        case 3:
                printf("You have selected multiplication.\n");
                break;
        case 4:
                printf("You have selected division.\n");
                break;
    } 
}

void addition()
{
    printf("\nYou have selected addition. How many numbers would you like to add?\n");
}

void subtraction()
{
    printf("\nYou have selected subtraction. How many numbers would you like to subtract?\n");
}

void multiplication()
{
    printf("\nYou have selected multiplication. How many numbers would you like to multiply?\n");
}

void division()
{
    printf("\nYou have selected division. How many numbers would you like to divide?\n");
}

int loadFile(char fname[])
{
    FILE *fp;
    fp = fopen(fname, "r");
    if(fp == NULL)
    {
        printf("\nFailed to open %s. Please try a different file.\n", fname);
        return 0;
    }
    printf("\nFile opened successfully");
    return 1;
}

