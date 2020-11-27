#include <iostream>

int main(int argc, char**) {
    int i = 0;
    int j = 1;
    while(i < 100) {
        int tmp = j;
        i = tmp;
        j = i + j;
    }
    std::cout << i << " " << j << std::endl;
    return 0;
}