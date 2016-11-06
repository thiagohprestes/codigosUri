#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define casa 10
int main(){
    long long RA;
    short identif, turno, semestre, ano, 
          curso, escola;

    scanf("%lld", &RA);// recebendo RA
   
    identif = RA % (int)pow(casa,3); //pegando numero de identificacao
    turno = (RA/(int)pow(casa,3)) % casa;//pegando turno
    semestre = (RA/(int)pow(casa,4)) % casa;//pegando semestre
    ano = (RA/(int)pow(casa,5)) % (int)pow(casa,2);//pegando ano de vestibular
    curso = (RA/(int)pow(casa,7)) % (int)pow(casa,3);//pegando curso
    escola = (RA/(long)pow(casa,10)) % (int)pow(casa,3);//pegando numero da Fatec     

    printf("Identificação = %03hd\n"
           "Turno = %hd\n" 
           "Semestre = %hd\n"
           "Ano = %02hd\n"
           "Curso = %03hd\n"
           "Escola = %03hd\n" , identif, turno, semestre, ano, curso, escola);
    
    return 0;
}

