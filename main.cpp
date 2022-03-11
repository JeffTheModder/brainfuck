#include <iostream>
#include "./brainfuck.h"

using namespace std;

int main(int argc, char **argv) {
    brainFuck(">++++++++[<+++++++++>-]<.>++++[<+++++++>-]<+.+++++++..+++.>>++++++[<+++++++>-]<++.------------.>++++++[<+++++++++>-]<+.<.+++.------.--------.>>>++++[<++++++++>-]<+.");
    cout << endl;
    return 0;
}