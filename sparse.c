#include<stdio.h>
int main(){
    int i,j,m,n,count = 0;
    printf("Enter number of rows and columns : ");
    scanf("%d %d",&m,&n);
    int A[m][n];
    int p = (n * (n+1))/2;
    int B[p];
    int index = 1;

    printf("\nEnter items of sparse triangular matrix : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nIn 1D array : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(A[i][j] != 0){
                B[index++] = A[i][j];
                //printf("%d ",B[p]);
                count ++;
            }
        }
    }
    printf("\nTotal items : %d\n",count);
    printf("\nitem to search location in row : ");
    scanf("%d",&m);
    printf("\nAnd column : ");
    scanf("%d",&n);
    int L = 0.5*m*(m-1)+n;
    printf("\nLocation in 1D array : %d\n",B[L]);
    return 0;
}
