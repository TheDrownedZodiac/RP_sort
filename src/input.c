/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-06 - 10:01 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: input
 */

#include "fonction.h"

const char *nbr = "0123456789-";

static int cmp(char *buf, int *count, int temp, int *plus_or_minus)
{
    while (stu_strchr(nbr, buf[*count]) == 1) {
        if (buf[*count] == '-') {
            *plus_or_minus = -1;
            *count += 1;
        }
        temp = (temp * 10) + (buf[*count] - '0');
        *count += 1;
    }
    return temp;
}

void input(struct liste *info, char *buf)
{
    int temp;
    int count_nbr;
    int count;
    int plus_or_minus;

    count_nbr = 0;
    count = 0;
    temp = 0;
    plus_or_minus = 1;
    while (buf[count] != '\0') {
        temp = cmp(buf, &count, temp, &plus_or_minus);
        while (stu_strchr(nbr, buf[count]) != 1 && buf[count] != '\0') {
            count += 1;
        }
        info->la[count_nbr] = temp * plus_or_minus;
        count_nbr += 1;
        plus_or_minus = 1;
        temp = 0;
    }
}
