#include <cstring>
#include <cstdio>
#include "car.h"
#include "SportsCar.h"

int main() {
    Car c1(50, "Avante", 3);
    SportsCar sc;

    sc.setTurbo(true);
    sc.changeGear(3);
    sc.speedUp();
    sc.display();

    c1.display();
    c1.speedUp();
    c1.changeGear(4);
    c1.display();
    c1.whereAmI();

    return 0;
}
