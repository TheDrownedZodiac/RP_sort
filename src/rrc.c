/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-04 - 14:35 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: rrc
 */

#include <unistd.h>
#include "fonction.h"

static void sta_rra(struct liste *info)
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
}

static void sta_rrb(struct liste *info)
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
}

void rrc(struct liste *info)
{
    sta_rra(info);
    sta_rrb(info);
    write(1, "rrc ", 4);
}
