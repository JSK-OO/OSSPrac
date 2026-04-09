#include <iostream>

using namespace std;

int main() {
    string name;
    string numbers;
    string major;
    string grade;
    cout << "이름을 입력하세요: ";
    cin >> name;
    cout << "학번을 입력하세요: ";
    cin >> numbers;
    cout << "학과를 입력하세요: ";
    cin >> major;
    cout << "학년을 입력하세요: ";
    cin >> grade;
    cout << endl;
    cout << "<출력>" << endl;
    cout << "이름: " << name << endl;
    cout << "학번: " << numbers << endl;
    cout << "학과: " << major << endl;
    cout << "학년: " << grade << endl;
    return 0;
}