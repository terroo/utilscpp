# C++ Utils Terminal Root

> `./utilscpp`

My C++ Utility Library

![C++ Utils Terminal Root](img/utilscpp.png)

---

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

---

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

---

# [Decimal to binary](https://github.com/terroo/utilscpp/tree/master/dec2bin) `dec2bin`
Convert decimal to binary

## Compiling

```sh
mkdir build && cd build
cmake ..
make
./dec2bin 81
1010001
```

---

# [Binary to decimal](https://github.com/terroo/utilscpp/tree/master/bin2dec) `bin2dec`
Convert binary to decimal

## Compiling

```sh
mkdir build && cd build
cmake ..
make
./bin2dec 111010
# 58
```

Alternatively use GNU Make
```sh
./bin2dec 10110
# 22
```

---

# [Decimal to hexdecimal](https://github.com/terroo/utilscpp/tree/master/dec2hex) `dec2hex`
Convert decimal to hexadecimal

## Compiling

```sh
mkdir build && cd build
cmake ..
make
./dec2hex 8041979
# 7AB5FB
./dec2hex 13021952
# C6B300
```

---

# [Hexadecimal to decimal](https://github.com/terroo/utilscpp/tree/master/dec2hex) `hex2dec`
Convert hexadecimal to decimal

## Compiling

```sh
make
./hex2dec A82EB9
# 11022009
./hex2dec 10542C5
# 17121989
```

---

# [Convert ASCII to Decimal](https://github.com/terroo/utilscpp/tree/master/ascii2dec) `ascii2dec`
Convert ASCII to decimal

## Compiling

```sh
mkdir build && cd build
cmake ..
make
```

## Use
> **Use quotes!** 

```sh
./ascii2dec "Welcome to C ++ Utils"
# 87 101 108 99 111 109 101 32 116 111 32 67 32 43 43 32 85 116 105 108 115
```

---

# [Convert Decimal to ASCII](https://github.com/terroo/utilscpp/tree/master/dec2ascii) `dec2ascii`
Convert Decimal to ASCII

## Compiling

```sh
mkdir build && cd build
cmake ..
make
```

## Use
> To know the order of numbers use the [ascii2dec](https://github.com/terroo/utilscpp/tree/master/ascii2dec) tool first
> 
> **Do not use quotes!**

```sh
./dec2ascii 87 101 108 99 111 109 101 32 116 111 32 67 32 43 43 32 85 116 105 108 115
# Welcome to C++ Utils
```

---

By [Marcos Oliveira](https://terminalroot.com.br)

By <https://en.terminalroot.com.br>
