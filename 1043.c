#include<stdio.h>
int main()
{
    float A,B,C,perimeter,area;
    scanf("%f %f %f",&A,&B,&C);
    if ((A+B>C) && (B+C>A) && (A+C>B))
    {
        perimeter=A+B+C;
        printf("Perimetro = %.1f\n",perimeter);
    }
    else
    {
        area= (A+B)/2*C;
        printf("Area = %.1f\n",area);
    }

     return 0;
}









