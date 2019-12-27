#include <iostream>
#include "../lib/leap.hpp"

int main(int argc, char** argv){
    Leap leap;
    if ( argc > 1 ) {
        leap.leap_year(argc, argv);
    }else{
        std::cout << leap.get_m_help() << '\n';
    }
	return 0;
}
