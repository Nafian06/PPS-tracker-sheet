#include<stdio.h>
int main(){
    float n,m,s,p;
    scanf("%f",&s);
    if(s>=0&&s<=400){
        n=s+s*0.15;
        m=n-s;
        p=15;}
    else if(s>=400.01&&s<800.00){
        n=s+s*0.12;
        m=n-s;
        p=12;}
    else if(s>=800.01&&s<=1200.00){
        n=s+s*0.10;
        m=n-s;
        p=10;}
    else if(s>=1200.01&&s<=2000.00){
        n=s+s*0.07;
        m=n-s;
        p=07;}
    else if(s>2000.00){
        n=s+s*0.04;
        m=n-s;
        p=04;}
    printf("Novo salario: %.2f\n",n);
    printf("Reajuste ganho: %.2f\n",m);
    printf("Em percentual: %.0f %%\n",p);
    return 0;
    }
