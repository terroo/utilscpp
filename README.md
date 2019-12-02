# C++ Utils Terminal Root

> `./utilscpp`

My C++ Utility Library

![C++ Utils Terminal Root](img/utilscpp.png)

***

# [Colors C++](https://github.com/terroo/utilscpp/tree/master/colors) `colors`

Library to print your strings with a single function (object)

## How to use

+ 1. Add the library and vector to your header

```cpp
#include <vector>
#include "libcolors.h"
```

+ 2. Instantiate the class

```cpp
Colors c;
```

+ 3. Then just call the member function, example:

> You must pass 3 arguments to the function, in the following order/prototype:

`c.colors( COLOR , CONTENT , INTEGER[ 0 or 1 ] )`

```cpp
std::cout << c.colors( "red" , "My cool string" , 1  ) << '\n';
//                     ^^^^    ^^^^^^^^^^^^^^^   ^^^
//                     Color        Content      Bold
```

Use `1` if you want **bold** output and `0` for *normal* output, complete example:

```cpp
#include <iostream>
#include <vector>
#include "libcolors.h"

int main(){
  Colors c;
  std::cout << c.colors( "red" , "My cool string" , 1 ) << '\n';
  return 0;
}
```

## Ready example
If you wanted to see an application working, compile the example:

+ First option, compiling with [CMake](https://cmake.org/):
```sh
mkdir build && cd build
cmake ..
make
```

Then just run: `./colors "My phrase" --bold --cyan`

+ Second option, compiling with [GNU Make](https://www.gnu.org/software/make/):
```sh
make
```

Then just run: `./colors "My phrase" --bold --purple`

## Help
Use the `-h` or `--help` option to see available colors and other information. Exemplo:
```sh
./colors --help
```

***

# [Help C++](https://github.com/terroo/utilscpp/tree/master/help) `help`

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
./help --help
```

***

# [dec2bin](https://github.com/terroo/utilscpp/tree/master/dec2bin) `dec2bin`
Convert decimal to binary

## Compiling

```sh
mkdir build && cd build
cmake ..
make
./dec2bin 81
1010001
```

***

By <https://terminalroot.com.br>
