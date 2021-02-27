#include <stdio.h>
#include <stdlib.h> // 동적 메모리 사용을 위해 필수
#include <string.h>

int main() {
    int i, p, q;
    int** ptrptr = (int**)malloc(sizeof(int*) * 8);
    if (ptrptr == NULL) {
        exit(1);
    }
    for (i = 0; i < 8; i++) {
        *(ptrptr + i) = (int*)malloc(sizeof(int) * 6);
    }
    

    for (p = 0; p < 8; p++) {
        for (q = 0; q < 6; q++) {
            *(*(ptrptr + p) + q) = 6 * p + q;
        }
    }

    for (p = 0; p < 8; p++) {
        for (q = 0; q < 6; q++) {
            printf("%3d", *(*(ptrptr + p) + q));
        }
        printf("\n");
    }

    for (p = 0; p < 8; p++) {
        free(*(ptrptr + p));
    }
    return 0;
}