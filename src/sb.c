/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-05 - 09:55 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: sb
 */

#include <unistd.h>
#include "fonction.h"

void sb(struct liste *info)
{
    swap_int(&info->lb[0], &info->lb[1]);
    write(1, "sb ", 3);
}