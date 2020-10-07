#include <stdio.h>
#define RAD 0.0174533

double arcsine(float x){
 return (x+(double)x*x*x/6+(double)3*x*x*x*x*x/40+(double)15*x*x*x*x*x*x*x/336+(double)105*x*x*x*x*x*x*x*x*x/3456\
             +(double)945*x*x*x*x*x*x*x*x*x*x*x/42240+(double)10395*x*x*x*x*x*x*x*x*x*x*x*x*x/599040+(double)135135*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x/9676800+(double)\
             x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x/175472640)/RAD;
}
