# TDX Framework - System Functions

The TDX Framework has some System functions built right in. These functions allow you to quickly do things like clear screen and list a direcotry.

On Windows do:
```cpp
#include <wsf.h>
```
on Linux:
```cpp
#include <lsf.h>
<<<<<<< HEAD
=======
```

How to clear the screen:
```
cls();
>>>>>>> origin/master
```

This uses the `sys::` namespace as to not conflict with other functions. use `using namespace sys;` in the head of the file if you dont have any confilicting function names