#include <stdio.h>
#include <stdlib.h>
int main(){
int idade;

printf("Insira sua idade: ");
scanf("%d", &idade);
getchar();


    if(idade>=18){
        printf("Sua idade é %d \n",idade);
        printf("Você está apto para solicitar sua CNH!");
        }
    else{
        printf("Sua idade é %d \n",idade);
        printf("Você não está apto para solicitar sua CNH!");
        }

return 0;

}
