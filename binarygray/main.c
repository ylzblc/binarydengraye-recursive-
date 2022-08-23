#include <stdio.h>
#include <stdlib.h>

int binarydengraye(int binary)
{
    int a, b, sonuc = 0, i = 0;

    if (!binary)
    {
        return 0;
    }
    else
    {
        a = binary % 10;
        binary = binary / 10;
        b = binary % 10;
        if ((a && !b) || (!a && b))
        {
            return (1 + 10 * binarydengraye(binary));
        }
        else
        {
            return (10 * binarydengraye(binary));
        }
    }
}
int main ()
{
    int binary, gray;

    printf("Binary bir sayi giriniz: ");
    scanf("%d", &binary);
    gray = binarydengraye(binary);
    printf("%d sayisinin gray kodu %d\n", binary, gray);
    return 0;
}


