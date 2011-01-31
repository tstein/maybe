#include <stdio.h>
#include "maybe.h"

int main() {
    maybe {
        printf("yep!\n");
    } else {
        printf("nope!\n");
    }

    surely {
        printf("Credits to Jack!\n");
    } else {
        printf("???\n");
    }
    return 0;
}

