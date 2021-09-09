#include <stdio.h>
void main()
{
    int a[6], b[6], sender_check, receiever_check, sender_sum = 0, receiever_sum = 0;
    int i;
    printf("\nSender Side");
    printf("\nEnter the values in hex: ");
    for (i = 0; i < 6; i++)
    {
        scanf("%x", &a[i]);
    }
    printf("\nEnter checksum: ");
    scanf("%x", &sender_check);
    for (i = 0; i < 6; i++)
    {
        sender_sum = sender_sum + a[i];
    }
    sender_sum = sender_sum + sender_check;
    printf("\nThe sum is %x", sender_sum);
    sender_sum = sender_sum + 2;
    sender_sum = ~sender_sum;
    printf("\nThe checksum generated is %x", sender_sum);
    printf("\nReceiver Side");
    printf("\nEnter the values in hex: ");
    for (i = 0; i < 6; i++)
    {
        scanf("%x", &b[i]);
    }
    printf("\nEnter checksum: ");
    scanf("%x", &receiever_check);
    for (i = 0; i < 6; i++)
    {
        receiever_sum = receiever_sum + b[i];
    }
    receiever_sum = receiever_sum + receiever_check;
    printf("\nThe sum is %x", receiever_sum);
    receiever_sum = receiever_sum + 2;
    receiever_sum = ~receiever_sum;
    printf("\nThe checksum generated is %x", receiever_sum);
    if (receiever_sum == 0000)
        printf("\nThere is no error in Transmission!");
    else
        printf("\nError!");
}