//
// Created by colac on 10/23/2022.
//

#include "RamMemories.h"

RamMemories::RamMemories(int price, string name) : PRICE(price), NAME(name) {}

void RamMemories::setName(string name) {
    NAME=name;
}

string RamMemories::getName() {
    return NAME;
}

void RamMemories::setPrice(int price) {
    PRICE=price;
}

int RamMemories::getPrice() {
    return PRICE;
}

ostream &operator<<(ostream &COUT, RamMemories &r1) {
    COUT << r1.getPrice();
    COUT << r1.getName();
    return COUT;
}
