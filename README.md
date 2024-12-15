## <div align = "center"> C-Lambda</div>
- Includes the standard input/output library in C.
```
#define <stdio.h>
```
##
- This is a macro definition named assign. It does the following two things:
  - Executes the code `b` (which is expected to declare or define a lambda function)
  - Sets `a` (a pointer variable) to the address of a function names `lmd` concatenated with the current line number `__LINE__`
  - `##` is a macros concatenates tokens (joins them into a single name or symbol).
  - `__LINE__` is predefined macro in C that expands to the current line number in the source code.
```
#define assign(a,b) b; \
    a = &lmd ## __LINE__;
```
##
- This macro defines a lambda syntax for creating small functions.
  - `a` represents the input parameter of the function.
  - `_` is a ignored token, used for syntactic clarity.
  - `c` is the function body that gets returned.
- It creates a function named `lmd` concatenated with the current line number, which takes one integer parameter (`a`) and returns the value of `c`.
```
#define lambda(a,_,c) \
    int lmd ## __LINE__(int a){return c;}
```
