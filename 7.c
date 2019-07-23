#include<stdio.h>
int main(){
    int twoD[10][10];
    int oneD[200];
    int i,j,k=0,m,n;
    int p,q;
    printf("Enter the number of rows & columns : ");
    scanf("%d %d",&m,&n);
    printf("\nEnter array items : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&twoD[i][j]);
        }
    }

    // copying..
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            oneD[k] = twoD[i][j];
            k++;
        }
    }
    printf("\nAfter copying twoD into oneD :\n");
    for(k=0;k<m*n;k++){
        printf("%d ",oneD[k]);
    }
    // elements of group 3

    printf("\nElements of group 3 from 1D array : \n");
    p = (m-1) * n; //
    q = m * n;
    for(k=p;k<q;k++){
        printf("%d ",oneD[k]);
    }
    return 0;


}
