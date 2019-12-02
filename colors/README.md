# colorscpp

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

By <terminalroot.com.br>
