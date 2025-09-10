#include <stdio.h>
int main() {
    char c = 'A', C = 'a';
    int result = c++ * ++C;   // ASCII values are multiplied
    printf("c = %c (%d)\n", c, c);
    printf("C = %c (%d)\n", C, C);
    printf("Result = %d\n", result);
    return 0;
}