#include <stdio.h>

typedef struct MyClass {
    int x;

    void (*set_x)(struct MyClass *self, int i);
    int  (*get_x)(struct MyClass *self);

} MyClass;

void set_x_impl(MyClass *self, int i) {
    self->x = i;
}

int get_x_impl(MyClass *self) {
    return self->x;
}

int main(void)
{
    MyClass obs[4];
    int i;

    for (i = 0; i < 4; i++) {
        obs[i].set_x = set_x_impl;
//        obs[i].get_x = get_x_impl;
        obs[i].set_x(&obs[i], i);
    }

    for (i = 0; i < 4; i++) {

        obs[i].get_x = get_x_impl;

        printf("obs[%d].get_x(): %d\n", i,
            obs[i].get_x(&obs[i]));
    }

    return 0;
}