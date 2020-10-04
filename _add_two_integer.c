#include <stdio.h>
int main() {    

    int n1, n2, s;
    
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    // calculating sum
    s = n1 + n2;      
    
    printf("%d + %d = %d", n1, n2, s);
    return 0;
}
