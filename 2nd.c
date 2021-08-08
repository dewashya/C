#include<stdio.h>
#include<conio.h>


void main() 
{  
    clrscr();
    char name;
    int roll_no;
    float weig;
    double heig;
    float BMI;
    printf("Name:");
    scanf("%c", &name);
    printf("\nRoll no.:");
    scanf("%d", &roll_no);
    printf("\nkg:Weight:");
    scanf("%f", &weig);
    printf("\nm:Height:");
    scanf("%e", &heig);
    BMI = weig/(heig*heig);
    printf("BMI=%f", BMI);
    getch();
}