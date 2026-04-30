#ifndef WASTE_SYSTEM_H
#define WASTE_SYSTEM_H

#include <stdio.h>

#define MAX 100

typedef struct {
    int id;
    int fill;
    char zone[10];
} Bin;

extern Bin bins[MAX];
extern int bin_count;

void init_bins();
void show_data();
void show_zone();
void add_bin();
void remove_bin();
void search_bin();
void waste_analysis();
void smart_collection();

#endif
