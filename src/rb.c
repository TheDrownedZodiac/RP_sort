/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-04 - 14:35 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: rb
 */

#include <unistd.h>
#include "fonction.h"

void rb(struct liste *info)
{
    int i;
    int lb;

    i = 0;
    lb = info->lb[0];
    while (i < info->len_b) {
        info->lb[i] = info->lb[i + 1];
        i += 1;
    }
    info->lb[info->len_b - 1] = lb;
    write(1, "rb ", 3);
}
