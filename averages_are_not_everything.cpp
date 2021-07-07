//Comprehension Exercise: Médias não são tudo

# include <iostream>
# include <vector>
# include <math.h>
# include <iomanip>
# include <locale.h>
#include "NormalDistribuition.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    double p, avr, std_dev;
    int option;

    std::cout << "Selecione uma das opcoes para calcular a probabilidade de um ponto ocorrer em uma distribuicao normal: \n" << std::endl;
    std::cout << "  " << "0 - para inserir o ponto, a media e o desvio padrao." << std::endl;
    std::cout << "  " << "1 - para inserir apenas o ponto(media = 0 e desvio padrao = 1)" << std::endl;
    std::cin >> option;

    if (option == 0) {
        std::cout << "Insira o ponto. " << std::endl;
        std::cin >> p;

        std::cout << "Insira a media. " << std::endl;
        std::cin >> avr;

        std::cout << "Insira o desvio padrao. " << std::endl;
        std::cin >> std_dev;

        std::cout << "A probabilidade do ponto " << p << " ocorrer em uma distribuicao normal e de: ";
        std::cout << std::setprecision(4) << normal_distribution_pdf1(p, avr, std_dev)*100 << " %" << std::endl;
    }
    else if(option == 1) {
        std::cout << "Insira o ponto." << std::endl;
        std::cin >> p;

        std::cout << "A probabilidade do ponto " << p << " ocorrer em uma distribuicao normal e de: ";
        std::cout << std::setprecision(4) << normal_distribution_pdf2(p) * 100 << "%" << std::endl;
    }
    else {
        std::cout << "Opcao Invalida!" << std::endl;
    }
}//Para encerrar a execucao digite o camando "exit"
