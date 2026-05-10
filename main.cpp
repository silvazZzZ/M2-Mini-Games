#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    srand(time(0));

    int tentativas = 1;
    int numero = rand() % 201 - 100;
    int palpite;

    cout << "Digite um palpite: " << endl;
    cin >> palpite;

    while (palpite != numero) {


        cout << "\nNúmero errado, tente outro: " << endl;
        cin >> palpite;
        tentativas++;
        
         if (tentativas == 5 && palpite != numero)
        {
            if(numero % 2 == 0){
                cout << "\n******** Dica: O número é par. ********" << endl;
            }

            else{
                cout << "\n******** Dica: O número é ímpar. ********" << endl;
            }
        }
       


         if (tentativas >= 7 && palpite != numero)
        {

         int diferenca = abs(palpite - numero);

            if(diferenca <= 10){
                cout << "\n******** Dica: Está Quente! ********" << endl;
            } 
            
            else{
                cout << "\n******** Dica: Está Frio! ********" << endl;
            }
        }



            if (tentativas >= 10 && palpite != numero && numero > 0) {
               cout << "\n******** Dica: O número é positivo. ********" << endl;
        } 

            else if (tentativas >= 10 && palpite != numero && numero < 0) {
                cout << "\n******** Dica: O número é negativo. ********" << endl;
            }
        



         if (tentativas >= 12 && palpite != numero)
        {

         int distancia = abs(palpite - numero);

            cout << "\n******** Dica: O seu palpite anterior estava a " << distancia << " números de distância.    ********" << endl;
        }

    }

    if (palpite == numero)
    {

       cout << "\n============= \n" << endl;

       cout << R"(

 ██████╗  █████╗ ███╗   ███╗███████╗
██╔════╝ ██╔══██╗████╗ ████║██╔════╝
██║  ███╗███████║██╔████╔██║█████╗
██║   ██║██╔══██║██║╚██╔╝██║██╔══╝
╚██████╔╝██║  ██║██║ ╚═╝ ██║███████╗
 ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝

 ██████╗ ██╗   ██╗███████╗██████╗
██╔═══██╗██║   ██║██╔════╝██╔══██╗
██║   ██║██║   ██║█████╗  ██████╔╝
██║   ██║╚██╗ ██╔╝██╔══╝  ██╔══██╗
╚██████╔╝ ╚████╔╝ ███████╗██║  ██║
 ╚═════╝   ╚═══╝  ╚══════╝╚═╝  ╚═╝

)" << endl;

      cout << "\n============= \n" << endl;
       cout << "Parabéns você acertou!!" << endl;
       cout << "Parabéns você acertou!!" << endl;
       cout << "Parabéns você acertou!!" << endl;

    }

    return 0;

}