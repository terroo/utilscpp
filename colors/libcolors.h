#ifndef COLORS_H
#define COLORS_H
class Help{
	public:
		void usage(){
			std::cout <<
				" -h, --help       Usage"                     << "\n"
				" --red            Output with red color"     << "\n"
				" --green          Output with green color"   << "\n"
				" --yellow         Output with yellow color"  << "\n"
				" --blue           Output with blue color"    << "\n"
				" --purple         Output with purple color"  << "\n"
				" --cyan           Output with cyan color"    << "\n"
        " --white          Output with cyan color"    << "\n"
				" --bold           Bold text"                 << "\n"
				"\n * Parameters can be used in any order.";
		}
		int m_help( int argc, char** argv ){
			std::vector<std::string> arguments(argv + 1, argv + argc);
			if( argc > 1 ){
				for(std::size_t i = 0 ; i < arguments.size(); i++ ){
					if( arguments[i] == "-h" || arguments[i] == "--help" ){
						std::cout << "usage: " << argv[0] << " [options]\n" << '\n';
						this->usage();
						std::cout << '\n';
						exit(0);
					}
				}
			}
			return 0;
		}
		void m_dhelp(){
			std::cout << "Use -h or --help for more information." << '\n';
		}
};

class Colors : public Help {
      public:
				const static int num_colors {10};
        std::string colors( std::string color , std::string content , const int weight ){
						if( color.substr(0, 2) != "--" ){ color = "--" + color; }
						std::string my;
						for (size_t i = 0; i < num_colors; i++) {
							m_colors[i] = "--" + m_colors[i];
							if ( color == m_colors[i] ) {
								auto n = std::to_string( m_numcolors[i] );
								my = m_colors[i];
								my = "\e[" + n + "m" + content + "\e[0m";
							}
						}
						my = ( weight == 1 ?  "\e[1m" + my + "\e[0m" : my );
						return my;
        }
			private:
				std::string m_colors[ num_colors ] = {"red", "green", "yellow", "blue", "purple", "cyan", "white"};
				int m_numcolors[ num_colors ] = {31, 32, 33, 34, 35, 36, 37};
};
#endif
