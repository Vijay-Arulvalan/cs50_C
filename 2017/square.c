#include <stdio.h>
#include <cs50.h>

int square(int n);
int main(void)
{
    int x = get_int("X:");
    printf ("%i\n", square(x));
}

int square(int n)
{
    return n * n;
}