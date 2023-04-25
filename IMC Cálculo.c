/* OBSERVAÇÕES:
Os valores do que é ideal ou não possuem vários fatores extras como
idade, gênero, alimentação e outros fatores, ou seja, o programa foi
criado com intuito de passar a ideia base sobre o IMC. Para cálculo de
valores corretos procure um profissional da área de saúde.*/

// Bibliotecas e início da main
#include <stdio.h>

int main(){
    // Variáveis
    float peso, altura, IMC;
    // Input e Output + Cálculo prévio do IMC
    printf("Por favor, informe seu peso:\n");
    scanf("%f", &peso);
    printf("Informe sua altura:\n");
    scanf("%f", &altura);
    IMC = peso / (altura * altura);
// Condicionais
if (IMC < 18.5){
printf("Seu IMC é de %f, você está abaixo do ideal", IMC);
} 
else if (IMC >= 18.5 && IMC < 25){
    printf("Seu IMC é de %f, você está dentro da faixa", IMC);
}
else if (IMC >= 25 && IMC < 30){
    printf("Seu IMC é de %f, você está com sobrepeso", IMC);
}
else if (IMC >= 30 && IMC < 35){
    printf("Seu IMC é de %f, você está com obesidade grau I", IMC);
}
else if (IMC >= 35 && IMC < 40){ 
    printf("Seu IMC é de %f, você está com obesidade grau II", IMC);
} 
else{
    printf("Seu IMC é de %f, você está com obesidade grau III", IMC);
}
    return 0;
}
