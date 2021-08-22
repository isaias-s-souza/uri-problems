#include<stdio.h>
int main()
{
    long long int x,y,j,i,nc,n;
    scanf("%lld",&nc);
    for(i=0; i<nc; i++)
    {
        scanf("%lld",&n);
        long long int v[n];
        for(j=0; j<n; j++)
            scanf("%lld",&v[j]);

        for(y=1; y<=n; y++)
            for(j=0; j<n-1; j++)
                if(v[j]>v[j+1])
                {
                    x =v[j];
                    v[j]=v[j+1];
                    v[j+1]=x;
                }

        for(j=0; j<n-1; j++)
            printf("%lld ",v[j]);
        printf("%lld\n",v[j]);
    }
    return 0;
}
