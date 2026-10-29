#include <stdio.h>
#include <ctype.h>
//2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY
//1-800-265-5328
//1-800-COL-LECT
//1800COLLECT

int main()
{
    char phone[50];
    char result[50];
    int j = 0;

    printf("Enter a phone number: ");
    scanf("%49s", phone);
    printf("Phone Number: %s\n", phone);
    for (int i = 0; phone[i] != '\0'; i++)
    {
        if (phone[i] == '-' || phone[i] == '.' || (isdigit(phone[i])))
        {
            result[j] = phone[i];
            j++;
        }
        if (phone[i] == 'A' || phone[i] == 'B' || phone[i] == 'C')
        {
            result[j] = '2';
            j++;
        }
        else if (phone[i] == 'D' || phone[i] == 'E' || phone[i] == 'F')
        {
            result[j] = '3';
            j++;
        }
        else if (phone[i] == 'G' || phone[i] == 'H' || phone[i] == 'I')
        {
            result[j] = '4';
            j++;
        }
        else if (phone[i] == 'J' || phone[i] == 'K' || phone[i] == 'L')
        {
            result[j] = '5';
            j++;
        }
        else if (phone[i] == 'M' || phone[i] == 'N' || phone[i] == 'O')
        {
            result[j] = '6';
            j++;
        }
        else if (phone[i] == 'P' || phone[i] == 'Q' || phone[i] == 'R' || phone[i] == 'S')
        {
            result[j] = '7';
            j++;
        }
        else if (phone[i] == 'T' || phone[i] == 'U' || phone[i] == 'V')
        {
            result[j] = '8';
            j++;
        }
        else if (phone[i] == 'W' || phone[i] == 'X' || phone[i] == 'Y')
        {
            result[j] = '9';
            j++;
        }
    }
    result[j] = '\0';
printf("Result: %s\n", result);
}