// Arrays of Pointers and passing them to functions.
#include <iostream>
using namespace std;

void PrintOutOf(const char **StrSet,int Index);
void PrintOutOf2(const char *StrSet[] , int Index);

int main()
{
//	char * StringSet[4] = {"Hello", "World", "Hi", "Universe"};
    // ISO C++ 11 doesn't allow conversion from string literal to 'char*'
    const char * StringSet[4] = {"Hello", "World", "Hi", "Universe"};

	for (auto & i : StringSet)
		cout << i << endl;

	PrintOutOf(StringSet,1);
	PrintOutOf2(StringSet,2);

	return 0;
}
void PrintOutOf(const char **StrSet,int Index)
{
	cout << "\n" << *(StrSet+Index) << endl;
	cout << StrSet[Index] << endl;
}

void PrintOutOf2(const char *StrSet[] , int Index)
{
	cout << "\n" << *(StrSet+Index) << endl;
	cout << StrSet[Index] << endl;
}
