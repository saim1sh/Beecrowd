#include<stdio.h>
int main()
{
    int i,m,n,s1=0,s2=0,s3=0,total;
    char a,b;
    b='%';
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
       scanf("%d %c",&n,&a);
       if('C'==a){
            s1+=n;
       }
       if('R'==a){
            s2+=n;
       }
       if('S'==a){
            s3+=n;
       }
    }
    total=s1+s2+s3;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",s1);
    printf("Total de ratos: %d\n",s2);
    printf("Total de sapos: %d\n",s3);
    printf("Percentual de coelhos: %.2f %%\n",((float)s1/total)*100.00);
    printf("Percentual de ratos: %.2f %%\n",((float)s2/total)*100.00);
    printf("Percentual de sapos: %.2f %%\n",((float)s3/total)*100.00);
}
