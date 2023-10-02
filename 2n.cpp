#include <iostream>

using namespace std;


const int n = 3;


bool findNumberInMatrix(int array[n][n], int target) {

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (array[i][j] == target) {
                return true;
            }
        }
    }

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            if (array[i][j] == target) {
                return true;
            }
        }
    }

    
    return false;
}

int main() {
    setlocale(LC_ALL, "rus");
    int array[n][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target;
    cout << "Введите искомое число";
    cin >> target;

    if (findNumberInMatrix(array, target)) {
        cout << "Число " << target << " найдено в матрице." << endl;
    }
    else {
        cout << "Число " << target << " не найдено в матрице." << endl;
    }

    return 0;
}
