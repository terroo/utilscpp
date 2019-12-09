#include <iostream>
#include <cstring>
#include "../lib/hex2dec.h"

void HexToDec::set_return(){
      s = "Invalid number.";
}

std::string HexToDec::get_return(){
      set_return();
      return s;
}

int HexToDec::hex_to_dec( char *hexval ){    
    len = strlen(hexval);             
    
    for ( int i = len - 1 ; i >= 0; i-- ){
        if ( hexval[i] >= '0' && hexval[i] <= '9' ){ 
            decval += (hexval[i] - 48) * base; 
            base = base * 16; 
        }else if (hexval[i]>='A' && hexval[i]<='F'){ 
            decval += ( hexval[i] - 55 ) * base; 
            base = base * 16; 
        } 
    }
    return decval; 
}
