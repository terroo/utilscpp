#include "help.hh"
int main(int argc, char** argv){
	Help help;
	help.m_help(argc, argv);
	help.m_dhelp();
	return 0;
}
