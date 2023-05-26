#include <stdio.h>
#include <time.h>
#include <stdlib.h.>

int main()
{
    int count;
    int num, num_positivo = 2147483647, num_negativo = -2147483647;

    srand( (unsigned) time(NULL) );

    count = 0;

    while(count < 10)
    {
        num = (rand() + rand() + rand() + rand()) % 1000000;
        num -= 50000;
        
        if (num > 0)
        {
            if (num < num_positivo)
            {
                num_positivo = num;
            }
            
        }
        if (num < 0)
        {
            if (num > num_negativo)
            {
                num_negativo = num;
            }
            
        }
        
        count++;
    }
    
    if (num_positivo == 2147483647)
    {
        printf("\nO maior numero negativo gerado foi %d\n\n", num_negativo);
        printf("\nNao foi digita numero positivo!");
    }
    else if (num_negativo == -2147483647)
    {
        printf("\nO menor numero postivo gerado foi %d\n\n", num_positivo);
        printf("\nNao foi gerado numero negativo!");
    }
    else
    {
        printf("\nO menor numero postivo gerado foi %d\n\n", num_positivo);
        printf("\nO maior numero negativo gerado foi %d\n\n", num_negativo);
    }

    return 0;
}