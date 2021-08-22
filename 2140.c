#include<stdio.h>
int main()
{
    int n,i,x,v[1000001],c=0,m;
    scanf("%d",&n);
    for(i=0; i<n; i++);
    {
        scanf("%d",&x);
        v[x]++;
        if(x>m||i==0)
            m=x;
    }
    for(i=0; i<m; i++)
        if(v[i])
            c++;
        printf("%d\n",c);
    return 0;

}
