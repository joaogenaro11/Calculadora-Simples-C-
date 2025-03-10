#include <iostream>

int main() {
    double num1, num2;
    char operacao;
    
    std::cout << "Digite dois numeros: ";
    std::cin >> num1 >> num2;
    std::cout << "Escolha a operacao (+, -, *, /): ";
    std::cin >> operacao;
    
    switch (operacao) {
        case '+': std::cout << "Resultado: " << num1 + num2 << std::endl; break;
        case '-': std::cout << "Resultado: " << num1 - num2 << std::endl; break;
        case '*': std::cout << "Resultado: " << num1 * num2 << std::endl; break;
        case '/': 
            if (num2 != 0) std::cout << "Resultado: " << num1 / num2 << std::endl;
            else std::cout << "Erro: Divisao por zero!" << std::endl;
            break;
        default: std::cout << "Operacao invalida!" << std::endl;
    }
    return 0;
}