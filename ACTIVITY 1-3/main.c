#include <stdio.h>
int main() {    

    int N1, N2, Add ;
    
    printf("Enter two integers: ");
    scanf("%d %d", &N1, &N2);

    Add = N1 + N2;
    
    
    printf("%d + %d = %d", N1, N2, Add);
    return 0;
}