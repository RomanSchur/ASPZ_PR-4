#include <stdio.h>
#include <stdlib.h>
int main() {
    void *ptr1 = NULL;
    void *ptr2 = NULL;
    size_t size = 64;
    printf("Перевірка realloc(NULL) \n");
    ptr1 = realloc(NULL, size);
    if (ptr1 == NULL) {
        printf("Невдача виділення");
    } else {
        printf("realloc (NULL) виконано успішно\n");
        free(ptr1);
    }
  
    ptr2 = malloc(size);
    if (ptr2 == NULL) {
        printf("Помилка виділення пам'яті для ptr2\n");
        return 1;
    } 
    printf("Перевірка realloc (0) \n");
    ptr2 = realloc(ptr2, 0); 
    if (ptr2 == NULL) {
        printf("realloc(ptr, 0) повернув NULL \n");
    } else {
        printf("realloc(ptr, 0) повернув не NULL\n");
        free(ptr2); 
    }
    return 0;
}
