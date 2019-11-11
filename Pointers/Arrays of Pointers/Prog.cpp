// Arrays of Pointers and passing them to functions.
#include <cstdio>

void PrintOutOf(const char **, int);

void PrintOutOf2(const char *StrSet[], int Index);

int main() {
//	char * StringSet[4] = {"Hello","World","Hi","Universe"};
    // ISO C++11 does not allow conversion from string literal to 'char *'
    const char * StringSet[4] = {"Hello", "World", "Hi", "Universe"};
    for (auto & i : StringSet) {
        printf("%s\n", i);
    }

    PrintOutOf(StringSet, 1);
    PrintOutOf2(StringSet, 2);

    return 0;
}

void PrintOutOf(const char **StrSet, int Index) {
    printf("\n%s\n", *(StrSet + Index));
    printf("%s\n", StrSet[Index]);

}

void PrintOutOf2(const char *StrSet[], int Index) {
    printf("\n%s\n", *(StrSet + Index));
    printf("%s\n", StrSet[Index]);

}
