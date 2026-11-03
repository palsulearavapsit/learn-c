#include<stdio.h>
int checkEVENorODD(int n)
{
    if (n%2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(void)
{
    int n;
    int result;
    printf("enter the number that you want to check");
    scanf("%d" , &n);
    result = checkEVENorODD(n);
     if (result == 1)
     {
        printf("even");
     }
     else
     {
        printf("odd");
     }
}