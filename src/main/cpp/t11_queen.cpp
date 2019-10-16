//Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
//Формат входных данных
//
//        Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
//Формат выходных данных
//        Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
//Sample Input 1:
//
//1 7
//2 4
//3 2
//4 8
//5 6
//6 1
//7 3
//8 5
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//1 8
//2 7
//3 6
//4 5
//5 4
//6 3
//7 2
//8 1
//Sample Output 2:
//
//YES

#include "t11_queen.h"
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int t11_queen() {
  bool b = 0;
    int i, j;
    vector <int> x(8);
    vector <int> y(8);
    for (i = 1; i < 9; i++) {
     cin >> x[i] >> y[i];   
    }
    for (i = 1; i < 9; i++) {
        for (j = i + 1; j < 9; j++) {
            if (x[i] == x[j] || y[i] == y[j] || abs(x[i]-x[j]) == abs(y[i]-y[j]) ) {
                b = 1;
                break;
            }
            if (b) { break; }
        }
        if (b) { break; }
    }
    if (b) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
  return 0;
}