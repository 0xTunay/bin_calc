/*
   Программа для конвертации чисел: Напиши программу, которая будет конвертировать числа между разными системами счисления 
   (двоичная, восьмеричная, десятичная, шестнадцатеричная).
   */
#include <stdio.h>
#include "main.h"

void binary()
{
    int matrix[8] = {128,64,32,16,8,4,2,1};
    int i = 0;
    int user;

    int leng = sizeof(matrix)/ sizeof(matrix[0]);
    puts("Enter number before 255");
    scanf("%d",&user);
    while(i<leng)
    {
        if(user>=matrix[i]){
            printf("1");
            user -=matrix[i];
        } else {
            printf("0");
        }
        i++;
    }
    
    printf("\n");

}


void octal(){
    puts("Hello octal");

}
void decimal(){
    puts("Hello decimal");

}
void hexadecimal(){
    puts("Hello hexadecimal");

}

int main(void)
{
    int user;
    puts("Which system should the number be converted to?: 1: decimal, 2: hexadecimal, 3: octal, 4: binary");

    scanf("%d\n",&user);

    switch (user)
    {
        case 1:
            decimal();
            break;
        case 2:
            hexadecimal();
            break;
        case 3: 
            octal();
            break;
        case 4:
            binary();
            break;
        default:
            break;
    }

}
