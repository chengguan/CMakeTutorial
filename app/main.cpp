#include <iostream>

#include "mylib.h"
#include "config.h"

int main()
{
    std::cout << project_name << '\n';
    std::cout << project_version << '\n';

    printHelloWorld();

    return 0;
}
