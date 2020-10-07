#include<stdio.h>

void time(){

int from,to;
double t1,t2;

printf("Convert from:\t\tseconds(1)\t\tminutes(2)\t\thours(3)\t\tdays(4)\n\t\tweeks(5)\t\tmonths(6)\t\tyears(7)\t\tDecades(8)\n\t\tcenturies(9)\
       \t\tmilleniums(10)\t\tlight years(11)\t\tGenerations");
scanf("%d",&from);
printf("Convert to:\t\tseconds(1)\t\tminutes(2)\t\thours(3)\t\tdays(4)\n\t\tweeks(5)\t\tmonths(6)\t\tyears(7)\t\tDecades(8)\n\t\tcenturies(9)\
       \t\tmilleniums(10)\t\tlight years(11)\t\tGenerations");
scanf("%d",&to);
if(from==to){
    printf("Enter time:");
    scanf("%lf",&t1);
    printf("The resultant value is %d",t1);
}
else if(from!=to){
        printf("Enter the time:");
        scanf("%d",&t1);
        if(from==1){
                if(to==2){
                t2= t1/60;
                if(t2==1){
                    printf("%f seconds = 1 minute",t1);
                }
                else if(t1==1){
                    printf("1 second = %f minutes",t2);
                }
                else{
                printf("%f seconds = %f minutes",t1,t2);
                }
                }
                if(to==3){
                    t2=t1/3600;
                      if(t2==1){
                    printf("%f seconds = 1 hour",t1);
                }
                else if(t1==1){
                    printf("1 second = %f hours",t2);
                }
                else{
                    printf("%f seconds = %f hours",t1,t2);
                }

        }

        }
}
