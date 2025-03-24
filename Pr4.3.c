#include <stdio.h>
#include <stdlib.h>
int main() {
    void *ptr = malloc(0);
    if (ptr == NULL)
        printf("malloc повернув NULL\n");
    else
        printf("malloc повернув вказівник: %p\n", ptr);   
    free(ptr);    
    return 0;
}
