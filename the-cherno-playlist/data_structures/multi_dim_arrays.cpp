#include <iostream>

int main()
{
    int** a2d = new int*[50];
    // each pointer points to an array
    for (int i = 0; i < 50; i++)
    {
        a2d[i] = new int[50];
    }

    // deleting it
    for (int i = 0; i < 50; i++)
    {
        delete[] a2d[i];
    }
    delete[] a2d;

    // but it would be faster just to create a 1d array and access it like 
    // a two d array so its all in one location in emmory
}