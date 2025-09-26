#include <stdio.h>

struct rectangle{
    int l,L;
};

int air(struct rectangle rec){

    return rec.l * rec.L;
}

int main(){

    struct rectangle rec1;
    printf("entrer la longuer du rectangle:");
    scanf("%d",&rec1.l);
    printf("entrer la largeur du rectangle:");
    scanf("%d",&rec1.L);
    printf("%d",air(rec1));
    

    return 0;
}