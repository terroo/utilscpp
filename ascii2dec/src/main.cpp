#include <iostream>
#include <cstring>
#include "../lib/ascii2dec.h"

int main( int argc , char** argv ){	
	if( argc > 1 ){
		int z = static_cast<int>( *argv[1] ); 
		if( isalpha( z ) ){
		      AsciiToDec a;
			std::cout << a.ascii_to_dec(argc, argv ) << '\n';
		}else{
			std::cout << "Only words." << '\n';
		}			
	}else{
		std::cout << "Enter a parameter." << '\n';
	}
	return 0;
}
