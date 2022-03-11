# BrainFuck Interpreter (C++)
> What's brainfuck???


Brainfuck is a Turing complete, esoteric language (esolang) that was designed to be as simple as possible. A Turing complete language is essentially a language that is capable of computing anything, ignoring variables such as time, speed, etc. Brainfuck's syntax is incredibly simple, including only 8 characters: "<", ">", "[", "]", ".", ",", "+", and "-". The arrows increment / decrement the position in memory, the square brackets indicate a loop which ends when the current position in memory evaluates to 0, the plus and minus increment / decrement the value of the current position, the period puts the character equivilant of the decimal value in the current position in the console, and the comma gets a character input and stores the decimal equivilant in the current position.


> How can I use this interpreter?


Just clone this repo, edit `main.cpp`, compile with `g++ brainfuck.cpp main.cpp -o main`, and run with `./main` :)