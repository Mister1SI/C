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
"\nCOOLCIPHER\n\
===========\n\
HELP MENU\n\
\n\
usage: coolcipher <cipher> <mode> <input type> <input>\n\
\n\
cipher:\n\
    -c: Caesar cipher\n\
\n\
";


    printf(help_text);
}