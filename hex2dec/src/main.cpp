#include <iostream>
#include <cstring>
#include "../lib/hex2dec.h"


int main( int argc, char** argv ){
      HexToDec h;
      if ( argc > 1 ){
            std::cout << h.hex_to_dec( argv[1] ) << '\n';
      }else{
            std::cout << h.get_return() << '\n';
      }
      return 0;
}
