#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "waste_system.h"
#include "algorithms.h"

Bin bins[MAX];
int bin_count = 0;

void init_bins(){
    int i;

    for(i = 0; i < 10; i++){
        bins[i].id = i+1;
        bins[i].fill = rand()%100;

        if(bins[i].fill > 80) strcpy(bins[i].zone,"Red");
        else if(bins[i].fill > 40) strcpy(bins[i].zone,"Yellow");
        else strcpy(bins[i].zone,"Green");
    }
    bin_count = 10;
}

void show_data(){
    int i;

    printf("ID\tFill\tZone\n");
    for(i = 0; i < bin_count; i++){
        printf("%d\t%d\t%s\n",bins[i].id,bins[i].fill,bins[i].zone);
    }
}

void show_zone(){
    int z, i;

    printf("1.Red 2.Yellow 3.Green: ");
    scanf("%d",&z);

    char *zone = (z==1)?"Red":(z==2)?"Yellow":"Green";

    for(i = 0; i < bin_count; i++){
        if(strcmp(bins[i].zone,zone)==0)
            printf("%d %d %s\n",bins[i].id,bins[i].fill,bins[i].zone);
    }
}

void add_bin(){
    bins[bin_count].id = bin_count+1;
    bins[bin_count].fill = rand()%100;
    strcpy(bins[bin_count].zone,"Yellow");
    bin_count++;
}

void remove_bin(){
    int id, i;

    printf("Enter ID: ");
    scanf("%d",&id);

    for(i = 0; i < bin_count; i++){
        if(bins[i].id == id){
            bins[i] = bins[bin_count-1];
            bin_count--;
            return;
        }
    }
}

void search_bin(){
    int id, i;

    printf("Enter ID: ");
    scanf("%d",&id);

    int arr[MAX];

    for(i = 0; i < bin_count; i++)
        arr[i] = bins[i].id;

    bubble_sort(arr, bin_count);

    int pos = binary_search(arr, bin_count, id);

    if(pos != -1)
        printf("Bin Found\n");
    else
        printf("Not Found\n");
}

void waste_analysis(){
    int arr[MAX], i;

    for(i = 0; i < bin_count; i++)
        arr[i] = bins[i].fill;

    bubble_sort(arr, bin_count);

    printf("Sorted Fill Values:\n");
    for(i = 0; i < bin_count; i++)
        printf("%d ",arr[i]);

    printf("\n");
}

void smart_collection(){
    int i;

    printf("Priority bins (high fill):\n");
    for(i = 0; i < bin_count; i++){
        if(bins[i].fill > 80)
            printf("Bin %d -> %d%%\n",bins[i].id,bins[i].fill);
    }
}
