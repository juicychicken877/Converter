#include <iostream>
using namespace std;

class Convert 
{

    string binary, hexadecimal, octal;
    string hex_binary, oct_binary;
    unsigned long long decimal=0, bit=1, byte_sum=0;

public:
    //converting functions
    string dec_to_bin(unsigned long long dec);  //decimal to binary
    string hex_to_bin(string hex);             //hexadecimal to binary
    string oct_to_bin(string oct);            //octal to binary
    unsigned long long bin_to_dec(string bin);//binary to decimal
    string bin_to_hex(string bin);          //binary to hexadecimal
    string bin_to_oct(string bin);         //binary to octal
    void reset();

};
