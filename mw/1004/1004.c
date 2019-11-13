#include <stdio.h>

int distance(int px, int py, int pr, int x, int y){

    int d = (px - x)*(px - x) + (py - y)*(py - y);

    if(d > pr*pr)
        return 0;
    else
        return 1;
}

int main(){

    int n, m, x1, y1, x2, y2, result;

    scanf("%d", &n);

    for(int k = 0; k < n; k++){

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &m);

        int p[m][3];
        result = 0;

        for(int i = 0; i < m; i++)
            scanf("%d %d %d", &p[i][0], &p[i][1], &p[i][2]);

        for(int i = 0; i < m; i++)
            result += (distance(p[i][0], p[i][1], p[i][2], x1, y1) == distance(p[i][0], p[i][1], p[i][2], x2, y2)) ? 0 : 1;

        printf("%d\n", result);
    }
}