#include "iostream"

int main (int argc, char *argv[]) {
    int l, b;
    std::cout << "Enter Length of Rectangle :- ";
    std::cin >> l;
    std::cout << "Enter Breadth of Rectangle :- ";
    std::cin >> b;
    std::cout << "\n";

    for (int i=0; i<b; i++) {
        for (int j=0; j<l ; j++) {
            std::cout << "* " ;
        }
        std::cout << "\n";
    }
    return 0;
}
