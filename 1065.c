#include<stdio.h>
int main()
{
    int i,c=0,n;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&n);
        if(n%2==0){
            c++;
        }
    }
    printf("%d valores pares\n",c);
}
