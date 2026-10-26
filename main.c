#include <stdio.h>

void sequence(int a, int b, int smaller)
{
    for (int i = smaller; i >= 1; i--)
    {
        if (a%i==0 && b%i==0)
        {
            printf("Greatest common divisor: %d\n", i);
            break;
        }
    }
}
int smalldig(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else    {
        return b;
    }
}

int main()
{
    int a = 1;
    int b = 1;
    int smaller;
    printf("Enter 2 integers as a, b: ");
    scanf("%d, %d",&a,&b);
    if (a==0 || b==0) {
        printf("Integer cannot be 0 \n");
        return 0;
    }
    smaller = smalldig(a, b);
    sequence(a, b, smaller);
    return 0;
}