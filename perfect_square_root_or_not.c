#include <stdio.h>

int isPerfectSquare(int number)
{
    int root = 0;
    
    while (root * root <= number)
    {
        if (root * root == number)
            return 1;
        root++;
    }
    
    return 0;
}

int main()
{
    int number;
    scanf("%d", &number);
    
    if (isPerfectSquare(number))
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    
    return 0;
}
