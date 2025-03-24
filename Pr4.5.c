#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> 
int main() {
    size_t primary_size = 64;
    size_t new_size = SIZE_MAX; 
    char *ptr = malloc(primary_size);

    if (ptr == NULL) {
        printf("Не вдалось виділити пам'ять");
        return 1;
    }
    printf("Початковий розмір пам'яті виділено успішно\n");

    char *new_ptr = realloc(ptr, new_size);

    if (new_ptr == NULL) {       
        printf("realloc повернув NULL\n");
        free(ptr);
    } else {
        printf("realloc успішно змінив розмір блоку\n");       
        free(new_ptr);
    }
    return 0;
}