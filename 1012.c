#include<stdio.h>
int main()
{
    float A,B,C;
    scanf("%f %f %f",&A,&B,&C);
    float TRIANGULO=.5*A*C;
    float CIRCULO=3.14159*C*C;
    float TRAPEZIO=.5*(A+B)*C;
    float QUADRADO=B*B;
    float RETANGULO=A*B;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);
}
