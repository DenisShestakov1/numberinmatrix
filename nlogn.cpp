#include <iostream>

using namespace std;


const int n = 3;


bool binarySearch(int row[], int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (row[mid] == target) {
            return true;
        }
        else if (row[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return false;
}


bool findNumberInMatrix(int matrix[n][n], int target) {
  
    for (int i = 0; i < n; ++i) {
        if (binarySearch(matrix[i], target)) {
            return true;
        }
    }

    return false;
}

int main() {
    int matrix[n][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target;
    cout << "Введите искомое число";
    cin >> target;
    if (findNumberInMatrix(matrix, target)) {
        cout << "Число " << target << " найдено в матрице." << endl;
    }
    else {
        cout << "Число " << target << " не найдено в матрице." << endl;
    }

    return 0;
}
