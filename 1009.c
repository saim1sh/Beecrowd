#include<stdio.h>
int main()
{

    double s,v,t;
    char name;
    scanf("%s %lf %lf",&name,&s,&v);
    t=s+v*.15;
    printf("TOTAL = R$ %.2lf\n",t);
    return 0;

}
