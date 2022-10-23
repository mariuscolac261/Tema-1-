//
// Created by colac on 10/23/2022.
//

#include "Cases.h"

Cases::Cases(int price, string name) : PRICE(price), NAME(name) {}

void Cases::setName(string name) {
    NAME=name;
}

string Cases::getName() {
    return NAME;
}

void Cases::setPrice(int price) {
    PRICE=price;
}

int Cases::getPrice() {
    return PRICE;
}

ostream &operator<<(ostream &COUT, Cases &c1) {
    COUT << c1.getPrice();
    COUT << c1.getName();
    return COUT;
}
