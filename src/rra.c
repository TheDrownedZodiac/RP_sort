/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-04 - 14:35 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: rra
 */

#include <unistd.h>
#include "fonction.h"

void rra(struct liste *info)
{
    int i;
    int la;

    i = info->len_a - 1;
    la = info->la[info->len_a - 1];
    while (i > 0) {
        info->la[i] = info->la[i - 1];
        i -= 1;
    }
    info->la[0] = la;
    write(1, "rra ", 4);
}
