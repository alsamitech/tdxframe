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

AAV types:
a - These are the AAVs that are recongized by the functions.  Please don't use these for holding data for your functions. these are only to be used for framework functions
b - These are the AAVs that can be used however you like. They, by default. are not recognized by the fraework's functions. However, you can tweak the frameowrk to use these AAVs
r - Same thing as b, but contains different structures.

Most functions will have 2 versions. 1 that returns an aav to be stored as
```cpp
ValueType exampleResult;
exampleAAVfunction(/*args*/);
exampleResult = ExampleAAV;
```
and the second that returns a normal value
```cpp
exampleResult = exampleFunction(/*args*/);
