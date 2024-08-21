#include <iostream>
#define MAX 100
using namespace std;

int main() {
  int tamanho_matriz;

  cout << "Informe a proporcao de uma matriz quadrada A (até 100): ";
  cin >> tamanho_matriz;

  if (tamanho_matriz < 100) {

    int matrizA[tamanho_matriz][tamanho_matriz];
    int matrizAT[tamanho_matriz][tamanho_matriz];
   
    for (int i = 0; i < tamanho_matriz; i++) {
      for (int j = 0; j < tamanho_matriz; j++) {
        cout << "Informe o item da posição [" << i + 1 << "][" << j + 1
             << "] da matriz A: ";
        cin >> matrizA[j][i];
      }
    }

    cout << "\n";

    for (int i = 0; i < tamanho_matriz; i++) {
      for (int j = 0; j < tamanho_matriz; j++) {
        matrizAT[j][i] = matrizA[j][i];
      }
    }

  cout << "\nMatriz A:" << endl;
  for (int i = 0; i < tamanho_matriz; i++) {
    for (int j = 0; j < tamanho_matriz; j++) {
      cout << matrizA[j][i] << " ";
    }
    cout << endl;
  }
  cout << "\nMatriz AT:" << endl;
  for (int i = 0; i < tamanho_matriz; i++) {
    for (int j = 0; j < tamanho_matriz; j++) {
      cout << matrizAT[i][j] << " ";
    }
    cout << endl;
  }
  }else{
    cout << "O tamanho da matriz deve ser menor que 100";
  }

  return 0;
}
