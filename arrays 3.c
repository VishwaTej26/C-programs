#include <stdio.h>

int main(){
    int n,i,max;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int a1[n];
    for(i=0;i<n;i++){
        
        scanf("%d",&a1[i]);
        
    }

    max = a1[0];
// we asssume first element is maximum
    for(i=0;i<n;i++){
        max = a1[i];
    }
    printf("The maximum element in the array is %d",max);





    return 0;
}
