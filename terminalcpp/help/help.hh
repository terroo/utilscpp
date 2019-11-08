#ifndef HELP_LIB
#define HELP_LIB
#include <iostream>
#include <vector>
class Help{
	public:
		Help(){}
		void usage(){
			std::cout <<
				" -h, --help       Usage"    << "\n"
				" -v, --version    Version"  << "\n"
				" -g, --generate   Generate" << "\n"
				" -c, --check NUM  Check"    << "\n"
				;
		}
		int m_help( int argc, char** argv ){
						std::vector<std::string> arguments(argv + 1, argv + argc);
			if( argc > 1 ){
				for(std::size_t i = 0 ; i < arguments.size(); i++ ){
					if( arguments[i] == "-h" || arguments[i] == "--help" ){
						std::cout << "usage: " << argv[0] << " [options]\n" << '\n';
						this->usage();
						std::cout << '\n';
					}
									}
				exit(0);
			}
			return 1;
		}
		void m_dhelp(){
			std::cout << "Use -h or --help for more information." << '\n';
		}
		~Help(){}
};
#endif
