#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= 2 * n; i++) {
        int spaces, stars;
        if (i <= n) {
            // Upper half
            spaces = n - i;
            stars = 2 * i - 1;
        } else {
            // Lower half: mirror row k = 2N-i+1
            int k = 2 * n - i + 1;
            spaces = n - k;
            stars = 2 * k - 1;
        }
        // Print spaces
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= stars; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}