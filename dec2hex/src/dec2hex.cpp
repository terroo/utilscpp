#include <iostream>
#include "../lib/dec2hex.hh"

void DecToHex::print_hex( int m_value ){
    if ( m_value == 0){ return; }
    int m_rem = m_value % 16;
    // equivalent to... value = value / 16;
    m_value /= 16;
    print_hex( m_value ); // function recursive
    if ( m_rem > 9 ){
        // convert to char
        std::cout << (char)(m_rem - 10 + 'A');
    }else{
        std::cout << m_rem;
    }
}
