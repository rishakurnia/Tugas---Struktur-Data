#include <iostream>
using namespace std;
int main(){
  int i, j, m, n, matriks[10][10], transpos[10][10];
  cout << "Masukkan jumlah baris matriks: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;
  cout << "Masukkan elemen matriks\n";
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      cin  >> matriks[i][j];
    }
  }
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      transpos[j][i] = matriks[i][j];
    }
  }
  cout << "Hasil Transpos Matriks: \n";
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
      cout << transpos[i][j] << "\t";
    }
    cout << endl;
  }
}
