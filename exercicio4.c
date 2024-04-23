#include <iostream>

int fibonacciIterativo(int N) {
    if (N <= 1) {
        return N;
    }
    
    int fibAnterior = 0;
    int fibAtual = 1;
    
    for (int i = 2; i <= N; ++i) {
        int proximo = fibAnterior + fibAtual;
        fibAnterior = fibAtual;
        fibAtual = proximo;
    }
    
    return fibAtual;
}

int main() {
    int N;
    std::cout << "Digite a posicao N da sequencia de Fibonacci: ";
    std::cin >> N;
    
    int resultado = fibonacciIterativo(N);
    std::cout << "O valor na posicao " << N << " da sequencia de Fibonacci eh: " << resultado << std::endl;
    
    return 0;
}