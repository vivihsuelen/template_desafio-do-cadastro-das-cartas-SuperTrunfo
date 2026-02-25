#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
int  populacao, populacao2, pturistico, pturistico2;
float area, area2, pib, pib2;
char uf[2], uf2[2],codigo[5], codigo2[5], cidade[20], cidade2[20];
// Área para entrada de dados
printf("=========CARTA 1=========\n");
printf("Digite o Estado: \n");
scanf("%s", &uf);

printf("Digite o código: \n");
scanf("%s", &codigo);

printf("Digite a cidade: \n");
scanf("%s", &cidade);

printf("Digite a população: \n");
scanf("%d", &populacao);

printf("Digite a área: \n");    
scanf("%f", &area);

printf("Digite o PIB: \n");    
scanf("%f", &pib);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &pturistico);

//insira os dados da carta 2
printf("=========CARTA 2=========\n");
printf("Digite o Estado: \n");
scanf("%s", &uf2);
   
printf("Digite o código: \n");
scanf("%s", &codigo2);

printf("Digite a cidade: \n");
scanf("%s", &cidade2);

printf("Digite a população: \n");
scanf("%d", &populacao2);

printf("Digite a área: \n");    
scanf("%f", &area2);

printf("Digite o PIB: \n");    
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &pturistico2);   

// Área para exibição dos dados da cidade

return 0;
} 
