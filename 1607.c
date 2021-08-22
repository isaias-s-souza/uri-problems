#include<stdio.h>
#include<string.h>
int main()
{
    int t,x,y,cont=0;
    char a[10003],b[10003];
    scanf("%d",&t);
    for(int i = 0; i<t; i++)
    {
        cont =0;
        scanf("%s ",a);
        scanf("%s",b);
        if(strcmp(a,b)!=0)
        {
            for(int j = 0 ; j<strlen(a) ; j++)
            {
                x=a[j]+ '0';
                y=b[j]+ '0';
                if(y>=x)
                {
                    cont+= y-x;
                }
                else
                {
                    cont+= 122-x + y-97 +1;
                }

            }
            printf("%d\n",cont);
        }
        else
            printf("0\n");
            getchar();
    }
    return 0;
}
