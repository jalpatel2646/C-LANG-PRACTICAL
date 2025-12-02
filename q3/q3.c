// print the fibonacci up to n terms 
#include <stdio.h>

int main() {
    int n;
    int f1 = 0;
    int f2 = 1;
    int f3;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", f1);   

        f3 = f1 + f2;   
        f1 = f2;        
        f2 = f3;        
    }

    return 0;
}