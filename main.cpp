#include <iostream>

int main() {
    char character;
    bool firstQuote = false;
    while(scanf("%c", &character) != EOF) {
        if(character == '"') {
            if(!firstQuote) {
                std::cout << "``";
                firstQuote = true;
            }
            else {
                std::cout << "''";
                firstQuote = false;
            }
        }
        else
            std::cout << character;
    }
    return 0;
}
