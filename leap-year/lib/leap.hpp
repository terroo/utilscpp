#ifndef LEAP_YEAR_H
#define LEAP_YEAR_H

class Leap{
    public:
        void set_m_help();
        std::string get_m_help();
        int leap_year(int, char**);
        void set_calc(char*);
    private:
        std::string m_help;
        std::string m_leap;
        int m_year;
        int m_four;
        int m_hund;
        int m_fhun;
};
#endif
