#include <iostream>
#include <vector>

using namespace std;

int buscaBinariaIterativa(vector<int>& A, int X) {
    int esquerda = 0;
    int direita = A.size() - 1;
    
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        
        if (A[meio] == X) {
            return meio;
        }
        
        if (A[meio] < X) {
            esquerda = meio + 1;
        } else { // Caso contrário, busca na metade esquerda
            direita = meio - 1;
        }
    }
    
    return -1;
}

int main() {
    vector<int> vetor = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    
    int valorProcurado;
    cout << "Digite o valor que deseja procurar: ";
    cin >> valorProcurado;
    
    int resultado = buscaBinariaIterativa(vetor, valorProcurado);
    
    if (resultado != -1) {
        cout << "O valor " << valorProcurado << " foi encontrado no índice " << resultado << endl;
    } else {
        cout << "O valor " << valorProcurado << " não foi encontrado no vetor." << endl;
    }
    
    return 0;
}