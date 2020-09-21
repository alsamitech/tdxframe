# TDX Framework - System Functions

The TDX Framework has some System functions built right in. These functions allow you to quickly do things like clear screen and list a direcotry.

On Windows do:
```cpp
#include <wsf.h>
```
on Linux:
```cpp
#include <lsf.h>
```

How to clear the screen:
```
cls();
```

This uses the `sys::` namespace as to not conflict with other functions. use `using namespace sys;` in the head of the file if you dont have any confilicting function names.
```cpp
//Includes
using namespace sys;

int main() {
  //Code goes here
}
```