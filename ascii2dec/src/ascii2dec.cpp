#include <iostream>
#include <cstring>
#include "../lib/ascii2dec.h"

std::string AsciiToDec::ascii_to_dec( int argc, char** argv ){
      std::string r;
      int x;
      if( argc > 1 ){
	      for( size_t i = 0 ; i < strlen( argv[1] ) ; i++ ){
                  x = (int)argv[1][i];
                  r += std::to_string( x );
                  if( i < ( strlen( argv[1]) - 1 ) ){ r += " "; }
	      }
      }
      return r;
}
