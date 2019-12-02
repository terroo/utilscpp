#ifndef COLORS_H
#define COLORS_H
class Help{
	public:
		void usage();
		int m_help( int argc, char** argv );
		void m_dhelp();
};

class Colors : public Help {
      public:
				const static int num_colors {10};
        std::string colors( std::string *color , std::string *content , const int * weight );
			private:
				std::string m_colors[ num_colors ] = {"red", "green", "yellow", "blue", "purple", "cyan", "white"};
				int m_numcolors[ num_colors ] = {31, 32, 33, 34, 35, 36, 37};
};
#endif
