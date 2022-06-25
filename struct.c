#include<stdio.h>
#include<stdlib.h>
//Retribution
//No days off
struct student
{
    char* name;
    int score;
};

typedef struct student chidera;

int main()
{
    chidera *s1 = malloc(sizeof(chidera));
    (*s1).name="Nwabueze Chidera"; s1->score=98;
    //student s2 = {"Nzube", 34};
    //strut();

    printf("%s %d\n", s1->name, s1->score);
}