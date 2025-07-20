#include <stdio.h>
#include <stdbool.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if (r != c) {
        printf("This is not a scalar matrix.\n");
        return 0;
    }

    bool is_scalar = true;
    int diagonal_value = a[0][0]; // initial diagonal value

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == j) {
                if (a[i][j] != diagonal_value) {
                    is_scalar = false;
                    break;
                }
            } else {
                if (a[i][j] != 0) {
                    is_scalar = false;
                    break;
                }
            }
        }
        if (!is_scalar) break;
    }

    if (is_scalar) {
        printf("This is a scalar matrix.\n");
    } else {
        printf("This is not a scalar matrix.\n");
    }

    return 0;
}
