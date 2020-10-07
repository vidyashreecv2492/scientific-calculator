#include <stdio.h>

double power(double x,int n){
int i;
double result=1;

for(i=1;i<=n;i++){
    result*=x;
}
return result;
}

