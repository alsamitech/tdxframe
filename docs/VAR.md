# TDXFRAME -- AAVs and variable handling

**How AAVs WORK**
All-Acsess Variables are variables that are used to store output temporarily after a function has finished calculating. this is to make it easier to acsess the result from functions.

This is how to store an AAV into a localized acsess varaible (LLV)
```cpp
AddStuff(1, 1);
// Let's say that addStuff puts ints calculation into aav a1 for some reason
int addStuffResult = a1;
```

**YIN functions**
The yin fucntions set all the values in a certain AV type to 0. It's a void function that takes no args.
Example of yin fucntion:
```cpp
yin();
printf("%d", a1);
```
Result:
```
0
```

Instace:
Return AAV: `a3`