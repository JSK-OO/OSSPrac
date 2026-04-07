#include <iostream>

using namespace std;

int main() {
    string name;
    string numbers;
    cout << "이름을 입력하세요: ";
    cin >> name;
    cout << "학번을 입력하세요: ";
    cin >> numbers;
    cout << endl;
    cout << "<출력>" << endl;
    cout << "이름: " << name << endl;
    cout << "학번: " << numbers << endl;
    return 0;
}