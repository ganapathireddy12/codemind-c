#include <stdio.h>

int isPrime(int number)
{
    if (number <= 1)
    {
        return 0;
    }
    
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}

int main()
{
    int number;
    scanf("%d", &number);
    
    if (isPrime(number))
    {
        printf("prime
");
    }
    else
    {
        printf("not a prime
");
    }
    
    return 0;
}
