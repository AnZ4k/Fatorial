#include <iostream> 

using namespace std; 

int fatorial(int x); 

int main()
{
    int n, resultado;

    cout << "Insira um numero: ";  
    cin >> n;                

    resultado = fatorial(n); 
    cout << "O fatorial de " << n << " é " << resultado << endl; 
    
    return 0;
}

int fatorial(int x)
{
    if (x == 0) return 1;
    return x * fatorial(x - 1);
}
