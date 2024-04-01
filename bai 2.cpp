#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    int squareRoot = sqrt(num);
    return (squareRoot * squareRoot == num);
}

void countAndPrintPerfectSquares(int n) {
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    int count = 0;
    for (int i = n - 1; i > 0; i--) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
            count++;
            if (count == 7) {
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);
    countAndPrintPerfectSquares(n);
    return 0;
}
