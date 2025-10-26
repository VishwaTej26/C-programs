// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    int n,s = 0;
    printf("Enter n:");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        s= s+a[i];
    }
    printf("Sum of the values is %d\n",s);
    
    

    return 0;
}
