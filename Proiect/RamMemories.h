//
// Created by colac on 10/23/2022.
//

#ifndef PROIECT_RAMMEMORIES_H
#define PROIECT_RAMMEMORIES_H

#include <iostream>
#include <string>
using std::string;
using std::ostream;
class RamMemories {
public:
    explicit RamMemories(int price, string name);
    void setName(string name);
    string getName();
    void setPrice(int price);
    int getPrice();
private:
    int PRICE;
    string NAME;
};
ostream& operator<<(ostream& COUT, RamMemories& r1);

#endif //PROIECT_RAMMEMORIES_H
