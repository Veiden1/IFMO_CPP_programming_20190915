//В обувном магазине продается обувь разного размера. 
// Известно, что одну пару обуви можно надеть на другую, 
// если она хотя бы на три размера больше. 
// В магазин пришел покупатель. 
// Требуется определить, какое наибольшее количество пар обуви сможет предложить ему продавец так,
// чтобы он смог надеть их все одновременно.
//
//Входные данные
//
//Сначала вводится размер ноги покупателя 
// (обувь меньшего размера он надеть не сможет),
// затем количество пар обуви в магазине и размер каждой пары.
// Размер — натуральное число, не превосходящее 100, 
// количество пар обуви в магазине не превосходит 1000.
//
//Выходные данные
//
//Выведите единственное число — максимальное количество пар обуви.
//
//Sample Input:
//
//26
//5
//30 35 40 41 42
//Sample Output:
//
//3

#include "t02_shoes.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t02_shoes() {
    int n, i, num, count = 0, size, lastsize;
    bool b = 1;
    cin >> size >> n;
    lastsize = size;
    vector <int> a(n);
    for (i = 0; i < n; i++) {
     cin >> a[i];  
    }
    sort(a.begin(), a.end());
    for (i = 0; i < n; i++) {  
        if (a[i] >= size && b) {
         num = i;
          lastsize = a[i];
         count++;
         b = 0;
        }
    }
    for (i = num+1; i < n; i++) {
     if (a[i] >= lastsize + 3) {
      lastsize = a[i];
         count++;
     }
    }
    cout << count;   
    return 0;
}