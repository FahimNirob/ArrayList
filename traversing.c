// array traversing

#include<stdio.h>
#include<math.h>

int main(){
    int arr[20];
    int i,n;
    int max,min,total=0;
    double sine,avg,pi = 3.14;
    printf("Enter array size : ");
    scanf("%d",&n);
    printf("\nEnter array items : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];

    for(i=0;i<n;i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
        total = total + arr[i];
        sine = sin((arr[i] * pi)/180);
        printf("Sin value of %d = %.2f\n",arr[i],sine);
    }
    avg = total/(1.0*n);

    printf("Maximum : %d\n",max);
    printf("Minimum : %d\n",min);
    printf("Total : %d\n",total);
    printf("Average : %.2f\n",avg);
    return 0;
}
