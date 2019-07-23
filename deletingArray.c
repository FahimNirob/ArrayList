#include<Stdio.h>
int main(){
    int i,n,m;
    int arr[20];
    printf("Enter array size : ");
    scanf("%d",&n);
    printf("\nEnter items : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // deleting
    printf("\nEnter deleting position :  ");
    scanf("%d",&m);
    for(i=m-1;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    printf("\nAfter deleting : ");
    for(i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
