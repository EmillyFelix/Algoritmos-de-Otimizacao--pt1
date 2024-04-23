#include <iostream>
#include <vector>

using namespace std;

// Função de busca sequencial recursiva
int buscaSequencialRecursiva(vector<int>& A, int X, int indice) {
    if (indice >= A.size()) {
        return -1; // X não foi encontrado
    }
    
    if (A[indice] == X) {
        return indice; 
    }
    
    return buscaSequencialRecursiva(A, X, indice + 1);
}

int main() {
    vector<int> vetor = {3, 6, 9, 12, 15};
    
    int valorProcurado;
    cout << "Digite o valor que deseja procurar: ";
    cin >> valorProcurado;
    
    int resultado = buscaSequencialRecursiva(vetor, valorProcurado, 0);
    
    if (resultado != -1) {
        cout << "O valor " << valorProcurado << " foi encontrado no índice " << resultado << endl;
    } else {
        cout << "O valor " << valorProcurado << " não foi encontrado no vetor." << endl;
    }
    
    return 0;
}#include <iostream>
#include <vector>

using namespace std;

// Função de busca sequencial recursiva
int buscaSequencialRecursiva(vector<int>& A, int X, int indice) {
    if (indice >= A.size()) {
        return -1; // X não foi encontrado
    }
    
    if (A[indice] == X) {
        return indice; // Retorna o índice se X for encontrado
    }
    
    return buscaSequencialRecursiva(A, X, indice + 1);
}

int main() {
    vector<int> vetor = {3, 6, 9, 12, 15};
    
    int valorProcurado;
    cout << "Digite o valor que deseja procurar: ";
    cin >> valorProcurado;
    
    int resultado = buscaSequencialRecursiva(vetor, valorProcurado, 0);
    
    if (resultado != -1) {
        cout << "O valor " << valorProcurado << " foi encontrado no índice " << resultado << endl;
    } else {
        cout << "O valor " << valorProcurado << " não foi encontrado no vetor." << endl;
    }
    
    return 0;
}
