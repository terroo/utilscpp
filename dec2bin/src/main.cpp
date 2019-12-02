#include <iostream>
#include <string>
#include "../lib/dectobin.h"

int main( int argc , char** argv ) {
  Dectobin db;
  std::cout << ( argc > 1 ? db.dtob( argv[1] ) : db.get_m_help() ) << "\n";
  return 0;
}
