#include <stdio.h>

void temp(){
int from,to;
double t1,t2,t3;

printf("\n\n\n\t\t\tCelsius(1)\t\t\tFahrenheit(2)\t\t\tKelvin(3)");
printf("\n\n\n\t\t\tConvert from(number):");
scanf("%d",&from);
printf("\n\n\n\t\t\tConvert to(number):");
scanf("%d",&to);
printf("\n\n\n\t\t\tEnter temperature:");
scanf("%lf",&t1);

if(from==to){
    printf("\n\n\n\t\t\t The resulting temperature remains the same; %f",t1);
}
else{
switch(from){
case 1:
    switch(to){
         case 2:
             t2=t1*9/5+32.0;
             printf("\n\n\n\t\t\t%fC=%fF",t1,t2);
             break;
         case 3:
             t2=t1+273.15;
             printf("\n\n\n\t\t\t%fC=%fK",t1,t2);
             break;
    }
break;
case 2:
    switch(to){
        case 1:
            t2=(t1-32.0)*5/9;
            printf("\n\n\n\t\t\t%fF=%fC",t1,t2);
            break;
        case 3:
            t1=(t1-32.0)*5/9;
            t2=t1+273.15;
            printf("\n\n\n\t\t\t%fF=%fK",t1,t2);
            break;

    }
case 3:
    switch(to){
        case 1:
            t2=t1-273.15;
            printf("\n\n\n\t\t\t%fK=%fC",t1,t2);
            break;
        case 2:
            t2=(t1-273.15)*9/5+32;
            printf("\n\n\n\t\t\t%fK=%fF",t1,t2);
            break;
    }


}
}
}
