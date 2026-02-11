#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int M, N;

    do {
        printf("Enter M and N (2 < M,N < 20): ");
        scanf("%d %d", &M, &N);
    } while (M <= 2 || M >= 20 || N <= 2 || N >= 20);

    int arr[M][N];
    int used[101] = {0};   

    srand(time(NULL));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            int num;
            do {
                num = rand() % 101 + 100;  
            } while (used[num - 100] == 1);

            used[num - 100] = 1;
            arr[i][j] = num;
        }
    }

    printf("\n2D Array %dx%d:\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

