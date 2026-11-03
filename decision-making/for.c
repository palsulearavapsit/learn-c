#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the number whose factorial you want:    ");
    scanf("%d" , &n);
    double f = 1;
    for (int i = 1; i<=n ;i++)
    {
       f = f*i;
    }
    printf("factorial is %f" , f);
}