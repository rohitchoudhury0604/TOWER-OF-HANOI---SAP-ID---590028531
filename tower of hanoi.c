#include <stdio.h>
#include <math.h>


void move(int from, int to) {
    printf("Move disc from %c to %c\n", from, to);
}

int main() {
    int n, total, i;
    char A = 'A', B = 'B', C = 'C';  

    printf("Enter number of discs: ");
    scanf("%d", &n);

    total = pow(2, n) - 1;  

    
    if (n % 2 == 0) {
        char temp = C;
        C = B;
        B = temp;
    }

    
    for (i = 1; i <= total; i++) {
        if (i % 3 == 1)
            move(A, C);  
        else if (i % 3 == 2)
            move(A, B);  
        else
            move(B, C);  
    }

    return 0;
}

