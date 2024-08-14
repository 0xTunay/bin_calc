/*
Number conversion program: Write a program that will convert numbers between different number systems 
   (binary, octal, decimal, hexadecimal).
   */
#include <stdio.h>
#include "main.h"

void binary_system(int num)
{
    int matrix[8] = {128,64,32,16,8,4,2,1};
    int i = 0;

    int leng = sizeof(matrix)/ sizeof(matrix[0]);
    
    while(i<leng)
    {
        if(num>=matrix[i]){
            printf("1");
            num -=matrix[i];
        } else {
            printf("0");
        }
        i++;
    }
    
    printf("\n");

}

void octal_system(int num){
    puts("enter number");
    scanf("%d",&num);

    printf("%o\n", num); 

}
void decimal_system(int num){
    puts("Hello decimal");

}
void hexadecimal_system(int num){

   puts("dasdasdasd");

}

int main(void)
{
    int choice;
    int num;

    
    puts("which number you want change?");
    scanf("%d",&num);


    puts("Which system should the number be converted to?: 1: decimal, 2: hexadecimal, 3: octal, 4: binary");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
            decimal_system(num);
            break;
        case 2:
            hexadecimal_system(num);
            break;
        case 3: 
            octal_system(num);
            break;
        case 4:
            binary_system(num);
            break;
        default:
            break;
    }

}
