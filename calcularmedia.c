#include <stdio.h> // inclusão da biblioteca

int main(){  // inicio do programa 

    float n1, n2, n3;   //declaração de variáveis

    printf("Digite sua nota 1° bomestre: \n");  // interação com o aluno/cliente
    scanf("%f" , &n1);  // leitura de dados
    
    printf("Digite sua nota 3° bomestre:\n");   // interação com o aluno/cliente
    scanf("%f" , &n2);   // leitura de dados
    
    printf("Digite sua nota 3° bomestre:\n");   // interação com o aluno/cliente
    scanf("%f" , &n3);   // leitura de dados

    float media = (float) (n1 + n2 + n3)/3;     // conversão de dados para float
    printf("Sua média é: %f" ,media);   // apresentção de resultados

    return 0;       // programa executado com sucesso
}