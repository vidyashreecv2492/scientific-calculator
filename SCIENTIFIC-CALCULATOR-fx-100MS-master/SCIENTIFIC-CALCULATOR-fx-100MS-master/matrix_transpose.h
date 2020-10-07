#include <stdio.h>

void matrix_transpose(){

int i,j,n,m;

printf("Enter the number of rows:");
scanf("%d",&n);
printf("Enter the number of columns:");
scanf("%d",&m);

float a[n][m];

for(i=0;i<n;i++){
        printf("Enter the members of row %d :",i+1);
    for(j=0;j<m;j++){
        scanf("%f",&a[i][j]);
    }
}

        printf("The transpose of the matrix is\n:");
        for(j=0;j<m;j++){
            for(i=0;i<n;i++){
                printf("\t\t %.0f",a[i][j]);}
                printf("\n");}
        }

