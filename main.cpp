#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    int n, m;

    cout << "Введите количество строк матрицы: ";
    cin >> n;
    cout << "Введите количество столбцов матрицы: ";
    cin >> m;

    int matrix[n][m];

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int rotated[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rotated[j][n - 1 - i] = matrix[i][j];
        }
    }

    cout << "Матрица после поворота на 90 градусов по часовой стрелке:" << endl;
    for (int j = 0; j < m; j++) {
        for (int i = n - 1; i >= 0; i--) {
            cout << rotated[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
