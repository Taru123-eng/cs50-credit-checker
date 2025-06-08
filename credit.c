#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdbool.h>

bool checker(string s)
{
    int sum = 0, sum2 = 0, sum3 = 0;
    int num, num2, k, g, h;
    int len = strlen(s);

    if (len % 2 == 0)
    {
        for (int i = len - 2; i >= 0; i -= 2)
        {
            num = s[i] - '0';
            k = num * 2;
            if (k >= 10)
            {
                g = k % 10;
                h = k / 10;
                sum += g + h;
            }
            else
            {
                sum += k;
            }
        }
        for (int j = 1; j < len; j += 2)
        {
            num2 = s[j] - '0';
            sum2 += num2;
        }
    }
    else
    {
        for (int i = len - 2; i >= 0; i -= 2)
        {
            num = s[i] - '0';
            k = num * 2;
            if (k >= 10)
            {
                g = k % 10;
                h = k / 10;
                sum += g + h;
            }
            else
            {
                sum += k;
            }
        }
        for (int j = 0; j < len; j += 2)
        {
            num2 = s[j] - '0';
            sum2 += num2;
        }
    }

    return ((sum + sum2) % 10 == 0);
}

int main(void)
{
    string s = get_string("Enter your number: ");
    int len = strlen(s);

    if (checker(s))
    {
        if ((len == 13 || len == 16) && s[0] == '4')
        {
            printf("VISA\n");
        }
        else if (len == 16 && s[0] == '5' && (s[1] >= '1' && s[1] <= '5'))
        {
            printf("MASTERCARD\n");
        }
        else if (len == 15 && s[0] == '3' && (s[1] == '4' || s[1] == '7'))
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}


