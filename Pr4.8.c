#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr = malloc(10 * sizeof(int));
    if (ptr == NULL) {
        perror("malloc failed");
        return 1;
    }   
    ptr[10] = 123; // Запис за межі виділеної пам'яті
    return 0;
}