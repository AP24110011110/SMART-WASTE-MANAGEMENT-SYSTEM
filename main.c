#include <stdio.h>
#include <string.h>
#include "waste_system.h"

char currentRole[20];

int login(){
    char u[50],p[50];

    printf("USERNAME: ");
    scanf("%s",u);

    printf("PASSWORD: ");
    scanf("%s",p);

    printf("DEBUG: Entered %s %s\n",u,p); // <-- ADD THIS

    FILE *fp=fopen("credentials.txt","r");

    if(!fp){
        printf("Credential file missing!\n");
        return 0;
    }

    char ru[50],rp[50],rr[20];

    while(fscanf(fp,"%s %s %s",ru,rp,rr)==3){
        if(strcmp(u,ru)==0 && strcmp(p,rp)==0){
            strcpy(currentRole,rr);
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);
    return 0;
}

void admin_menu(){
    int ch;
    while(1){
        printf("\nADMIN MENU\n1.Show\n2.Zone\n3.Add\n4.Remove\n5.Search\n6.Analysis\n7.Collection\n8.Exit\n");
        scanf("%d",&ch);

        if(ch==1) show_data();
        else if(ch==2) show_zone();
        else if(ch==3) add_bin();
        else if(ch==4) remove_bin();
        else if(ch==5) search_bin();
        else if(ch==6) waste_analysis();
        else if(ch==7) smart_collection();
        else break;
    }
}

void head_menu(){
    int ch;
    while(1){
        printf("\nHEAD MENU\n1.Show\n2.Zone\n3.Search\n4.Analysis\n5.Collection\n6.Exit\n");
        scanf("%d",&ch);

        if(ch==1) show_data();
        else if(ch==2) show_zone();
        else if(ch==3) search_bin();
        else if(ch==4) waste_analysis();
        else if(ch==5) smart_collection();
        else break;
    }
}

void user_menu(){
    int ch;
    while(1){
        printf("\nUSER MENU\n1.Show\n2.Search\n3.Exit\n");
        scanf("%d",&ch);

        if(ch==1) show_data();
        else if(ch==2) search_bin();
        else break;
    }
}

int main(){
    if(!login()){
        printf("Invalid login!\n");
        return 0;
    }

    printf("Logged in as %s\n",currentRole);

    init_bins();

    if(strcmp(currentRole,"admin")==0) admin_menu();
    else if(strcmp(currentRole,"head")==0) head_menu();
    else user_menu();

    return 0;
}
