#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N,arr[100];
    scanf("%d ",&N);

    for(int i=0;i<N;i++)
    {
        scanf("%d ",&arr[i]);
    }

    int p;
    scanf("%d ",&p);

    for(int j=p;j<N;j++)
    {
        int rem,reverse=0;
        while(arr[j]!=0)
        {
            rem = arr[j]%10;
            reverse = reverse *10 +rem;
            arr[j] = arr[j]/10;
        }
        printf("%d ",reverse);
    }
    return 0;
}
