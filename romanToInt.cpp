#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    
    int total = 0;

    for (int i = 0; i < s.size(); i++) {
        if (m[s[i]] < m[s[i + 1]]) total -= m[s[i]];
        else total += m[s[i]];
    }
    return total;
}

void testPrint(string input) {
    cout << "The roman integer " << input; 
    cout << " is equal to " << romanToInt(input) << endl;
}

int main() {
    testPrint("II");
    testPrint("IV");
    testPrint("XXVII");
    testPrint("CMXCI");
    return 0;
}


