#include<stdio.h>
int main(){
    int a1[100],a2[100];
    int m,n,i,j;
    printf("Enter 1st array size : ");
    scanf("%d",&m);
    printf("\nEnter items : ");
    for(i=0;i<m;i++){
        scanf("%d",&a1[i]);
    }

    printf("\nEnter 2nd array size : ");
    scanf("%d",&n);
    printf("\nEnter items : ");
    for(i=0;i<n;i++){
        scanf("%d",&a2[i]);
    }


    // merging
    i=0;
    for(j=m;j<m+n;j++){
        a1[j] = a2[i];
        i++;
    }
    printf("\nAfter merging : ");
    for(i=0;i<n+m;i++){
        printf("%d ",a1[i]);
    }
    return 0;
}
