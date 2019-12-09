#include <iostream>
#include "../lib/dec2hex.hh"

int main(int argc, char** argv ){
    if( argc > 1 ){
        int dec = std::atoi( argv[1] );
        DecToHex d;
        d.print_hex(dec);
        std::cout  << '\n';
    }else{
        std::cout << "Invalid number." << '\n';
    }
    return 0;
}
