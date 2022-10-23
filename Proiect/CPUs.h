//
// Created by colac on 10/22/2022.
//

#ifndef PROIECT_CPUS_H
#define PROIECT_CPUS_H
#include <iostream>
#include <string>
using std::string;
using std::ostream;
class CPUs {
public:
    explicit CPUs(int price, string name);
    void setName(string name);
    string getName();
    void setPrice(int price);
    int getPrice();

private:
    int PRICE;
     string NAME;
};
ostream& operator<<(ostream& COUT, CPUs& cpu1);

#endif //PROIECT_CPUS_H
