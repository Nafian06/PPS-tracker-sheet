#include<stdio.h>
int main(){
    int a,b,s,sum;
    scanf("%d %d %d",&a,&b,&s);
    sum = a;
    if ( a<b || a<s){
    if (b<s){
        sum=s;
    }
       else {
        sum=b;
       }
    }
       printf("%d eh o maior\n",sum);
       return 0;
}
