/*--------------------------------------------
~ 18/03/2025
~ Simple program to automatically calculate
fibonacci sequence numbers with a custom range
of the users choice. 
~ ovh.feminine216@passinbox.com
----------------------------------------------*/

#include <stdio.h>

int main() {
    int nFib = 1000;
    unsigned long long int a = 0;
    unsigned long long int b = 1;
    printf("%d", a);
    printf("\n%d", b);
    for (int i = 0; i < nFib; i++) {
        unsigned long long int newFib = a + b;
        printf("\n%d", newFib);
        a = b;
        b = newFib;
    }
}
