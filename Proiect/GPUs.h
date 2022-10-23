//
// Created by colac on 10/22/2022.
//

#ifndef PROIECT_GPUS_H
#define PROIECT_GPUS_H

#include <string>
using std::string;
using std::ostream;
class GPUs {
public:
    explicit GPUs(int price, string name);
    void setName(string name);
    string getName();
    void setPrice(int price);
    int getPrice();


private:
   int PRICE;
    string NAME;
};
ostream& operator<<(ostream& COUT, GPUs& gpu1);


#endif //PROIECT_GPUS_H
