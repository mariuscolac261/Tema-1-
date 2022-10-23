//
// Created by colac on 10/23/2022.
//

#include "PowerSupplies.h"

PowerSupplies::PowerSupplies(int price, string name) : PRICE(price), NAME(name) {}

void PowerSupplies::setName(string name) {
    NAME=name;
}

string PowerSupplies::getName() {
    return NAME;
}

void PowerSupplies::setPrice(int price) {
    PRICE=price;
}

int PowerSupplies::getPrice() {
    return PRICE;
}

ostream &operator<<(ostream &COUT, PowerSupplies &p1) {
    COUT << p1.getName();
    COUT << p1.getPrice();
    return COUT;
}
