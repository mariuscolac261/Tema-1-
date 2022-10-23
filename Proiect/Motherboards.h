//
// Created by colac on 10/23/2022.
//

#ifndef PROIECT_MOTHERBOARDS_H
#define PROIECT_MOTHERBOARDS_H

#include <iostream>
#include <string>
using std::string;
using std::ostream;
class Motherboards {
public:
    explicit Motherboards(int price, string name);
    void setName(string name);
    string getName();
    void setPrice(int price);
    int getPrice();;
private:
    int PRICE;
    string NAME;

};
ostream& operator<<(ostream& COUT, Motherboards& m1);

#endif //PROIECT_MOTHERBOARDS_H
