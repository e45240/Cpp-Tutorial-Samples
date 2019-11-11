#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int BaseNo , ExpoNo;
    cin >> BaseNo >> ExpoNo;
    cout << pow(BaseNo, ExpoNo) << endl;
    // experimental summary :
    // 1. "ios::right" prior to "ios::left"
    // 2. "ios::fixed" independent of "ios::right" or "ios::left", default "ios::right"
    //
    // TODO tracing the source

    cout << setw(16) << setiosflags(ios::fixed) << pow(BaseNo,ExpoNo) << endl;
    cout << setw(16) << setiosflags(ios::left) << pow(BaseNo,ExpoNo) << endl;

    cout << setw(16) << setiosflags(ios::fixed) << pow(BaseNo,ExpoNo) << endl;
    cout << setw(16) << setiosflags(ios::right) << pow(BaseNo,ExpoNo) << endl;
    cout << setw(16) << setiosflags(ios::left) << pow(BaseNo,ExpoNo) << endl;
    cout << setw(16) << setiosflags(ios::fixed) << pow(BaseNo,ExpoNo) << endl;
    cout << setw(16) << setiosflags(ios::right) << pow(BaseNo,ExpoNo) << endl;


	return 0;
}
