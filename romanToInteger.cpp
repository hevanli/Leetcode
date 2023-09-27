/*
 * This is the solution I came up with myself to solve roman to int
 * It's much bulkier, and probably uses 2 or 3 times the simplest solution
 * The funny thing is, this solution is like 3x faster and more memory
 * efficient too.
 * */
#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s) {
    int total = 0;

    // special cases
    int i = 0; 
    while (i <= s.size()) {
        if (s[i] == 'I') {
            if (s[i + 1] == 'V') {
                total += 4;
                s.erase(i, 2);
                i = -1;
            }
            else if (s[i + 1] == 'X') {
                total += 9;
                s.erase(i, 2);
                i = -1;
            }
        }
        else if (s[i] == 'X') {
            if (s[i + 1] == 'L') {
                total += 40;
                s.erase(i, 2);
                i = -1;
            }
            else if (s[i + 1] == 'C') {
                total += 90;
                s.erase(i, 2);
                i = -1;
            }
        }
        else if (s[i] == 'C') {
            if (s[i + 1] == 'D') {
                total += 400;
                s.erase(i, 2);
                i = -1;
            }
            else if (s[i + 1] == 'M') {
                total += 900;
                s.erase(i, 2);
                i = -1;
            }
        }
        i++;
    }

    // check the rest
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'I') total += 1;
        else if (s[i] == 'V') total += 5;
        else if (s[i] == 'X') total += 10;
        else if (s[i] == 'L') total += 50;
        else if (s[i] == 'C') total += 100;
        else if (s[i] == 'D') total += 500;
        else if (s[i] == 'M') total += 1000;
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
