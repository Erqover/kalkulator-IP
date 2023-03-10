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

    for (int i=0; i<4; i++) { // konwersja ip dec -> bin
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

    for (int i=0; i<4; i++) { // konwersja maski dec -> bin
        while (mask_dec[i] > 0) {
            if (mask_dec[i]%2 == 1) {
                mask_bin[i] += "1";
            }
            else {
                mask_bin[i] += "0";
            }
            mask_dec[i] /= 2;
        }
        reverse(mask_bin[i].begin(), mask_bin[i].end());
    }
    
    for (string i : mask_bin) {
        for (char j : i) {
            if (j == '1') {
                mask_skr++;
            }
        }
    }
}

void Kalkulator::testout() {
    for (string i : ip_bin) {
        cout << i <<endl;
    }
    cout<<endl;
    for (string i : mask_bin) {
        cout << i <<endl;
    }
    cout<<endl;
    cout << mask_skr;
}