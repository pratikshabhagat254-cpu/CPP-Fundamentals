#include <iostream>     // This library is used for input and output operations
                       // It allows us to use cout and cin

using namespace std;    // "std" means standard namespace
                        // This line lets us write cout instead of std::cout

int main()              // main() is the starting point of every C++ program
{
    cout << "Hello World ";                 // cout with << (insertion operator) displays output on the screen
    cout << "Pratiksha Here" << endl;       //endl ends the statement , moves to the next line ,flushes buffer
    cout << "Welcome to my first program"; //This will be printed on the next line due to endl

    return 0;           // return 0 indicates successful program execution
}

/*
HOW TO RUN THIS PROGRAM

1. Save file with .cpp extension
   Example:
   hello_world.cpp

2. Open terminal in VS Code

3. Go to the folder where file is saved
   Example:
   cd 02-Basics

4. Compile the program

   g++ hello_world.cpp -o hello

   g++                  -> C++ compiler
   hello_world.cpp      -> Source code file
   -o hello             -> Creates hello.exe file

5. Run the program

   .\hello.exe

6. Output will appear on screen

NOTE:
Every time you change the code:
Compile again before running.
*/