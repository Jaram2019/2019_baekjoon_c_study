#include <stdio.h>

int z = 0;
int o = 0;

int fibonacci(int n) {
    if (n == 0) {
        printf("0");
        z ++;
        return 0;
    } else if (n == 1) {
        printf("1");
        o ++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){

    int n, f;

    scanf("%d\n", &n);
    for(int i = 0; i < n; i++){
        scanf("%d\n", f);
        fibonacci(f);
        printf("%d %d\n", z, o);
        z = 0;
        o = 0;
    }

    return 0;
}