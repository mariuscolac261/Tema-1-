//
// Created by colac on 10/22/2022.
//

#include "GPUs.h"

GPUs::GPUs(int price, string name) : PRICE(price), NAME(name) {}

void GPUs::setName(string name) {
    NAME=name;
}

string GPUs::getName() {
    return NAME;
}

void GPUs::setPrice(int price) {
    PRICE = price;
}

int GPUs::getPrice() {
    return PRICE;
}

ostream &operator<<(ostream &COUT, GPUs &gpu1) {
    COUT << gpu1.getName();

}
