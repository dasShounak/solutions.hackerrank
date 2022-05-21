#include <stdio.h>
int main()
{
    int n, i, j, l;

    scanf("%d", &n);

    l = 2 * n - 1;
    i = l;
    j = l;

    int arr[i][j], k, m, p;
    p = n;
    m = 0;

    for (k = 0; k < p; k++) {
        for (i = m; i < l; i++) {
            for (j = m; j < l; j++) {
                if (i == m || i == (l - 1) || j == m || j == (l - 1)) {
                    arr[i][j] = n;
                    if (n == 1) {
                        break;
                    }
                }
            }
        }
        l = l - 1;
        n = n - 1;
        m = m + 1;
    }
    l = 2 * m - 1;
    for (i = 0; i < l; i++) {
        for (j = 0; j < l; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}