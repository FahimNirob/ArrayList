#include<stdio.h>
int main(){
    int a[10][10],b[10][10];
    int result[10][10];
    int i,j,k;
    int m,n;
    int sum = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d",&m,&n);

    printf("\nEnter 1st array items : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter 2nd array items : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }

    //summation
    printf("**Summation : **\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            result[i][j] = a[i][j] + b[i][j];
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    //subtraction
    printf("**Subtraction : **\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            result[i][j] = a[i][j] - b[i][j];
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    // multiplication
    printf("**Multiplication **:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum = 0;
            for(k=0;k<n;k++){
                sum = sum + (a[i][j] * b[i][j]);
            }
            result[i][j] = sum;
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;


}
