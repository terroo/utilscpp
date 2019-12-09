#ifndef HEX_TO_DEC_H
#define HEX_TO_DEC_H
class HexToDec{
      public:      
            void set_return();            
            std::string get_return();      
            int hex_to_dec( char *hexval );
       private:
            int base{1};
            int decval{0};
            int len;
            std::string s;
};
#endif
