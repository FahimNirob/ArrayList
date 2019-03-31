#include<stdio.h>
int main(){
    int num[50];
    int i,m,item;
    int low,high,mid;


    printf("Enter array size : ");
    scanf("%d",&m);
    printf("Enter array element in ascending order :");
    for(i=0;i<m;i++){
        scanf("%d",&num[i]);
    }

    low = 0;
    high = m -1 ;

    printf("Enter array element to search : ");
    scanf("%d",&item);

    while(low<=high){
        mid = (high+low)/2;
        if(item == num[mid]){
            printf("Element found at position %d\n",mid+1);
            break;
        }
        else if(item > num[mid] ){
            low = mid + 1;
        }
        else high = mid - 1;
    }

    if(low>high){
       printf("Failed to search\n");
    }
    return 0 ;

}
