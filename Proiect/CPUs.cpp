//
// Created by colac on 10/22/2022.
//

#include "CPUs.h"

CPUs::CPUs(int price, string name) : PRICE(price), NAME(name) {}

void CPUs::setName(string name) {
    NAME=name;
}

string CPUs::getName() {
    return NAME;
}

void CPUs::setPrice(int price) {
    PRICE=price;
}

int CPUs::getPrice() {
    return PRICE;
}

ostream &operator<<(ostream &COUT, CPUs &cpu1) {
    COUT << cpu1.getName();
    COUT << cpu1.getPrice();
    return COUT;
}
