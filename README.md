# RemoveSmallStrings
Actually strings do not need to be small. Limit is integer max size
This console takes as input:
- Minimum amount of characters string needs to have to be kept, example:
  ```
  4
  ```
- Path to input file (if is in same directory just name), example:
  ```
  input.txt
  ```
  or
  ```
  ..\input.txt
  ```
- Path to output file (if file does not exist it will be created), **all data already in this file will be overrided**, example:
   ```
   output.txt
   ```
    And then checks if length of string is bigger than inputed size, if so saves it to the output file
    **It does not modify orginal file**
 # How to compile it?
If you do not want to use precompiled executable, you can follow these steps. If you do want to use already compiled, skip to "How to run it?". For Windows:
 1. Open *cmd* in directory you want to compile it in
 2. Type:
 ```
 g++ -o RemoveSmallStrings.exe RemoveSmallStrings.exe
 ```
# How to run it?
1. Open *cmd* in directory where your .exe file is
2. Type:
```
RemoveSmallStrings.exe
 ```
# Where does it work?
It was tested on Windows, but might work on other operating systems
# Files
- .exe precompiled executable
- .cpp source code
