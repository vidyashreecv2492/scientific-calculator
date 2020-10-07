#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include "sin.h"
#include "cos.h"
#include "powerfunction.h"
#include "factorial.h"/*Factorial function inefficient for values after 20*/
#include "ln(x).h"
#include "exponent.h"
#define  E 2.7182818284590452353602874713527
#include "hyperbolic sine.h"
#include "hyperbolic cos.h"
#include "arcosine.h"/*Only correct in the range 45degrees to 130 degrees*/
#include "Determinant.h"
#include "matrice sum.h"
#include "matrix_transpose.h"
#include "matrix_product.h"
#include "arcsine.h"/*Only accurate in the range -45 to +45 degrees*/
#include "arctan.h"/*Work to improve on accuracy*/
#include "tim.h"
#include "Temperature.h"

int main(){
 int command_number,operation_number,exponent,n,m,r;
 float value;
 double number;
 #include <stdio.h>


void pause(){
        int i;
        for(i=0;i<=9999993;i++);

}

 begining:{printf( " \t\t*****     *****                     ******           *******           *****                *******\
        \n");pause();printf("\t\t*****     *****                   **********        ***********         *****              **********\
        \n");pause();printf("\t\t*****     *****    *******       ****              ****     ****        *****           *****\
        \n");pause();printf("\t\t***************     *******     ****              ***************       *****          *****\
        \n");pause();printf("\t\t***************                  ****            *****************      *****          ******\
         \n");pause();printf("\t\t*****     *****                    *********   *******     ********    ***********      ************\
          \n");pause();printf("\t\t*****     *****                     ******  ********     **********  ***********          ********");
          pause();
          }
 printf("\n\n\n\n\n\n\n\t\tTrigonometric functions(1)\tHyperbolic functions(2)");
printf("\t\tSimple Algebraic functions(3)\tLogarithmic and exponential functions(4)");
printf("\n\n\n\t\tConverter(5)\t\t\tMatrix Operations(6)\t\tLinear Equations(7)\t\t\tCalculus(8)");

printf("\n\n\n\t\t\aEnter choose a command number:");
scanf("%d",&command_number);

switch(command_number){

   case 1:
        printf("\n\t\t\tsin(1)\t\t\tcos(2)\t\t\ttan(3)\n\n\n\t\t\tsin-1(4)\t\tcos-1(5)\t\ttan-1(6)");
        printf("\n\n\n\t\t\tPlease choose an operation number:");
        scanf("%d",&operation_number);{
              switch(operation_number){
          case 1:
            printf("\n\n\n\t\t\t\aEnter the value whose (sin) you want to calculate:");
            scanf("%f",&value);
            printf("\n\n\t\t\t\asin %10.4f=%10.4f",value,sine(value));
            break;
          case 2:
            printf("\n\n\n\t\t\t\aEnter the value whose (cos) you want to calculate:");
            scanf("%f",&value);
            printf("\n\n\t\t\t\acos %10.4f=%10.4f",value,cosine(value));
            break;
          case 3:  printf("\n\n\n\t\t\tEnter the value whose (tan) you want to calculate:");
            scanf("%f",&value);
            if(value==90||value==-90||value==270||value==-270){
                printf("\n\n\t\t\ttan is undefined for %f",value);
            }
            else{
            printf("\n\n\n\t\t\t\atan %10.4f=%10.4f",value,(sine(value)/cosine(value)));}
            break;
          case 4:  printf("\n\n\n\t\t\t\aEnter the value whose (sin-1) you want to calculate:");
            scanf("%f",&value);
            if(value<-1||value>1){
                printf("\n\n\n\t\t\tarcsine undefined for this value:");
            }
            else if(value>=-1&&value<=1){
            printf("\n\n\n\t\t\t\a arcsin(%f)   =   %f",value,arcsine(value));}
            break;
          case 5:   printf("\n\n\n\t\t\t\aEnter the value whose (cos-1) you want to calculate:");
            scanf("%f",&value);
            if(value<-1||value>1){
                printf("\n\n\n\t\t\tarcosine undefined for this value:");
            }
            else if(value>=-1&&value<=1){
            printf("\n\n\n\t\t\t\aarcos(%f)=%.4lf",value,arcosine(value));}
            break;
          case 6:  printf("\n\n\n\t\t\t\aEnter the value whose (tan-1) you want to calculate:");
            scanf("%f",&value);
            printf("\n\n\n\t\t\t\aarctan(%f) = %f",value,arctan(value));
            break;
            default: printf("\n\n\n\t\t\t\aYour choice is not valid. Please ensure you choose an assigned operation number.");
          }
              }
        break;
   case 2:
        printf("\n\t\t\t\asinh(1)\t\t\tcosh(2)\t\t\ttanh(3)\n\n\n\t\t\tsinh-1(4)\t\tcosh-1(5)\t\ttanh-1(6)");
        printf("\n\n\n\t\t\t\aPlease choose an operation number:");
        scanf("%d",&operation_number);

          switch(operation_number){
          case 1: printf("\n\n\n\t\t\t\aEnter a value:");
                  scanf("%lf",&number);
                  printf("\n\n\n\t\t\t\asinh(%lf)=%10.4lf",number,hyperbolic_sin(number));
                  break;
          case 2:  printf("\n\n\n\t\t\t\aEnter a value:");
                  scanf("%lf",&number);
                  printf("\n\n\n\t\t\t\acosh(%lf)=%10.4lf",number,hyperbolic_cos(number));
                  break;
          case 3:  printf("\n\n\n\t\t\t\a Enter a value:");
                  scanf("%lf",&number);
                  printf("\n\n\n\t\t\ttanh(%lf)=%10.4lf",number,(float)(hyperbolic_sin(number))/(hyperbolic_cos(number)));
                  break;
        }
        break;
   case 3:
       printf("\n\t\t\t\tx^2(1)\t\t\t\tx^3(2)\t\t\t\tx^y(3)\t\t\t\t1/x(4)\n\n\n\t\t\t\tsquare root of x(5)\t\tnth root of x(6)\t\t10^x(7)\t\t\t\tn!(8)\n\n\n\t\t\t\tnCr(9)\t\t\t\tnPr(10)");
       printf("\n\n\n\t\tPlease choose an operation number:");
       scanf("%d",&operation_number);

       switch(operation_number){
       case 1: printf("\n\n\n\t\t\tEnter x:");
               scanf("%lf",&number);
               printf("\n\n\n\t\t\t%lf^2=%lf",number,number*number);
               break;
       case 2: printf("\n\n\n\t\t\tEnter x:");
               scanf("%lf",&number);
               printf("\n\n\n\t\t\t%lf^3=%lf",number,number*number*number);
               break;
       case 3: printf("\n\n\n\t\t\tEnter x:");
               scanf("%lf",&number);
               printf("\n\n\n\t\t\tEnter y:");
               scanf("%d",&exponent);
               printf("\n\n\n\t\t\t%f^%d=%f",number,exponent,power(number,exponent));
               break;
       case 4: printf("\n\n\n\t\t\tEnter x:");
               scanf("%lf",&number);
               if(number!=0){
               printf("\n\n\n\t\t\t1/%10lf=%10.4lf",number,1.0f/number);}
               else {
                printf("\n\n\n\t\t\tValue of 1/0 is undefined");
               }
               break;
       case 5: printf("\n\n\n\t\t\tEnter x:");
               scanf("%lf",&number);
               printf("\n\n\n\t\t\tsquare root of%10lf=%10.6lf",number,sqrt(number));
               break;
       case 7: printf("\n\n\n\t\t\tEnter x:");
               scanf("%d",&n);
               printf("\n\n\n\t\t\t10^%d=%10lf",n,power(10,n));
               break;
       case 8: printf("\n\n\n\t\t\tEnter n:");
               scanf("%d",&n);
               if(n<0){
                printf("\n\n\n\t\t\tmath error");
               }
               else if (n>=0&&n<66){
                printf("\n\n\n\t\t%10d!=%10llu",n,factorial(n));}
               else{
                printf("\n\n\n\t\t\tmath error");
               }
               break;
        case 9:
            printf("\n\n\n\t\t\tEnter n:");
            scanf("%d",&n);
            printf("\n\n\n\t\t\tEnter r:");
            scanf("%d",&r);
             if(n>=0&&r>=0&&n>=r){
            printf("\n\n\n\t\t\t %dC%d =%10llu",n,r,(factorial(n)/(factorial(r)*factorial(n-r))));}
            else{
                printf("\n\n\n\t\t\tmath error");
            }
            break;
        case 10:
             printf("\n\n\n\t\t\tEnter n:");
            scanf("%d",&n);
            printf("\n\n\n\t\t\tEnter r:");
            scanf("%d",&r);
             if(n>=0&&r>=0&&n>=r){
            printf("\n\n\n\t\t\t %dP%d =%10llu",n,r,(factorial(n)/factorial(r)));}
            else{
                printf("\n\n\n\t\t\tmath error");
            }
            break;

       }
               break;
   case 4:
        printf("\n\tln(x) (1)\t\tlog(base10)(2)\t\tlog(base x)(3)\t\te^x(4):");
        printf("\nPlease choose an operation number:");
        scanf("%d",&operation_number);
        switch (operation_number){
         case 1:
              printf("Enter a number:");
                 scanf("%lf",&number);
                 if(number<0){
                    printf("math error");
                 }
                 else
                 printf("\n\t\tln(%lf)=%10lf",number,ln(number));/*ln header function has problem*/
                 break;
         case 4:
              printf("\n\t\t\tEnter a value for x");
              scanf("%lf",&number);
              printf("\n\t\t\te^%.0lf:=%.9lf",number,power(E,number));}
              /*else{
                printf("\n\t\t\te^%lf:=%.5lf",number,expo(number));
              }Exponent function not very effective here*/
              break;

        break;
   case 5:
        printf("\n\n\n\t\tCurrency(1)\t\tWeight and Mass(2)\t\tDistance(3)\
               \n\n\n\t\tNumber base(4)\t\tTemperature(5)\t\tTime(6)");
        printf("\n\n\n\t\tPlease choose an operation number:");
        scanf("%d",&operation_number);

        switch(operation_number){
            case 5: temp();break;
            case 6: time();break;
        }
        break;
   case 6:
       printf("\n\t\tMatrix Inverse(1)\t\tDeterminant(2)\t\tTranspose(3)\t\tSum  of matrices(4)\t\tProduct of Matrices(5)\t\trang(6)\t\tTrace(7)");
       printf("\n\tEnter an operation command:");
       scanf("%d",&operation_number);

      switch(operation_number){
       case 2: det();break;
       case 4: matrix_sum();break;
       case 3: matrix_transpose();break;
       case 5: matrix_product();break;
       }

   break;


   default: printf("\nYour choice does not fall in this group");
}
printf("\n\n\n\t\t\tDo you want to continue?\n\n\n\t\t\t Yes(1)\t\tNo(2):");
scanf("%d",&n);
system("cls");
if(n==1){
    goto begining;}

    return 0;
    }







