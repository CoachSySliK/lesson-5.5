#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    
    cout << "С какими сторонами вы хотите построить треугольник?\n";
    cin >> a >> b >> c;

        
    if (a < b + c && b < a + c && c < a + b) {
        cout << "Тамам!";
    }
    else {
        cout << "Но тамам!";
    }

    return 0;
}
