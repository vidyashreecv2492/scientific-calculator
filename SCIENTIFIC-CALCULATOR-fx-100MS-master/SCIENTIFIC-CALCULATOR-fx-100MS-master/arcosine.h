#include <stdio.h>
#define PI 3.141592654
#define RAD 0.0174533

double arcosine(float x){
    if(x>=-1&&x<=1){
 return (PI/2-(x+(double)x*x*x/6+(double)3*x*x*x*x*x/40+(double)15*x*x*x*x*x*x*x/336+(double)105*x*x*x*x*x*x*x*x*x/3456\
             +(double)945*x*x*x*x*x*x*x*x*x*x*x/42240)/*+(double)10395*x*x*x*x*x*x*x*x*x*x*x*x*x/599040-(double)135135*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x/9676800*/)/RAD;}
}

