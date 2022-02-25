#include <iostream>

using namespace std;

void brainFuck(const char* script) {
    char memory[30000] = {0};
    char *ptr = memory;

    int loops[30000] = {0};
    int *lptr = loops;

    bool running = true;
    int pos = 0;
    while (running) {
        if (script[pos] == '>') {
            if (ptr == &memory[30000]) {
                ptr = &memory[0];
            } else {
                ++ptr;
            }
        } else if (script[pos] == '<') {
            if (ptr == &memory[0]) {
                ptr = &memory[30000];
            } else {
                --ptr;
            }
        } else if (script[pos] == '+') {
            ++*ptr;
        } else if (script[pos] == '-') {
            --*ptr;
        } else if (script[pos] == '.') {
            putchar(*ptr);
        } else if (script[pos] == ',') {
            *ptr = getchar();
        } else if (script[pos] == '[') {
            if (*ptr) {
                *lptr = pos;
                lptr++;
            } else {
                int count = 0;
                while (true) {
                    pos++;
                    if (!script[pos]) break;
                    if (script[pos] == '[') count++;
                    else if (script[pos] == ']') {
                        if (count) count--;
                        else break;
                    }
                }
            }
        } else if (script[pos] == ']') {
            lptr--;
            pos = *lptr - 1;
        } else if (int(script[pos]) == 0) {
            running = false;
        }
        pos++;
    }
}

int main(int argc, char **argv) {
    brainFuck(">++++++++[<+++++++++>-]<.>++++[<+++++++>-]<+.+++++++..+++.>>++++++[<+++++++>-]<++.------------.>++++++[<+++++++++>-]<+.<.+++.------.--------.>>>++++[<++++++++>-]<+.");
    cout << endl;
    return 0;
}