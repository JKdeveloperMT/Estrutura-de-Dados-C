
#include <stdio.h>
#include <windows.h>
#define MAX 3

//constante max pode ser usada para definir o maximo de vlores
// ex: vetP[MAX]

typedef struct {
	char nome [30], sexo[20];
	int idade;
	float peso, altura;
	
}stPessoa; 

stPessoa CadDados(){
	stPessoa pessoa;
	printf("\n");
	printf("informe o nome:\n");
	fflush(stdin);
    fgets(pessoa.nome,30,stdin);
    printf("informe a idade:\n");
    scanf("%d",&pessoa.idade);
    printf("informe o peso:\n");
    scanf("%f",&pessoa.peso);
    printf("informe a altura:\n");
    scanf("%f",&pessoa.altura);
    printf("informe o sexo:\n");
	fflush(stdin);
    fgets(pessoa.sexo,20,stdin);
    system("cls");
	return pessoa; 
}

  void clear(stPessoa vetP[]){
  	int i;
  	for(i=0; i<10; i++){
	  
  	    vetP[i].nome[0]='\n';
  	    vetP[i].sexo[0]='\n';
		vetP[i].idade = 0;
		vetP[i].peso = 0;
		vetP[i].altura = 0;
}
}


main(){
	int i = 0;
	int opc = 0;
	int cad = 0;
	int limplist = 1;
    stPessoa pessoa;
    stPessoa vetP[MAX];
    do{
    printf("1-Cadastrar Pessoas\n");
    printf("2-listar Pessoas\n");
    printf("3-limpar Lista\n");
    printf("4-Sair\n");
    scanf("%d",&opc);
     
	  if(opc <= 4 || opc <= 1){
	  	
		  
		switch (opc){
	 
     
        case 1:
        	if (limplist == 1){
        for(i=0; i<MAX; i++)	vetP[i] = CadDados();
           cad = 1;
           limplist = 0;
       }else{ 
        printf("\nlista cheia, por favor pressione a opcao 3 do menu\n");
       	
	   }
  		break;
  		
  	    case 2:
  	    	
  	    	if (cad == 1){
			  
  	    	for(i=0; i<MAX; i++){
		    printf("\nNome:%s\t",vetP[i].nome);
		    printf("\nIdade:%d",vetP[i].idade);
		    printf("\nPeso:%.2f\n",vetP[i].peso);
		    printf("altura:%.2f\n",vetP[i].altura);
		    printf("Sexo:%s\n",vetP[i].sexo);
		    printf("\n");
		}
	    } else{
	    	system("cls");
			printf("\nNao existe pessoas cadstradas nesta lista!\n");
			printf("\n");
		    	
		}
		
  		break;
  		
  		case 3:
  		  if(cad == 1){
			clear(vetP);
			limplist = 1;
		}else{
			system("cls");
			printf("\nNao existe pessoas cadstradas nesta lista!\n");
			printf("\n");
		}
  			
  	    break;
  			
  			
  		case 4:
  		 system("cls");
         printf("Voce saiu do sistema!");
		break;  	
  			
        }
} else{
   printf("\nopcao invalida\n");
   printf("\n");
}  
	
	
     
}while (opc != 4); 
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	

