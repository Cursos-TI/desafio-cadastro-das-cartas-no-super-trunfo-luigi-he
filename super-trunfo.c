#include <stdio.h>
int main() {
    
    char estado, estado2, CodigoEstado [5], CodigoEstado2 [5], NomeDaCidade [20], NomeDaCidade2 [20];
    int populaçao, populaçao2, PontosTuristicos, PontosTuristicos2;
    float area, area2, pib, pib2;


printf("Olá! Vamos iniciar o cadastro das cartas para o jogo de Super Trunfo. \n");
printf("Primeiramente, vamos cadastrar a carta 1 \n");
printf("Informe o estado: \n");
scanf(" %c", &estado);
printf("Informe o código deste estado: \n");
scanf("%s", &CodigoEstado);
printf("Qual o nome da cidade? \n");
scanf("%s", &NomeDaCidade);
printf("Agora, informe o número de habitantes desta cidade: \n");
scanf("%i", &populaçao);
printf("Precisamos saber também a extensão da cidade em km²: \n");
scanf("%f", &area);
printf("Qual o valor do PIB deste cidade? \n");
scanf("%f", &pib);
printf("Por fim, informe quantos pontos turísticos esta cidade possuí: \n");
scanf("%i", &PontosTuristicos);


printf("Carta 1 registrada com sucesso! Agora vamos dar sequência com o cadastro da carta 2. \n");
printf("Informe o estado 2: \n");
scanf(" %c", &estado2);
printf("Informe o código deste estado: \n");
scanf("%s", &CodigoEstado2);
printf("Qual o nome da cidade? \n");
scanf("%s", &NomeDaCidade2);
printf("informe o número de habitantes desta cidade: \n");
scanf("%i", &populaçao2);
printf("Informe a extensão da cidade em km²: \n");
scanf("%f", &area2);
printf("Qual o valor do PIB desta cidade? \n");
scanf("%f", &pib2);
printf("Agora nos informe quantos pontos turísticos esta cidade possui: ");
scanf("%i", &PontosTuristicos2);

printf("Ótimo, as 2 cartas foram registradas com sucesso! \n");
printf("Segue abaixo as informacações de cada carta: \n");

printf("Carta 1\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %.2fkm²\nPIB: %.2f\nNúmero de pontos turísticos: %i\n\n", estado, CodigoEstado, NomeDaCidade, populaçao, area, pib, PontosTuristicos);
printf("Carta 2\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %.2fkm²\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", estado2, CodigoEstado2, NomeDaCidade2, populaçao2, area2, pib2, PontosTuristicos2);

return 0;



}