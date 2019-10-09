#include <stdio.h>

int list[100000][2];

void sort(int p, int l, int r, int xy)
{
    printf("l, r = %d %d\n", l, r);

    int buffer[1][2];
    int i = l;
    int j = r;
    
    while(i < j)
    {
        while((int)list[p][xy] >= (int)list[i][xy] && i < r){i++;}
        while((int)list[p][xy] < (int)list[j][xy] && j > l){j--;}

        if(i < j)
        {
            buffer[0][xy] = list[i][xy];
            list[i][xy] = list[j][xy];
            list[j][xy] = buffer[0][xy];
            printf("i, j = %d %d\nxy = %d %d\n", i, j, xy, xy^1);
            buffer[0][xy^1] = list[i][xy^1];
            list[i][xy^1] = list[j][xy^1];
            list[j][xy^1] = buffer[0][xy^1];
        }

    }
    
    buffer[0][xy] = list[p][xy];
    list[p][xy] = list[j][xy];
    list[j][xy] = buffer[0][xy];

    buffer[0][xy^1] = list[p][xy^1];
    list[p][xy^1] = list[j][xy^1];
    list[j][xy^1] = buffer[0][xy^1];
    
    for(int ii = 0; ii < 5; ii++)
    {
        printf("a = %d, %d\n", list[ii][0], list[ii][1]);
    }
    printf("\n");
    
    sort((int)(l + j - 1)/2, l, j - 1, xy);
    sort((int)(j + 1 + r)/2, j + 1, r, xy);

}

int main()
{
    int l, r, i, n;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &list[i][0], &list[i][1]);
    }

    /*
    for(i = 0; i < n; i++)
    {
        printf("list = %d, %d, %d\n", list[i][0], list[i][1], (int)list[i][0] + (int)list[i][1]);
    }
    */

    sort((int)(n-1)/2, 0, n - 1, 1);
    //sort((int)n/2, 0, n - 1, 0);
    
    printf("a\n");
    for(i = 0; i < n; i++)
    {
        printf("a = %d, %d\n", list[i][0], list[i][1]);
    }
    
    return 0;
}