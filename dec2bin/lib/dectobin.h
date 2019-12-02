#ifndef DEC_TO_BIN_H
#define DEC_TO_BIN_H
class Dectobin{
    public:
        std::string dtob( char * num );
        void set_m_help();
        std::string get_m_help();

    private:
        const static int m_max{20};
        int m_number;
        int m_modules[ m_max ];
        int m_i;
        std::string m_output;
        std::string m_help;
};
#endif
