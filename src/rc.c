/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-04 - 14:35 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: rc
 */

#include <unistd.h>
#include "fonction.h"

static void sta_ra(struct liste *info)
{
    int i;
    int la;

    i = 0;
    la = info->la[0];
    while (i < info->len_a) {
        info->la[i] = info->la[i + 1];
        i += 1;
    }
    info->la[info->len_a - 1] = la;
}

static void sta_rb(struct liste *info)
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
}

void rc(struct liste *info)
{
    sta_ra(info);
    sta_rb(info);
    write(1, "rc ", 3);
}
