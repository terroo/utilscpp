#include <iostream>
#include <string>
#include "../lib/dectobin.h"

std::string Dectobin::dtob( char * num ){
      m_number = std::stoi( num );
      if ( m_number == 0 ) {
        m_output = "0";
      }else{
        for (m_i = 0; m_number > 0; m_i++) {
          m_modules[m_i] = m_number % 2;
          m_number = m_number / 2;
        }
        for (m_i = m_i - 1; m_i >= 0; m_i--) {
          m_output += std::to_string( m_modules[m_i] );
        }
      }
    return m_output;
}

void Dectobin::set_m_help(){
    m_help = "Enter a number.";
}

std::string Dectobin::get_m_help(){
    set_m_help();
    return m_help;
}
