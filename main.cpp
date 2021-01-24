/*
 *  Programa para calcular o fatorial
 *  de um numero
 */
#include <iostream>  //biblioteca padrao para se trabalhar com I/O

using namespace std; //Estou definindo que vou trabalhar com o namespace
                     //std, faço isso para não ter que usar o std:: antes
                     //do cin e cout  

int fatorial(int x); //prototipo a função fatorial

int main()
{
    int n, resultado;

    cout << "Insira um numero: "; //estou movendo a string para o fluxo de saida e movendo os  
    cin >> n;                     //dados do fluxo de entrada para a variavel n                

    resultado = fatorial(n); // Faço um chamado para a função fatorial passando o numero
                             // inserido como argumento

    cout << "O fatorial de " << n << " é " << resultado << endl; //aqui estou apenas movendo todo meu template
                                                                 //para o fluxo de saida para apresentar o resultado ao usuario  
    
	return 0;
}

/* Aqui eu uso uma função recursiva para calcular o fatorial
 *
 * a função ira receber um numero x e efetuar a seguinte operação
 *           x * x - 1 * ((x - 1) -1) * (((x - 1) - 1) - 1) ....
 *
 * ou seja, se for passado o numero 5 como argumento, sera realizado o seguinte calculo
 * 
 * 5 * 4 * 3 * 2 * 1 => 120
 */
int fatorial(int x)
{
    if (x == 0) return 1;
    return x * fatorial(x - 1);
}
