#include <iostream>
#include <cstring>
#include "../lib/dec2ascii.h"

std::string DecToAscii::dec_to_ascii( int argc, char** argv ){
      std::string r;
      int count = 1; 
      /*while( argv[++count] != NULL ){
            std::cout << "argv[count] == " << argv[count] << '\n';
      }*/
      while( count < argc ){
            //std::cout << (char)std::atoi( argv[count] );
            r += (char)std::atoi( argv[count] ) ;
            count++;
      }
      return r;      
}
