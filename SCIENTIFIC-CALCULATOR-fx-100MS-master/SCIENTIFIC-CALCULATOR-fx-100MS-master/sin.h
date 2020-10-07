#include <stdio.h>
#define RAD 0.0174533
#define SIN  (x-((float)x*x*x/6)+((float)x*x*x*x*x/120)-((float)x*x*x*x*x*x*x/5040)\
        +((float)x*x*x*x*x*x*x*x*x/362880)-((float)x*x*x*x*x*x*x*x*x*x*x/39916800)+((float)x*x*x*x*x*x*x*x*x*x*x*x*x/6227020800))
float sine(float x){
 basic_sin: if(x>=0&&x<=180){
x*=RAD;

return SIN;
       }
       else if(x>180&&x<=270){
            x-=180;
            x*=RAD;
        return -SIN;
        }
        else if(x>270&&x<360){
            x=360-x;
            x*=RAD;
        return -SIN;}
        else if(x==360||x==-180||x==-360){
            return 0.000000;
        }
        else if(x<0&&x-180){/*Re do function for negative numbers*/
        x*=RAD;
        return SIN;
        }
        else if(x<-180&&x>=-270){
            x=-x;
            x-=180;
            x*=RAD;
        return -SIN;
        }
        else if(x<-270&&x-360){
            x=-x;
            x=360-x;
            x*=RAD;
        return -SIN;
        }
        else if(x>360&&x<720){
            x/=2;
            goto basic_sin;
        }
       }



