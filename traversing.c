#include<stdio.h>
#include<math.h>

int main(){
    int n = 10,total = 0;
    double sine,average, pi = 3.14;
    int i;
    int max,min;
    int num[10] = {12,23,67,30,6,90,78,45,60,26};
    max = num[0];
    min = num[0];

    for (i=0; i<n; i++){
        if(num[i]>max){
            max = num[i];
        }
        if(num[i]<min){
            min = num[i];
        }
        total = total + num[i];
        sine = sin((num[i]*pi)/180);
        printf("sin value of %d is %.2f\n",num[i],sine);
    }
    average = total/(n*1.0);
    printf("Max = %d\nMin = %d\nTotal = %d\nAverage = %.2f\n",max,min,total,average);
}
