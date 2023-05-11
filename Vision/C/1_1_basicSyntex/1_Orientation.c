#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = 0;
    int num1 = 34;
    int num2 = 65;
    int results = 0;
    result = add(num1, num2);
    printf("result : %d \n", result);
    results = sizeof(result);
    printf("%d \n", results); // zu => Byte
    return 0;
}