#include<stdio.h>
int main(){
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    if (A>=(B+C)||(B>=(A+C))||(C>=(A+B)))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (A*A==(B*B+C*C)||(B*B==(A*A+C*C))||(C*C==(B*B+A*A)))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (A*A>(B*B+C*C)||(B*B>(C*C+A*A))||(C*C>(B*B+A*A)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (A*A<(B*B+C*C)||(B*B<(C*C+A*A))||(C*C<(B*B+A*A)))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if ( A==B && B==C && C==A){
        printf("TRIANGULO EQUILATERO\n");
    }
    if ((A==B && A!=C) || (A==C && C!=B) || (B==C && B!=A)){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;

 }
