#include <stdio.h>

int findLargestDigit(int number)
{
    int largest = 0;
    
    while (number > 0)
    {
        int digit = number % 10;
        
        if (digit > largest)
        {
            largest = digit;
        }
        
        number /= 10;
    }
    
    return largest;
}

int main()
{
    int number;
    scanf("%d", &number);
    
    int largestDigit = findLargestDigit(number);
    printf("%d
", largestDigit);
    
    return 0;
}
