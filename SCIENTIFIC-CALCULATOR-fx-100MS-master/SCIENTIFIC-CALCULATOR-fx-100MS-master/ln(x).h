#include <stdio.h>

double ln(double x){
 x=x-1;
return (x-((float)x*x/2)+((float)x*x*x/3)-((float)x*x*x*x/4)+((float)x*x*x*x*x/5)-((float)x*x*x*x*x*x/6)+((float)x*x*x*x*x*x*x/7)
-((float)x*x*x*x*x*x*x*x/8)+((float)x*x*x*x*x*x*x*x*x/9)-((float)x*x*x*x*x*x*x*x*x*x/10));
}
