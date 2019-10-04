//Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 5 2 4 3
//Sample Output:
//
//5 4

#include "t03_bigger.h"
#include <iostream>
#include <vector>

using namespace std;

int t03_bigger() {
  int n,i;
    cin >> n;
    vector <int> a(n);
    cin >> a[0];
    for ( i = 1; i < n; i++) {
      cin >> a[i];
        if (a[i] > a[i-1]) {
            cout << a[i] << " ";
        }
    }
  return 0;
}
