#include <iostream>
 
using namespace std;
 
int main() {
	float n, n2, n3, n4, media, nExame, mediaFinal;
	
	scanf("%f %f %f %f", &n, &n2, &n3, &n4);
	
	media = ((n * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;//calcula media
	
	printf("Media: %.1f\n", media);//imprime media
	 
    //veirifica a situacao do aluno e imprime se o mesmo foi aprovado, reprovado ou estah em exame segundo as regras
	if(media >= 7) printf("Aluno aprovado.\n");
	
   else if(media < 5) printf("Aluno reprovado.\n");
	    
    else if(media >=5 && media < 7) {
	
	  printf("Aluno em exame.\n");
	 
	  scanf("%f", &nExame);//recebe nota da prova de recuperacao
	  printf("Nota do exame: %.1f\n", nExame);//imprime nota da prova de recuperacao
	  
	  mediaFinal = (media + nExame) / 2;//calcula media final

	  //veirifica a situacao do aluno e imprime se o mesmo foi aprovado, reprovado ou estah em exame segundo as regras
	  if(mediaFinal >= 5) printf("Aluno aprovado.\n");	  
	  
	  else printf("Aluno reprovado.\n");
	  	 
	  printf("Media final: %.1f\n", mediaFinal);//imprime a media final do aluno
   }
    return 0;
}
