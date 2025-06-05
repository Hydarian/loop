// حلقه for زیر را به while تغییر دهید

//  float x = 4.15;
//  for (int i = 0; i < 3; i++)
//      x *= 2;


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        cout << i * i << " ";
        i++;
    }

    return 0;
}