#include <stdio.h>

int isUniqueNumber(int number)
{
    int digits[10] = {0};  // Array to track the occurrence of each digit
    
    while (number > 0)
    {
        int digit = number % 10;
        if (digits[digit] == 1)
        {
            return 0;  // Digit repeated, not a unique number
        }
        digits[digit] = 1;
        number /= 10;
    }
    
    return 1;  // All digits are unique, it is a unique number
}

int main()
{
    int number;
    scanf("%d", &number);
    
    if (isUniqueNumber(number))
    {
        printf("Unique Number
");
    }
    else
    {
        printf("Not Unique Number
");
    }
    
    return 0;
}
