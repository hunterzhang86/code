
#include <stdio.h>
#define N 1000

int main()
{
    freopen("1018.in" ,"r", stdin);
    int n, num[N],search_num ,sum ,i ;
    while(scanf("%d" ,&n )!=EOF)
    {
        sum=0;
        if(n==0 )
            return 0;
        for(i=0 ;i <n; i++)
        {
            scanf("%d" ,&num [i ]);
        }
        scanf("%d" ,&search_num );
        for(i=0 ;i <n; i++)
        {
            if(num[i]==search_num )
                sum++;
        }
        printf("%d\n" ,sum );
    }
    return 0;
}
