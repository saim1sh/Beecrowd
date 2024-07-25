#include<stdio.h>
int main()
{
    float n,av=0;
    int i,c=0;
    for(i=1;i<=6;i++)
    {
        scanf("%f",&n);
        if(n>0){
            c++;
            av+=n;
        }
    }
    printf("%d valores positivos\n",c);
    float avg=av/c;
    printf("%.1lf\n",avg);
}
