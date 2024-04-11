#include <iostream>

using namespace std;

int main()
{
    int line[3];
    
    cout << "С какими сторонами вы хотите построить треугольник?\n";
    for (int i = 0; i < 3; i++) {
        cin >> line[i];
    }
        
    if (line[0] + line[1] <= line[2]) {
        cout << "Данный треугольник не возможен!";
	}
	else if (line[1] + line[2] <= line[0]) {
        cout << "Данный треугольник не возможен!";
	}
	else if (line[0] + line[2] <= line[1]) {
        cout << "Данный треугольник не возможен!";
    }
    else {
        cout << "Тамам!";
    }

    return 0;
}
