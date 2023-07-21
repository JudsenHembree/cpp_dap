// Description: main file for the project
// configuring dap for cpp in nvim
#include <iostream>

int main(){
    std::cout << "Forcing a seg fault!" << std::endl;
    int *p = nullptr;
    // allocate
    p = new int;
    *p = 0;
    std::cout << "p = " << *p << std::endl;
    delete p;
    return 0;
}
