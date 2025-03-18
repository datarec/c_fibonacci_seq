/*--------------------------------------------
~ 18/03/2025
~ Simple program to automatically calculate
fibonacci sequence numbers with a custom range
of the users choice. 
~ ovh.feminine216@passinbox.com
----------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int n = 44;
unsigned long long first = 0;
unsigned long long second = 1;
int count = 0;

int rFibonacci() {
    if (count == 0) {
        printf("\n%d", first);
        printf("\n%d", second);
    }
    unsigned long long fs = first + second;
    printf("\n%d", fs);
    first = second;
    second = fs;
    if (count != n) {
        count++;
        return 1;
    }
    else if (count == n) {
        exit(0);
    }
}

int main() {
    rFibonacci();
    main();
}
