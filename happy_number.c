#include <stdio.h>

int isHappyNumber(int number)
{
    int visited[1000] = {0};  // Array to track visited numbers
    
    while (number != 1 && number != 7 && !visited[number])
    {
        visited[number] = 1;
        int sum = 0;
        
        while (number > 0)
        {
            int digit = number % 10;
            sum += digit * digit;
            number /= 10;
        }
        
        number = sum;
    }
    
    return (number == 1 || number == 7) ? 1 : 0;
}

int main()
{
    int number;
    scanf("%d", &number);
    
    if (isHappyNumber(number))
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
