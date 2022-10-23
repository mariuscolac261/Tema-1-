//
// Created by colac on 10/23/2022.
//

#include "Motherboards.h"

Motherboards::Motherboards(int price, string name) : PRICE(price), NAME(name) {}

void Motherboards::setName(string name) {
    NAME=name;
}

string Motherboards::getName() {
    return NAME;
}

void Motherboards::setPrice(int price) {
    PRICE=price;
}

int Motherboards::getPrice() {
    return PRICE;
}

ostream &operator<<(ostream &COUT, Motherboards &m1) {
    COUT << m1.getPrice();
    COUT << m1.getName();
    return COUT;
}
