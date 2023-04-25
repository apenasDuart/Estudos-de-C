// Bibliotecas e início da min
#include <stdio.h>

int main(){
    // Variáveis
    float peso, altura, IMC;
    // Input e Output + Cálculo prévio do IMC
    printf("Bem-vindo, aqui você poderá calcular seu IMC (esse cálculo leva em consideração que a idade deve ser superior a 15 anos.)")
    printf("Por favor, informe seu peso:\n");
    scanf("%f", &peso);
    printf("Informe sua altura:\n");
    scanf("%f", &altura);
    IMC = peso / (altura * altura);
// Condicionais
if (IMC < 18.5){
printf("Seu IMC é de %f, você está abaixo do ideal", IMC);
} 
else if (IMC >= 18.5 and IMC < 25){
    printf("Seu IMC é de %f, você está dentro da faixa", IMC);
}
else if (IMC >= 25 and IMC < 30){
    printf("Seu IMC é de %f, você está com sobrepeso", IMC);
}
else if (IMC >= 30 and IMC < 35){
    printf("Seu IMC é de %f, você está com obesidade grau I", IMC);
}
else if (IMC >= 35 and IMC < 40){ 
    printf("Seu IMC é de %f, você está com obesidade grau II", IMC);
} 
else{
    printf("Seu IMC é de %f, você está com obesidade grau III", IMC);
}
    return 0;
}
