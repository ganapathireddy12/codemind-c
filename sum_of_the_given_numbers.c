#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);  // Read the number of pairs
    
    for (int i = 0; i < N; i++)
    {
        int num1, num2;
        scanf("%d%d", &num1, &num2);  // Read each pair of numbers
        
        int sum = num1 + num2;  // Calculate the sum
        
        printf("%d
", sum);  // Print the sum on a separate line
    }
    
    return 0;
}
