#include <stdio.h>
typedef struct {
    char name[30];
    double diameter;
    int moons;
    double or_time; 
    double ro_time;
} planet_t;

int main() {
    planet_t *ppointer;
    planet_t earth;
    ppointer = &earth;
    snprintf(ppointer->name, sizeof(ppointer->name), "Earth");
    ppointer->diameter = 127.42;
    ppointer->moons = 1;
    ppointer->or_time = 365.25;
    ppointer->ro_time = 0.997;
    printf("Name: %s\n", ppointer->name);
    printf("Diameter: %f\n", ppointer->diameter);
    printf("Moons: %d\n", ppointer->moons);
    printf("Orbital Time: %f\n", ppointer->or_time);
    printf("Rotation Time: %f\n", ppointer->ro_time);
    return 0; 
}