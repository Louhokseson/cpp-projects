//*****************************************************************************************************
//      Hello, World!
//
//      The "Hello, World!" program is often used as a first program for people learning to code.
//      
//      The program simply outputs the text "Hello, World!" to the console.
//      To run the program, you can complie it by g++ -o file_name.out HelloWorld.cpp (Linux)
//      and then run it by ./file_name.out
//      For macOS, you can use clang++
//      For Windows, you can use MinGW
//*****************************************************************************************************

#include <iostream>
// The iostream library is used to include the input/output stream functions.
using namespace std;
// The std namespace is used to include the standard C++ library functions.

//*****************************************************************************************************

int main() {
    
    cout << "Hello, World!" << endl;
    // The cout object is used to output text to the console. endl is used to insert a newline character.
    return 0;
}

//*****************************************************************************************************
/*

int: The return type of the function. In this case, it returns an integer. 
By convention, returning 0 typically indicates that the program executed successfully.

main: The name of the function. main is a special function name in C++ that serves as the entry point for program execution.

(): Parentheses indicate that main takes no parameters. However, main can also take parameters 
(e.g., int main(int argc, char *argv[])), which are used to handle command-line arguments.

{}: Curly braces define the body of the function. 
The code inside the curly braces is executed when the function is called.

; : The semicolon is used to terminate statements/actions in C++. 
Defining a function uses closing curly bracket } (no need to use ;).

*/