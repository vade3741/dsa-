// Given string str of size N.
// The task is to write a recursive function to
// replace all occurrences of pi with 3.14 in
//  the given string and print the modified string.4

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//recursive approach having 
// Time complexity: O(N) where N is length of given string

// Auxiliary space: O(N) for call stack
void replacePi(char a[], int i)
{
    if (a[i] == '\0' && a[i + 1] == '\0')
    {
        return;
    } // loking for pi for current location
    if (a[i] == 'p' && a[i + 1] == 'i')
    {

        int j = i + 2;
        while (a[j] != '\0')
        {
            j++;
        }
        // shiftinng om right to left direction
        while (j >= i + 2)
        {

            a[j + 2] = a[j];
            j--;
        }
        // replacement and recursive call for remaining part
        a[i] = '3';
        a[i + 1] = '.';
        a[i + 2] = '1';
        a[i + 3] = '4';
        replacePi(a, i + 4);
    }
    else
    {
        // got ot next position
        replacePi(a, i + 1);
    }
}

int main()
{
   char str[] = "pippppiiiipi";
 
    // Function call
    replacePi(str,0);
 
    cout << str;
    return 0;
}