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
    int compteur = 0;
    while (*s != '\0'){
        compteur++;
        s=s+1; // <=> s++, On peut aussi mettre le s++ dans la boucle
    }
    return compteur;
}