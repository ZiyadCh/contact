#include <stdio.h>

struct classe{
    char nom[10];
    char prenom[10];
};

int main(){

    int count =1;
    struct classe etudiant[3];
    for(int i =0;i<3;i++){
    printf("Entrer le nom d'etudiant %d:",count);    
    scanf("%s",etudiant[i].nom);
    printf("Entrer le prenom d'etudiant %d:",count);    
    scanf("%s",etudiant[i].prenom);

    count++;
    }

    count =1;
    for(int i =0;i<3;i++){
    printf("Nom etudiant %d: %s\n",count,etudiant[i].nom);    
    printf("Prenom etudiant %d:%s \n",count,etudiant[i].prenom);
    count++;
    }

    return 0;
}