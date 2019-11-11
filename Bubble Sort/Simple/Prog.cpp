#include <iostream>
#include <random>
#include <ctime>
#include <functional>

using namespace std;

void BubbleSort(int [], int);

int main() {
    const int ArraySize = 10;
    int Array1[ArraySize];

//    srand(time(NULL));
//    for (int i = 0; i < ArraySize; i++)
//        Array1[i] = 1 + rand() % 100;

//    rand() has limited randomness; use C++11 random library instead
    default_random_engine generator(time(nullptr));
    uniform_int_distribution<int> distribution(1, 100);
    auto dice = bind(distribution, generator);
    for (int &i : Array1)
        i = dice();

    cout << "Before sorting:\n";
    for (int j : Array1)
        cout << j << "  ";
    cout << "\n";

    BubbleSort(Array1, ArraySize);

    return 0;
}

void BubbleSort(int Array1[], const int ArraySize)
// For a good portable version refer to "\..\Advanced\Prog.cpp"
{
    void Swap(int &, int &);
    for (int i = 0; i < ArraySize - 1; i++) {
        for (int j = 0; j < ArraySize - 1; j++) {
            if (Array1[j] < Array1[j + 1]) {
                Swap(Array1[j], Array1[j + 1]);
            }
        }
        cout << "Stage " << i + 1 << ":\n";
        for (int j = 0; j < ArraySize; j++)
            cout << Array1[j] << "  ";
        cout << "\n";
    }
}

void Swap(int &Var1, int &Var2) {
    int Hold = Var1;
    Var1 = Var2;
    Var2 = Hold;
}
