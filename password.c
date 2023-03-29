// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool valid(string password);
bool isUpperCase(string password);
bool isLowerCase(string password);
bool isSymbol(string password);
bool isNumber(string password);


int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    if (isUpperCase(password) == true && isLowerCase(password) == true && isSymbol(password) == true && isNumber(password) == true)
    {
        return true;
    }
    return false;
}
bool isUpperCase(string password)
{
    for (int i = 0; int n = strlen(password); i < n; i++)
    {
        if ((int) password[i] >= 65 || (int) password[i] <= 90)
        {
            return true;
        }
    }
    return false;
}

bool isLowerCase(string password)
{
        return true;
}

bool isSymbol(string password)
{
        return true;
}

bool isNumber(string password)
{
        return true;
}
