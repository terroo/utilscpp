#include <iostream>
#include <cstring>
#include "../lib/dec2ascii.h"


int main( int argc , char** argv ){	
	if( argc > 1 ){
		int z = static_cast<int>( *argv[1] ); 
		if( isdigit( z ) ){
		      DecToAscii d;
			std::cout << d.dec_to_ascii( argc, argv ) << '\n';
		}else{
			std::cout << "Only digit." << '\n';
		}			
	}else{
		std::cout << "Enter a parameter." << '\n';
	}	
	return 0;
}
