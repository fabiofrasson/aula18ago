#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    scanf("%d", &i);
    getchar();

    if(i>=10)
    {
        printf("Maior que 10.");
    }
    else
    {
        if(i>=8 && i<10)
        {
            printf("Entre 8 e 10.");
        }
        else
        {
            printf("Menor que 8");
        }

        return 0;
    }
}
