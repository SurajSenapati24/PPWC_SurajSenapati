#include <stdio.h>
typedef struct {
    char name[30];
    double diameter;
    int moons;
    double or_time; 
    double ro_time;
} planet_t;

int main() {
    planet_t jupiter;
    snprintf(jupiter.name, sizeof(jupiter.name), "Jupiter");
    jupiter.diameter = 12742; 
    jupiter.moons = 1;
    jupiter.or_time = 365.25; 
    jupiter.ro_time = 0.997;
    
}