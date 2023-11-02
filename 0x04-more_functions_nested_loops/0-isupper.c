// C program to demonstrate
// isupper() function
#include <ctype.h>
#include <stdio.h>
#include<stdbool.h>

bool _isupper(char i);

int main()
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
    
}

bool  _isupper(char i) {
    if (isupper(i))
        return true;
    else
        return false;
}