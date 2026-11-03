#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    (n % 2 == 0) ? printf("Even") : printf("Odd");
    return 0;
}
//condition ? expression_if_true : expression_if_false;
