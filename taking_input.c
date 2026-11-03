#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    float x;
    printf("Enter the number whose square root you want");
    scanf("%d" , &num);
    x = sqrt(num);
    printf("the number you enter is %d and the sqrt is %f" , num , x);
    return 0;
}