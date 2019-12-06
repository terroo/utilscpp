#include <iostream>
#include <cctype>
#include "../lib/bin2dec.h"

int main( int argc, char** argv ){
    BinToDec bc;
    int x;
    if( bc.validate_qtd( &argc ) ){
        if( ! isdigit( *argv[1] ) ){
            std::cout << bc.get_help() << '\n';
        }else{
            x = { std::stoi( argv[1] ) };
            std::cout << bc.binary_to_decimal( &x ) << '\n';
        }
    }else{
        std::cout << bc.get_help() << '\n';
    }
    return 0;
}
