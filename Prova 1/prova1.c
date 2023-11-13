/* 
1. Escreva um algoritmo que leia 50 valores que representem preços de produtos. Escreva o valor do
produto mais caro e dê um desconto de 12% para o produto mais barato. */

#include <stdio.h>

int main(){
float precoProduto[50];     //vetor para guardar os precos dos produtos
float maiorPreco;
float menorPreco;

for (int i = 0; i < 50; i++){
    printf("Digite o preço do produto: ");
    scanf("%f", &precoProduto[i]);
}

for (int i = 1; i < 50; i++){
    if (precoProduto[i] > precoProduto[i - 1]){
        maiorPreco = precoProduto[i];
    }
    else if (precoProduto[i] < precoProduto[i - 1]){
        menorPreco = precoProduto[i];
    }
}

printf("O produto mais caro custa: %.2f\n", maiorPreco);
printf("O produto mais barato custa: %.2f\n", menorPreco);

float desconto = menorPreco * 0.12;
menorPreco = menorPreco - desconto;

printf("O produto mais barato (com desconto de 12%%) custa: %.2f\n", menorPreco);
    return 0;
}

/* 2. Escreva um programa que leia o salário de 60 indivíduos (aceitar somente valores positivos). Para
cada valor lido calcule e escreva um aumento de salário segundo dados abaixo:
2.5% p/ salário > =8000
10% p/ salário entre 5000 e 8000
15% p/ o menor <= 5000 */

int main (){
    float salario[6];
    float aumento[6];

    for(int i = 0; i < 6; i++){
        printf("Digite o salario %d: ", i + 1);
        scanf("%f", &salario[i]);
    }

    for(int i = 0; i < 6; i++){
    if(salario[i] >= 8000){
        aumento[i] = salario[i] * 0.025;
    } else if(salario[i] >= 5000 && salario[i] < 8000){
        aumento[i] = salario[i] * 0.10;
    } else if(salario[i] < 5000){
        aumento[i] = salario[i] * 0.15;
    }
}
}

/* 3. Um pesquisador está investigando sobre mudanças climáticas e precisa calcular a média de
temperatura e pressão atmosférica de um mês de dados. Escreva um programa que leia 30 valores
que representem dados de temperatura e pressão atmosférica diários medidos. Escreva as médias
de temperatura e pressão atmosférica deste mês e a temperatura do dia mais quente. */

int main(){
    float temperatura[30];
    float pressao[30];
    float mediaTemperatura;
    float mediaPressao;
    float maiorTemperatura;

    for(int i = 0; i < 30; i++){
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temperatura[i]);
        printf("Digite a pressao do dia %d: ", i + 1); 
        scanf("%f", &pressao[i]);
    }
    //media temperatura
    for(int i = 0; i < 30; i++){
        mediaTemperatura = mediaTemperatura + temperatura[i];
    }
    mediaTemperatura = mediaTemperatura / 30;

    for(int i = 0; i < 30; i++){
        mediaPressao = mediaPressao + pressao[i];
    }
    mediaPressao = mediaPressao / 30;

    for(int i = 0; i < 30; i++){
        if(temperatura[i] > temperatura[i - 1]){
            maiorTemperatura = temperatura[i];
        }
    }

    printf("A media de temperatura é %.2f\n", mediaTemperatura);
    printf("A media de pressao é %.2f\n", mediaPressao);
    printf("A maior temperatura é %.2f\n", maiorTemperatura);
}

/* 
4. Escreva um algoritmo que leia uma quantidade indeterminada de idades de pessoas (condição de
término será a digitação de um valor negativo). Conte e mostre quantas destas pessoas ainda não
podem votar (idade < 16 anos). */

int main(){
    int i = 0;
    int idade[1];
    int naoVotam = 0;

  while(idade[i] > 0){
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]);
        if(idade[i] < 16 && idade[i] > 0){
            naoVotam++;
        }
    }
    printf("Existem %d pessoas que nao podem votar\n", naoVotam);
}