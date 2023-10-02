#include <iostream>
using namespace std;
int main() {
    int yosh = 20;

    if (yosh < 18) {
        std::cout << "Siz noqonuniy yoshdasiz." << std::endl;
    } else if (yosh >= 18 && yosh < 65) {
        std::cout << "Siz yetwak yoshdasiz." << std::endl;
    } else {
        std::cout << "Siz pensiyonerdasiz." << std::endl;
    }

    return 0;
}

