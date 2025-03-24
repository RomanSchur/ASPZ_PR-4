#include <stdio.h>
#include <stdlib.h>
struct sbar {
    int data[10]; 
};
int main() {
    struct sbar *ptr, *new_ptr;
    size_t elements_initial = 1000; 
    size_t elements_new = 500;    

    ptr = calloc(elements_initial, sizeof(struct sbar));
    if (ptr == NULL) {
        printf("Невдача виклику calloc \n");
        return 1;
    }
    //new_ptr = realloc(ptr, 500*sizeof(struct sbar));
    new_ptr = reallocarray(ptr, elements_new, sizeof(struct sbar));
    if (new_ptr == NULL) {
        printf("Невдача виклику reallocarray\n");
        free(ptr); 
        return 1;
    }
    printf("Розмір масиву змінено\n");
    free(new_ptr);
    return 0;
}