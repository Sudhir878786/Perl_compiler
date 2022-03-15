# Semantic and Intermediate Code Generation 

 Mini Perl Compiler use flex & bison/yacc and C.
## Quick Overview of Perl
-  Perl Identifiers
    - A Perl variable name starts with either $, @ or % followed by zero or more letters, underscores, and digits (0 to 9).
- Three basic data type
     - `Scalar` Scalars are simple variables. They are preceded by a dollar sign ($). A scalar is either a number, a string, or a reference.
     - `Arrays` Arrays are ordered lists of scalars that you access with a numeric index, which starts with 0. They are preceded by an "at" sign (@).
     - `Hashes` Hashes are unordered sets of key/value pairs that you access using the keys as subscripts. They are preceded by a percent sign (%).




## Dependency

- flex
- bison/yacc

## Developing Environment

- OS : Ubuntu/kali 16.04 LTS
- Language : C & C++
- Compiler : gcc & g++
## 
## Issue
- There is some issue while generating Imtermediate code generation for `Array`.


## How to run
```bash
$ lex s_lexer.l  or  flex s_lexer.l
$ yacc s_parser.y
$ gcc y.tab.c -ll -w
$ ./a.out <testfile>
else run -------------------------
bash run.sh
```
## What we have done 
INTERMEDIATE CODE GENERATION AND SEMANTIC ANALYSER.
1. Identifiers
2. Data types
•Primitive data types: Scalar (it includes INT FLOAT STRING)
•Derived data types: Array and Hash
3. Constants: Integer, float, string, and character literals
4. Operators: All the operators
5. Statements:
•Simple statements
•Control flow: if-else, if-else if, , while, for, do-while , foreach, until, unless, elsif .
6. s_symbol.c file a table that  contains all Tokens Adress Values Scope and Type.
7. Our Adress starts from 4000.
## Ignore 
Output contain some warnings and shift reduce conflicts . 

## References
- Geeksforgeeks
- `info flex`
- [YouTube](https://www.youtube.com/watch?v=rUDxhF-PE6s)
- [notes](https://github.com/ifding/flex-bison/blob/master/flex-learning-notes.md)


## Authors 
```
Sudhir Sharma {12041500}   Manish Salunkhe {12040840}
```
