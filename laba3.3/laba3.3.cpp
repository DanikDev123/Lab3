

#include <iostream>
using namespace std; 
int main()
{
    setlocale(LC_ALL, "Russian");
    int sum = 0, num = 0, check = 0;
    double average;
    do {
        cout << "Введите целое число (0 для завершения): ";
        cin >> num;
        sum += num;

    } while (num != 0);
    cout << "sum is " << sum << endl;
  
    return 0;
}
