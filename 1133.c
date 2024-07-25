#include<stdio.h>
int main()
{
    int i,j,k,st,en;
    scanf("%d %d",&i,&j);
    if(i>=0 && j>=0)
    {
        if(i>j)
        {
            st=j;
            en=i;
        }
        else if(i<j)
        {
            st=i;
            en=j;
        }
        for(k=st+1;k<en;k++)
        {
            if(k%5==2 || k%5==3)
            {
                printf("%d\n",k);
            }
        }
    }

}
