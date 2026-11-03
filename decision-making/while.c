#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    int fact = 1;
    printf("enter the number whose factorial you want:    ");
    scanf("%d" , &n);
     while(n>=1)
     {
        fact = fact*n;
        n--;
     }
     printf("factorial of n = %d" , fact);
}