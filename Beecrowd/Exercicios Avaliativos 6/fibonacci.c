#include <stdio.h>
 
int main() {
 
    int n, i;

    scanf("%d", &n);

    int seq[n];

    seq[0] = 0;
    seq[1] = 1;

    if (n >= 3)
    {
        printf("0 1");
        for (i = 2; i < n; i++)
        {
        seq[i] = seq[i - 1] + seq[i - 2];
        printf(" %d", (seq[i]));
        }
    }
    else if (n == 2)
    {
        printf("0 1");
    }
    else if (n == 1)
    {
        printf("0");
    }

    printf("\n");
 
    return 0;
}