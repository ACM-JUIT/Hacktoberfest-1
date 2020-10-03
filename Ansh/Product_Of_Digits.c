/* This program is written to find the product of digits of a number which is entered by the user
   Created by Ansh Agrawal
   Created on 2/10/2020
   */
#include<stdio.h>
int main()
{
    int num,digit,product=1;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num!=0)
    {
       digit=num%10;
       product*=digit;
       num/=10;
    }
    printf("Product of digits is: %d", product);
    return 0;
}