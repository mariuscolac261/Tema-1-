//
// Created by colac on 10/23/2022.
//

#ifndef PROIECT_CASES_H
#define PROIECT_CASES_H

#include <iostream>
#include <string>
using std::string;
using std::ostream;
class Cases {
public:
    explicit Cases(int price, string name);
    void setName(string name);
    string getName();
    void setPrice(int price);
    int getPrice();
private:
    int PRICE;
   string NAME;
};
ostream& operator<<(ostream& COUT, Cases& c1);

#endif //PROIECT_CASES_H
