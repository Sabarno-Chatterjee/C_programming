//polynomial representation

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct term{
    int coef;
    int expo;
};

struct poly{
    int num_of_terms;
    struct term *t;
};

void create_poly(struct poly *p){
    printf("Enter the number of terms\n");
    scanf("%d",&p->num_of_terms);
    p->t=(struct term*)malloc(p->num_of_terms*(sizeof(struct term)));
    printf("Enter the coef and exponent\n");
    for(int i=0;i<p->num_of_terms;i++)
        scanf("%d%d",&p->t[i].coef,&p->t[i].expo);   
}

void display(struct poly *p){
    for(int i=0;i<p->num_of_terms;i++)
        printf("%dx%d+",p->t[i].coef,p->t[i].expo);
    printf("\n");
}


struct poly *add(struct poly *p1, struct poly *p2){
    int i,j,k;
    i=j=k=0;
    struct poly *sum;
    sum=(struct poly*)malloc(sizeof(struct poly));
    sum->t=(struct term*)malloc((p1->num_of_terms+p2->num_of_terms)*sizeof(struct term));
    
    while(i<p1->num_of_terms && j<p2->num_of_terms){
        if(p1->t[i].expo>p2->t[j].expo)
            sum->t[k++]=p1->t[i++];
        else if(p1->t[i].expo<p2->t[i].expo)
            sum->t[k++]=p2->t[j++];
        else
            sum->t[k].expo=p1->t[i].expo;
            sum->t[k++].coef=p1->t[i++].coef+p2->t[j++].coef;
    }
    
    for(;i<p1->num_of_terms;i++)
        sum->t[k++]=p1->t[i];
    for(;j<p2->num_of_terms;j++)
        sum->t[k++]=p2->t[j];
        
    sum->num_of_terms=k;
    return sum;
}


int main(){
    struct poly p1,p2,*p3;  
    create_poly(&p1);
    create_poly(&p2);
    p3=add(&p1,&p2);

    display(*p3);

    return 0;
}