/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-04 - 14:35 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: rrb
 */

#include <unistd.h>
#include "fonction.h"

void rrb(struct liste *info)
{
    int i;
    int lb;

    i = info->len_b - 1;
    lb = info->lb[info->len_b - 1];
    while (i > 0) {
        info->lb[i] = info->lb[i - 1];
        i -= 1;
    }
    info->lb[0] = lb;
    write(1, "rrb ", 4);
}
