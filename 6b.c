#include<stdio.h>
#include<string.h>
// merging character array
int main(){
    int i,j,m,n;
    char s1[100],s2[100];
    printf("Enter 1st string : ");
    gets(s1);
    printf("\nEnter 2nd string : ");
    gets(s2);

    m = strlen(s1);
    n= strlen(s2);

    // merging
    i=0;
    for(j=m ;j<m+n;j++){
        s1[j] = s2[i];
        i++;
    }
    s1[m+n] = '\0';
    printf("\nAfter merging : ");
    puts(s1);
    return 0;
}
