#include <stdio.h>
#include "h/caesar.h"

void help();

int main(int argc, char* argv[]) {
    FILE* file;
    char buffer[1024];
    if (argc < 2) {
        help();
        return 0;
    }

    return 0;
}

void help() {


    const char* help_text = 
"\n===========\n\
COOLCIPHER\n\
===========\n\
HELP MENU\n\
\n\
usage: coolcipher <cipher> <mode> <input type> <input>\n\
\n\
cipher:\n\
    c: Caesar cipher\n\
\n\n\
mode:\n\
    e: Encoding mode\n\
    d: Decoding mode\n\n\
input type:\n\
    c: Read input from the command line\n\
    f: Read input from a file\n\n\
input:\n\
Either type out the input or enter the filename\n\n\
";


    printf(help_text);
}