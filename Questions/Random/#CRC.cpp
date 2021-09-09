#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int j;
    int k = 0;
    int flag = 1;
    int a[32], generator[32], receiver[20], divisor[32], n, m;
    printf("Input Enter the degree of generator : ");
    scanf("%d", &n);
    printf("\n Input Enter the generator : \n");
    for (i = 0; i <= n; i++)
        scanf("%d", &generator[i]);
    printf("\n Input Enter the degree of frame : ");
    scanf("%d", &m);
    printf("Input Enter the frame : \n");
    for (i = 0; i <= m; i++)
        scanf("%d", &a[i]);
    if (m < n || (generator[0] && generator[n]) == 0)
    {
        printf("This is not a proper generator \n");
        exit(0);
    }
    for (i = m + 1; i <= m + n; i++)
        a[i] = 0;
    for (j = 0; j <= n; j++)
        receiver[j] = a[j];
    for (i = n; i <= m + n; i++)
    {
        if (i > n)
        {
            for (j = 0; j < n; j++)
                receiver[j] = receiver[j + 1];
            receiver[j] = a[i];
        }
        if (receiver[0])
            divisor[k++] = 1;
        else
        {
            divisor[k++] = 0;
            continue;
        }
        for (j = 0; j <= n; j++)
            receiver[j] = receiver[j] ^ generator[j];
    }
    printf("\n The Quotient is : ");
    for (j = 0; j < k; j++)
        printf("%d ", divisor[j]);
    printf("\nThe Reminder is : ");
    for (i = 1; i <= n; i++)
        printf("%d ", receiver[i]);
    printf("\n The Transmitted frame is : ");
    for (i = m + 1, j = 1; i <= m + n; i++, j++)
        a[i] = receiver[j];
    for (i = 0; i <= m + n; i++)
        printf("%d ", a[i]);
    printf("\n");

    m = m + n;
    for (j = 0; j <= n; j++)
        receiver[j] = a[j];
    k = 0;
    for (i = n; i <= m; i++)
    {
        if (i > n)
        {
            for (j = 0; j < n; j++)
                receiver[j] = receiver[j + 1];
            receiver[j] = a[i];
        }
        if (receiver[0])
            divisor[k++] = 1;
        else
        {
            divisor[k++] = 0;
            continue;
        }
        for (j = 0; j <= n; j++)
            receiver[j] = receiver[j] ^ generator[j];
    }
    printf("\n The Quotient is : ");
    for (j = 0; j < k; j++)
        printf("%d ", divisor[j]);
    printf("\n The Syndrome code is : ");
    for (i = 1; i <= n; i++)
        printf("%d ", receiver[i]);
    for (i = 1; i <= n; i++)
    {
        if (receiver[i])
            flag = 0;
    }
    if (flag)
        printf("\n There is no Error\n");
    else
        printf("\n An Error is found.");
    return 0;
}