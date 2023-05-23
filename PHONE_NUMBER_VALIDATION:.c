#include <stdio.h>
#include <string.h>

int isValidMobileNumber(const char *number)
{
    int length = strlen(number);
    
    if (number[0] == '0' || length != 10)
    {
        return 0;  // Invalid number
    }
    
    for (int i = 0; i < length; i++)
    {
        if (number[i] < '0' || number[i] > '9')
        {
            return 0;  // Invalid number
        }
    }
    
    return 1;  // Valid number
}

int main()
{
    char number[11];
    scanf("%s", number);
    
    if (isValidMobileNumber(number))
    {
        printf("Valid
");
    }
    else
    {
        printf("Invalid
");
    }
    
    return 0;
}
