#include <iostream>
#include <vector>

using namespace std;

bool vetorEstaOrdenado(const vector<int>& A) {
    int tamanho = A.size();
    
    
    if (tamanho <= 1) {
        return true;
    }
    
    
    for (int i = 0; i < tamanho - 1; ++i) {
        if (A[i] > A[i + 1]) {
            return false; 
        }
    }
    
    return true; 
}

int main() {
    
    vector<int> vetor1 = {1, 2, 3, 4, 5};
    vector<int> vetor2 = {3, 1, 4, 7, 9};
    
    cout << "O vetor 1 esta ordenado? " << (vetorEstaOrdenado(vetor1) ? "Sim" : "Nao") << endl;
    cout << "O vetor 2 esta ordenado? " << (vetorEstaOrdenado(vetor2) ? "Sim" : "Nao") << endl;
    
    return 0;
}