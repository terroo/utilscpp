
#include <iostream>
#include <cctype>
#include "../lib/bin2dec.h"

void BinToDec::set_help(){
    m_help = "Enter the number.";
}

std::string BinToDec::get_help(){
    set_help();
    return m_help;
}

bool BinToDec::validate_qtd( int *param ){
    return ( *param > 1 ? true : false );
}

int BinToDec::binary_to_decimal( int *num ){
    int temp = *num;
    while ( temp ) {
        int last_digit = temp % 10;
        temp = temp / 10;
        m_decval += last_digit * m_base;
        m_base = m_base * 2;
    }
    return m_decval;
}
