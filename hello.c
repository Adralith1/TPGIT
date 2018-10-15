#include <stdio.h>
#include "message.c"
#include "print.c"

int main() {
        char *msgHello = getMessage();
        println( msgHello );
        return 0;
}
