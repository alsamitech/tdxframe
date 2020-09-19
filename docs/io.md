# TDX I/0
the I/O functions are the most powerful part of the TDX framework. These functions afford massive flexibility and massive variety.

**UNUSED, but USEFUL FUNCTIONS**
```cpp
//THE PSTC FUNCTION CLEARS THRE SCREEN, than prints out a message
ap::pstc(CharArray);
// TO AVOID USING ap::, do:
using namespace ap;
```
```cpp
ap::lqr(CharArray);
//lqr prints a newline before and after the CharArray
// ALSO PART OF THE AP namespace.
ap::npr(CharArray);
//npr prints a newline before the CharArray
```