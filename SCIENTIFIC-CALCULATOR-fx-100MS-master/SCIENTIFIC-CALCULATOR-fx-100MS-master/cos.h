#include <stdio.h>
#define RAD 0.0174533
#define COS (1-((float)x*x/2)+((float)x*x*x*x/24)-((float)x*x*x*x*x*x/720)+((float)x*x*x*x*x*x*x*x/40320))

float cosine(float x)
 {
    basic_cos: if(x>=0&&x<=90){
    x=x*RAD;
    return COS;}
    else if(x>90&&x<=180){
    x-=180;
    x*=RAD;
    return -1*COS;}
    else if(x>180&&x<270){
    x-=180;
    x*=RAD;
    return -1*COS;}
    else if(x>270&&x<=360){
    x=360-x;
    x*=RAD;
    return COS;
    }
    else if(x<0){
        x=-x;
        goto basic_cos;
    }
    else if(x==270){
        return 0.00000;
    }

}
