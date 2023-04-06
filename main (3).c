#include <stdio.h>

int main()
{
    struct { 
        int matricula;
        char nome[50];
        char dataNasc[11];
        char cargo[20];
        float salario;
    }func;
    
  
    printf("\nDigite o nome:");
    fgets(func.nome,50,stdin);
    printf("\nDigite a data de nascimento:");
    fgets(func.dataNasc,11,stdin);
    printf("\nDigite o cargo:");
    fgets(func.cargo,20,stdin);
    printf("\nDigite o salario:");
    scanf("%f", &func.salario);
    printf("Digite a matricula:");
    scanf("%d", &func.matricula);
   
    
    
    
    printf("\nFuncionario: %s", func.nome);
    printf("\nMatricula: %d", func.matricula);
    printf("\nData de Nascimento: %s", func.dataNasc);
    printf("\nCargo atual: %s", func.cargo);
    printf("\nSalario atual de: R$ %2.f", func.salario);
    
    return 0;
    
}
