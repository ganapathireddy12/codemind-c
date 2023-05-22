#include <stdio.h>

int sq(int b)
{
    int s = 0;
    while (s * s <= b)
    {
        s++;
    }
    s--; // Adjust the value of s since we overshot the square root
    int p = s * s;
    if (p == b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (sq(a[i]) == 1)
        {
            sum = sum + a[i];
        }
    }
    printf("%d", sum);
    return 0;
}
