#include <stdio.h>

/* Define a struct instead of a class */
typedef struct {
    int x;
} MyClass;

/* Function to set x */
void set_x(MyClass *obj, int i) {
    obj->x = i;
}

/* Function to get x */
int get_x(MyClass *obj) {
    return obj->x;
}

int main(void)
{
    MyClass obs[4];   /* Create an array of objects */
    int i;

    for (i = 0; i < 4; i++)
        set_x(&obs[i], i);

    for (i = 0; i < 4; i++)
        printf("obs[%d].get_x(): %d\n", i, get_x(&obs[i]));

    return 0;
}