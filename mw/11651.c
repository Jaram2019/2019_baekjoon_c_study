#include <stdio.h>

int list[100000][2];

void sort(int p, int l, int r, int xy)
{

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
       
    if(p > l + 1)
        sort((int)(l + j - 1)/2, l, p - 1, xy);
    if(p < r)
        sort((int)(j + 1 + r)/2, p, r, xy);

}

int main()
{
    int l, r, i, n;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &list[i][0], &list[i][1]);
    }

    sort((int)(n-1)/2, 0, n - 1, 1);
    
    for(i = 0; i < n - 1; i++)
    {
        if(list[i][1] == list[i + 1][1])
        {
            int k = i + 2;
            while(list[i][1] == list[i + k][1]){k++;}
            sort((int)(i + k)/2, i, k, 0);
            i = k;
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d, %d\n", list[i][0], list[i][1]);
    }
    
    return 0;
}