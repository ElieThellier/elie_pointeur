#include<stdio.h>
#include"pointeur.h"
#include<stdlib.h>

int main(){
    char *pomme = "pomme";
    char *c = copie(pomme);
    printf("%d\n",len(pomme));
    printf("%d\n",len("pomme"));
    printf("%s\n",c);
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

char *copie(char *s){
    char *res;
    res = malloc(1+len(s));
    int i =0;
    while(*(s+i)!= '\0'){ // OU créer un *c = res puis while(*s != '\0'){ *s = *c et s++ et res++ (en enlevant le i)}
        *(res+i)=*(s+i);
        i++;
    }
    *(res+i)='\0';
    return res;
}