# TDX Framework
# BY SAMI

This is a framework in C++ 
This is intended for developing console applications. All the hard work is done for you so you can focus on what matters.
This also has stdio.h **localized** in `sources/io.h` as this heavily depends on that library to work properly. This library, in total has a few depenends on the C standard libraries and exC in some versions of this library. 

**BASICS OF THE TDX FRAMEWORK**
This contains temporary places to keep numerical values. These are called **All-Acsess Variables (AAVs)** there are multiple types of AAVs including a, b, c, and R. but this is how the first 30 AAVs work (type a & r):
1-10 hold an int value
10-20 hold a double value
20-30 hold a float value

There are also *Semi-Acsess-Variables* **SAVs** which are contianed in classes and help clases retrun values when `return` is redeemed unsuitable

**SOME VESIONS OF THIS RELY ON the exC LIBRARIES**
https://github.com/alsamitech/exc
(The Standard version includes a minitruized version of exC)

THE TDX FRAMEWORK is **NOT** just a framework, but also a standard. The specs for the standard will be released soon, and any framework that complies with the standard may put:
***@lsami TECHNOLOGIES - MEETS TDX STANDARD***
in the README file.

**Shell Scripts**
TDXFRAME Uses Bash/SH scripts to automate some compling and package managing tasks. These sripts only work on systems that have support for the Bourne Shell

**HOW TO MAKE A PROPER TDX PACKAGE:**
A TDX Package contains an installer, the executables, and the documentation for the specific application. A package (in this case) means a simple directory with an exutable as the installer. The code for the package installer is cross-platform. but the binaries only work on the platform they are targeted to. You also have to compile the package maker (Preferablly with GCC) or get it as a linux Binary in binaries/.
The easiest way to signal to your users that they are installing from a tdx package is by naming the folder that contains all the contetnts `AppName[tdx]`

**LICENSE TERMS (EXPAT/MIT) - ALSO AT */LICENSE***
MIT License

Copyright (c) 2020 Sami Alameddine

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.