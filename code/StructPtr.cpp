#include <stdio.h>
#include <stdlib.h>

// CRUD --> Create, Read, Update, Delete
//Di array ga perlu passing pake ptr (*) --> Array udh bs passing addressnya sendiri (default)


struct Course{
    char ID[100];
    char namaDosen[255];
};

struct Mahasiswa{
    char name[225];
    double GPA;
    Course c[3];
};

//Create 
Mahasiswa* create(char *name, double GPA, char *id, char *namaDosen){
    Mahasiswa *newStudent = (Mahasiswa*)malloc(sizeof(Mahasiswa));

    return newStudent;  //Return Pointer yang menunjuk ke address Mahasiswa
}


//Read
void read(Mahasiswa *s){ //Pass pointer yang menunjuk ke alamat student (object)
    printf("Name : %s\n", s->name);  //Arrow (->) Passing Object atau sama dengan (*s).name
    printf("GPA  : %lf\n", s->GPA);
    printf("Course : %s\n", s->c->namaDosen);
    printf("Nama Dosen : %s\n", s->c->ID);
}


int main(){
    Mahasiswa s; //Declare Struct Mahasiswa di local
    scanf("%s", s.c[0].namaDosen);
    printf("%s\n", s.c[0].namaDosen);
    scanf("%s", s.c[1].namaDosen);
    printf("%s\n", s.c[1].namaDosen);
    scanf("%s", s.c[2].namaDosen);
    printf("%s\n", s.c[2].namaDosen);

    return 0;
}