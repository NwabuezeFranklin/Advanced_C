#include<string.h>
#include<stdio.h>
#include<stdlib.h>
//Retribution
//No days off

struct man
{
    int r;
    char *a;
    struct man *link;
};

void add(struct man *ptr, int m,char *a, int i)
{
    struct man *r = malloc(sizeof(struct man));
    r->r = m;
    r->a= "Nzud";
    r->link = NULL;
    
    while(i != 1)
    {
        ptr = ptr->link;
        i--;
    }
    r->link = ptr->link;
    ptr->link = r;
}

int main( int argc, char* argv)
{
    struct man *m, *n, *o;
    m = malloc(sizeof(struct man));
    m->r = 2;
    m->a = "Nzube";
    m->link=NULL;

    n = malloc(sizeof(struct man));
    n->r = 3;
    n->a = "Nzube";
    n->link = NULL;
    m->link = n;

    n = malloc(sizeof(struct man));
    n->r = 3;
    n->a = "Nzube";
    n->link = NULL;
    m->link->link = n;


    //struct man *ptr;
    add(m,34,"Nzube",3);
    
    /**int c = 0;
    while(m != NULL)
    {
        c++;
        m = m->link;

    }
    printf("%d", c);
*/


   while (m != NULL)
    {
        printf("%d,%s,", m->r, m->a );
        m = m->link;
    }

}