 #include <stdio.h>
    int main()
    {
         int p1,p2;
         float price,paid;
         scanf("%d %d %f",&p1,&p2,&price);
         paid=p2*price;
         scanf("%d %d %f",&p1,&p2,&price);
         paid+=p2*price;
         printf("VALOR A PAGAR: R$ %.2f\n",paid);

         return 0;
    }
