#include<stdio.h>
#include"pointeur.h"

int main(){
    char *pomme = "pomme";
    printf("%d\n",len(pomme));
    printf("%d\n",len("pomme"));
    printf("%d\n",len("Melenchon"));
    
    return 0;
}

int len(char* s){
    char* carac = s;
    int compteur = 0;
    while (*carac != '\0'){
        compteur++;
        carac=carac+1;
    }
    return compteur;
}