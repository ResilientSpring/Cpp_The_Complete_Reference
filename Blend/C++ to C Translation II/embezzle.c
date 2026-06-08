#include <stdio.h>

/* Define the Vehicle structure. */
typedef struct Vehicle {
    int passengers;
    int fuelcap;
    int mpg;
} Vehicle;

/* Equivalent of Vehicle::range() */
int range(struct Vehicle *v) {
    return v->mpg * v->fuelcap;
}

int main(void) {
    Vehicle minivan;
    Vehicle sportscar;

    int range1, range2;

    /* Assign values to fields in minivan. */
    minivan.passengers = 7;
    minivan.fuelcap = 16;
    minivan.mpg = 21;

    /* Assign values to fields in sportscar. */
    sportscar.passengers = 2;
    sportscar.fuelcap = 14;
    sportscar.mpg = 12;

    /* Compute the range assuming a full tank of gas. */
    range1 = range(&minivan);
    range2 = range(&sportscar);

    printf("Minivan can carry %d with a range of %d\n",
        minivan.passengers, range1);

    printf("Sportscar can carry %d with a range of %d\n",
        sportscar.passengers, range2);

    return 0;
}