//Write a C++ program to print all ASCII character with their values.

#include <iostream>
#include <cstdio>

int main()
{
    int i;

    /* Print ASCII values from 0 to 255 */
    for(i=0; i<=255; i++)
    {
        cout << "ASCII value of character %c = %d" << endl;
    }

    return 0;
}
