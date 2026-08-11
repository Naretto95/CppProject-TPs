#include <iostream>
#include <string>
#include "list.h"

int main()
{
    stack<std::string> tab(5);
    tab.push("1");
    tab.push("2");
    tab.push("3");
    tab.pop();
    tab.push("4");
    std::cout << "premier element : " << tab.peek() << std::endl;
    std::cout << "taille du tableau : " << tab.size() << std::endl;
    tab.pop();
    tab.pop();
    tab.pop();
    if (tab.Empty()) {
        std::cout << "Vide \n";
    }
    return 0;
}
