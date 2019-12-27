
#include <iostream>
#include <vector>
#include "../lib/leap.hpp"

void Leap::set_m_help(){
    m_help = "Enter the year(s).";
}

std::string Leap::get_m_help(){
    set_m_help();
    return m_help;
}

void Leap::set_calc( char *year ) {
    m_year = std::stoi( year );
    m_four = m_year % 4;
    m_hund = m_year % 100;
    m_fhun = m_year % 400;
}

int Leap::leap_year(int argc, char** argv){

    std::vector<std::string> arguments(argv + 1, argv + argc);
    for (size_t i = 1; i <= arguments.size(); i++) {
        set_calc(argv[i]);
        if( m_four == 0 && m_hund != 0 ){
            m_leap = " is a leap year.";
        }else{
            if( m_fhun == 0 ){
                m_leap = " is a leap year.";
            }else{
                m_leap = " is NOT a leap year.";
            }
        }

        std::cout << std::to_string(m_year) << m_leap << '\n';
    }
    return 0;
}
