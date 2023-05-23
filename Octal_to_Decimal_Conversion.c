#include <stdio.h>

int convertOctalToDecimal(char octal[])
{
    int decimal = 0;
    int base = 1;
    int i = 0;
    
    // Calculate the decimal value using octal digits
    while (octal[i] != NULL)
    {
        decimal = decimal * 8 + (octal[i] - '0');
        i++;
    }
    
    return decimal;
}

int main()
{
    char octal[100];
    scanf("%s", octal);
    
    int decimal = convertOctalToDecimal(octal);
    printf("%d
", decimal);
    
    return 0;
}
