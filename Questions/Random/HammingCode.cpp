#include <stdio.h>
#include <math.h>
int dataword[50];
int codeword[50];
int hamming_calculation(int p, int c)
{
    int count = 0;
    int i = p - 1;
    int j;
    while (i < c)
    {
        for (j = i; j < i + p; j++)
        {
            if (codeword[j] == 1)
                count++;
        }
        i = i + 2 * p;
    }
    if (count % 2 == 0)
        return 1;
    else
        return 0;
}
void syndrome_bit(int c, int n)
{
    int arr[n];
    int x = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        int p = (int)pow(2, i);
        int value = hamming_calculation(p, c);
        arr[x] = value;
        x++;
    }
    printf("\n The Syndrome bit is: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
}
void get_Result(int dataword[], int n)
{
    int i = 0;
    int no_of_redundantbits = 0;
    int codeword_length, j, k;
    while (n > (int)pow(2, i) - (i + 1))
    {
        no_of_redundantbits++;
        i++;
    }
    codeword_length = no_of_redundantbits + n;
    j = k = 0;
    for (i = 0; i < codeword_length; i++)
    {
        if (i == ((int)pow(2, k) - 1))
        {
            codeword[i] = 0;
            k++;
        }
        else
        {
            codeword[i] = dataword[j];
            j++;
        }
    }
    for (i = 0; i < no_of_redundantbits; i++)
    {
        int position = (int)pow(2, i);
        int value = hamming_calculation(position, codeword_length);
        codeword[position - 1] = value;
    }
    printf("\nThe generated Code Word is: ");
    for (i = codeword_length - 1; i >= 0; i--)
    {
        printf("%d", codeword[i]);
    }
    if (codeword[3] == 0)
        codeword[3] = 1;
    else
        codeword[3] = 0;
    syndrome_bit(codeword_length, no_of_redundantbits);
}
int main()
{
    int n;
    printf("Enter no of bits in dataword: ");
    scanf("%d", &n);
    char string1[n];
    int arr[n];
    printf("Enter the message DataWord:");
    scanf("%s", string1);
    int i;
    for (i = 0; i < n; i++)
        arr[n - 1 - i] = (int)string1[i] - 48;
    get_Result(arr, n);
    return 0;
}