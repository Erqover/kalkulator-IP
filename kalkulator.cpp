#include <algorithm>
#include <iostream>
#include <string>
#include <type_traits>
#include <vector>

#include "kalkulator.hpp"

using namespace std;

Kalkulator::Kalkulator(vector<int> ip_dec, vector<int> mask_dec)
{
    this->ip_dec = ip_dec;
    this->mask_dec = mask_dec;
    ip_bin = {"","","",""};
    mask_bin = {"","","",""};

    for (int i=0; i<4; i++) {
        while (ip_dec[i] > 0) {
            if (ip_dec[i]%2 == 1) {
                ip_bin[i] += "1";
            }
            else {
                ip_bin[i] += "0";
            }
            ip_dec[i] /= 2;
        }
        reverse(ip_bin[i].begin(), ip_bin[i].end());
    }
}

void Kalkulator::testout() {
    for (string i : ip_bin) {
        cout << i <<endl;
    }
}