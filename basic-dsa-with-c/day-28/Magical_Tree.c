#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);

    int tree_rows = n + 5 - (n - 1) / 2; 
    int max_width = 2 * (tree_rows - 1) + 1; 

    // Print tree part
    for (int i = 0; i < tree_rows; i++) {
        int spaces = (max_width - (2 * i + 1)) / 2;
        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < 2 * i + 1; j++) printf("*");
        printf("\n");
    }

    // Print wood part (5 rows)
    int wood_spaces = 5;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < wood_spaces; j++) printf(" ");
        for (int j = 0; j < n; j++) printf("*");
        printf("\n");
    }

    return 0;
}