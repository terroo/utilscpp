# helpcpp
Easily add help to your program

## How to use

+ 1. Include library header
```cpp
#include "help.hh"
```
> If it is on a different path, indicate the full path, for example: `#include "path/to/help.hh"`

+ 2. Pass the command line arguments: `int argc` and `char** argv` to the `main()` function, for example:

+ 3. Instantiate the `Help` class and call the `help.m_help (argc, argv)` and `m_dhelp()` methods/members, for example:
```cpp
Help help;
help.m_help(argc, argv);
help.m_dhelp();
```
> Remove `help.m_dhelp()` if you wish.

Edit/modify the `usage()` and `m_dhelp()` member functions as usability for your program.

Basic example of use `vim main.cpp`:

```cpp
#include "help.hh"
int main(int argc, char** argv){
	Help help;
	help.m_help(argc, argv);
	help.m_dhelp();
  std::cout << "Start my program ..." << '\n';
	return 0;
}
```

To compile this test, run:
```sh
make install clean
./help
```
