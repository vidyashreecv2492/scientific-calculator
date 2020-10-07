#include <stdio.h>
#define RAD 0.0174533

double arctan(float x){
return (x-(double)x*x*x/3+(double)x*x*x*x*x/5-(double)x*x*x*x*x*x*x/7+(double)x*x*x*x*x*x*x*x*x/9-(double)x*x*x*x*x*x*x*x*x*x*x/11\
        +(double)x*x*x*x*x*x*x*x*x*x*x*x*x/13-(double)x*x*x*x*x*x*x*x*x*x*x*x*x*x*x/15+(double)x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x/17
        -(double)x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x/19+(double)x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x/21
        -(double)x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x/23+(double)power(x,25)/25-(double)power(x,27)/27+(double)power(x,29)/29-(double)power(x,31)/31+(double)power(x,33)/33
        -(double)power(x,35)/35+(double)power(x,37)/37)/RAD;

}
