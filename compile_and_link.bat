@echo off

REM Compile source files
g++ -c Stack.cpp -o Stack.o
g++ -c Converter.cpp -o Converter.o
g++ -c CONVERTER2.cpp -o CONVERTER2.o
g++ -c main.cpp -o main.o

REM Link object files to create executable
g++ Stack.o Converter.o main.o -o my_program
g++ Stack.o CONVERTER2.o main.o -o my_program

REM Pause to see output before closing
pause
