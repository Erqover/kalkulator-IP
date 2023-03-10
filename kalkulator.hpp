#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Kalkulator {
    private:
    vector<int> ip_dec;
    vector<int> mask_dec;
    vector<string> ip_bin = {};
    vector<string> mask_bin = {};
    int mask_skr = 0;

    public:
    Kalkulator(vector<int>, vector<int>);
    void testout();
};