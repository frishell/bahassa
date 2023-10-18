#include <stdio.h>

// Fungsi rekursif untuk menghitung faktorial
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    int result = factorial(num);
    printf("Faktorial dari %d adalah %d\n", num, result);
    return 0;
}
