/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-04 - 10:32 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: fonction.h
 */

#include "struct.h"

#ifndef STU_H_

#define STU_H_

int get_digit(int nb, int index);
int nb_len(int nb);
void swap_int(int *nbr_1, int *nbr_2);
void sa(struct liste *info);
void sb(struct liste *info);
void sc(struct liste *info);
void sd(struct liste *info);
void pa(struct liste *info);
void pb(struct liste *info);
void ra(struct liste *info);
void rb(struct liste *info);
void rc(struct liste *info);
void rra(struct liste *info);
void rrb(struct liste *info);
void rrc(struct liste *info);
void high_nbr(struct liste *info);
void input(struct liste *info, char *buf);
int count_nbr(const char *src);
int stu_strchr(const char *str, char search);

#endif
