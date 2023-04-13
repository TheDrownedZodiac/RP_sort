/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-05 - 09:55 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: sa
 */

void swap_int(int *nbr_1, int *nbr_2)
{
    int res;

    res = *nbr_2;
    *nbr_2 = *nbr_1;
    *nbr_1 = res;
}
