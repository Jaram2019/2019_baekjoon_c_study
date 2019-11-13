#include <stdio.h>

int main() {

    int n, a, b, c;

    scanf("%d", &n);

    int k = 1;
    a = n/10;
    b = n - a*10;
    c = a + b;

    while(n != b*10 + c%10){
        a = b;
        b = c%10;
        c = a + b;
        k++;
    }

    printf("%d\n", k);
    return 0;
}