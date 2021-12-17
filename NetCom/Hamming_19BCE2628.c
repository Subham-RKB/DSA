#include <stdio.h>
#include <math.h>
#include <malloc.h>
int getr(int n)
{
    int r = 1;
    while (pow(2, r) < r + n + 1)
        ++r;
    return r;
}
int main()
{
    printf("19BCE2628 Subham Chapagain\n");
    int num;
    printf("Enter number of bits:\n >> ");
    scanf("%d", &num);
    char bits[50];
    printf("Enter the bits:\n >> ");
    scanf("%s", bits);

    int r = getr(num);
    printf("Number of redundant bits: %d\n", r);
    int total = num + r;
    char code[50];
    code[total] = '\0';
    int pos = 0;
    for (int i = 0; i < total; ++i)
    {
        if (__builtin_popcount(total - i) == 1)
        {
            code[i] = '0';
        }
        else
        {
            code[i] = bits[pos];
            ++pos;
        }
    }

    int parity, p = 1, k;
    while (p < total)
    {
        k = total - p;
        parity = 0;

        while (k >= 0)
        {
            for (int i = k; i > k - p; --i)
            {
                if (i < 0)
                    break;
                if (code[i] == '1')
                    parity = 1 - parity;
            }
            k -= 2 * p;
        }
        if (parity == 1)
            code[total - p] = '1';
        p = p << 1;
    }

    printf("Code Word: %s\n", code);
    for (int i = 0; i < 50; i++)
    {
        bits[i] = code[i];
    }
    printf("Do you want to flip a bit?(Y/N) ");
    char descision;
    scanf(" %c", &descision);
    if (descision == 'Y')
    {
        printf("Enter bit position to flip: ");
        int bit_position;
        scanf("%d", &bit_position);
        bit_position = total - bit_position;
        if (bits[bit_position] == '1')
            bits[bit_position] = '0';
        else
            bits[bit_position] = '1';
    }
    char syn[20];
    syn[r] = '\0';
    int flag = 0;

    p = 1;
    pos = r - 1;
    while (p < total)
    {
        k = total - p;
        parity = 0;

        while (k >= 0)
        {
            for (int i = k; i > k - p; --i)
            {
                if (i < 0)
                    break;
                if (bits[i] == '1')
                    parity = 1 - parity;
            }
            k -= 2 * p;
        }
        if (parity == 1)
        {
            flag = 1;
            syn[pos] = '1';
        }
        else
        {
            syn[pos] = '0';
        }
        p = p << 1;
        --pos;
    }

    if (flag == 0)
    {
        printf("No Error :)\n");
    }
    else
    {
        printf("Syndrome Bits: %s\n", syn);
        printf("It can be corrected\n");
    }
    return 0;
}