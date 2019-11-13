#include <stdio.h>

int main(){
    int list[10000] = {0, };

    int n, m;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &m);
        list[m-1] ++;
    }

    for(int i = 0; i< 10000; i++){
        if(list[i] != 0){
            for(int j = 0; j < list[i]; j++){
                printf("%d\n", i+1);
            }
        }
    }

    return 0;
}