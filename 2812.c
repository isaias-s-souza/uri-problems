#include<stdio.h>
int main()
{
    int i,n,m,k,j,cont,TamVetorImp,meio,LenIMPAR;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        TamVetorImp=cont=LenIMPAR=0;
        scanf("%d",&m);
        int v[m];
        for( j=0; j<m; j++)
        {
            scanf("%d",&v[j]);
            if(v[j]%2==1)
                {
                    cont++;
                }
        }
        if(cont!=0)
        {
            int vimpares[cont];
            for( j=1; j<cont; j++)
                for( k=0; k<cont-j; k++)
                    if( v[k]>v[k+1] )
                    {
                        int x = v[k];
                        v[k] = v[k+1];
                        v[k+1] = x;
                    }

            for(j=0;j<m;j++)
              if(v[j]%2==1)
                {
                    vimpares[TamVetorImp]=v[j];
                    TamVetorImp++;

                }
            if(TamVetorImp==0)
                {
                     printf("\n");
                     continue;
                }
            if(TamVetorImp==2)
                {
                   printf("%d %d\n",vimpares[1],vimpares[0]);
                   continue;

                }
                else
                {
                    if(TamVetorImp%2==1)
                   {
                       meio=TamVetorImp;
                       meio--;
                       meio/=2;
                       meio++;
                       for(k=TamVetorImp-1,j=0 ;k>=meio-1;k--,j++)
                        {

                            if(k!=TamVetorImp-1)
                                printf(" ");
                            printf("%d",vimpares[k]);
                            if(j==meio-1) //se for um vetor de numero de posicao par
                                break;
                            else
                            printf(" %d",vimpares[j]);


                        }
                        printf("\n");

                   }
                   else
                   {
                       meio/=2;

                       for(k=TamVetorImp-1,j=0 ;k>meio;k--,j++)
                        {
                         if(k!=TamVetorImp-1)
                                printf(" ");
                            printf("%d %d",vimpares[k],vimpares[j]);

                        }
                        printf("\n");
                   }
                    //for(j=0;j<contimp;j++)
                            //printf("%d ",vimpares[j]);

                }
            }
            else
            {
                printf("\n");
            }

    }
    return 0;
}
