#include<stdio.h>
#include<stdlib.h>

struct term{
    int coefficient ;
    int exponent;
};

struct build_polynomial{
    int num_of_terms;
    struct term *terms;
};

void create_polynomial(struct build_polynomial *P){
    printf("Enter the number of terms\n");
    scanf("%d",&P->num_of_terms);
    P->terms=(struct term*)malloc(P->num_of_terms*sizeof(struct term));
    printf("Enter the coefficent and exponent");
    for(int i=0;i<P->num_of_terms;i++)
        scanf("%d%d",&P->terms[i].coefficient,&P->terms[i].exponent);
}

void display_polynomial(struct build_polynomial *P){
    for(int i=0;i<P->num_of_terms;i++)
        printf("%dx%d+",P->terms[i].coefficient,P->terms[i].exponent);
}

int main(){
    
    return 0;
}