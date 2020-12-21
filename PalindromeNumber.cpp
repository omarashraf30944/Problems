#include <vector>
#include <iostream>
#include <string>
using namespace std;


class Pnum{
public:
     bool isPalindrome(int x) {   // x = 121
    int reverse = 0;
    if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
    while(x != 0){
        reverse = (reverse * 10) + x % 10;
        x /= 10; 
    }
    return x == reverse || x == reverse /10;
     }
};


