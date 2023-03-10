#include <iostream>
#include <vector>

#include "kalkulator.hpp"

using namespace std;

int main() {
    vector<int> ip = {192,168,1,1};
    vector<int> mask = {255,255,255,0};
    Kalkulator kalk(ip, mask);
    kalk.testout();

    return 0;
}