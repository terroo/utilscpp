#ifndef BIN_TO_DEC_H
#define BIN_TO_DEC_H
class BinToDec{
    public:
        void set_help();
        std::string get_help();
        bool validate_qtd( int *param );
        int binary_to_decimal( int *num );
    private:
        int m_decval{ 0 };
        int m_base {1};
        std::string m_help;
};
#endif
