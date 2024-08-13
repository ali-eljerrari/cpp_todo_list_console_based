#include <iostream>
#include "cpp_todo_list_console_based.h"

using namespace std;

int main(int argc, char* argv[]) {
    size_t agesArraySize = 2;

    int ages[agesArraySize] = { 27, 30 };

    cout << "My age is: " << calcAddition(ages[0], ages[1]) << endl;
    return 0;
}

int calcAddition(int x, int y) {
    return x + y;
}