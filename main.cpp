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
    int opcao;
    char resposta;

    srand(time(0));

    cout << "\n| Menu de jogos |" << endl;
    cout << "1. Jogo da Adivinhação" << endl;
    cout << "2. Quiz de Conhecimentos Gerais" << endl;
    cout << "3. Sair do Jogo\n" << endl;
    cout << "\nDigite um número: " << endl;
    cin >> opcao;

    switch (opcao) {

    case 1: {

       cout << "\n=======| Jogo da Adivinhação |=======\n" << endl;

    cout << "\nDigite um palpite: " << endl;
        cin >> palpite;

        while (palpite != numero)
        {

            cout << "\nNúmero errado, tente outro: " << endl;
            cin >> palpite;
            tentativas++;

            if (tentativas == 5 && palpite != numero)
            {
                if (numero % 2 == 0)
                {
                    cout << "\n******** Dica: O número é par. ********" << endl;
                }

                else
                {
                    cout << "\n******** Dica: O número é ímpar. ********" << endl;
                }
            }

            if (tentativas >= 7 && palpite != numero)
            {

                int diferenca = abs(palpite - numero);

                if (diferenca <= 10)
                {
                    cout << "\n******** Dica: Está Quente! ********" << endl;
                }

                else
                {
                    cout << "\n******** Dica: Está Frio! ********" << endl;
                }
            }

            if (tentativas >= 10 && palpite != numero && numero > 0)
            {
                cout << "\n******** Dica: O número é positivo. ********" << endl;
            }

            else if (tentativas >= 10 && palpite != numero && numero < 0)
            {
                cout << "\n******** Dica: O número é negativo. ********" << endl;
            }

            if (tentativas >= 12 && palpite != numero)
            {

                int distancia = abs(palpite - numero);

                cout << "\n******** Dica: O seu palpite anterior estava a " << distancia << " números de distância.    ********" << endl;
            }
        }

        if (palpite == numero) {

            cout << "\n============= \n"
                 << endl;

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

            cout << "\n============= \n"
                 << endl;
            cout << "Parabéns você acertou!!" << endl;
            cout << "Parabéns você acertou!!" << endl;
            cout << "Parabéns você acertou!!" << endl;

        }

    break;

    }

    // Quiz de conhecimentos gerais


    case 2:

    {

         cout << "\n=======| Quiz de Conhecimentos Gerais |=======\n" << endl;

      int total = 0;

        //randomizador para escolher entre 2 listas de 5 quest�es
        int grupo = rand() % 2 + 1;

        switch(grupo){

             case 1:
                {
                
                cout<<"| Geografia |"<<endl;
                cout<<"1. Qual � o maior oceano da Terra?"<<endl;
                cout<<"A) Oceano Atl�ntico"<<endl;
                cout<<"B) Oceano �ndico"<<endl;
                cout<<"C) Oceano Pac�fico"<<endl;
                cout<<"D) Oceano �rtico"<<endl;
                cout<<"\nDigite a letra: ";
                cin>>resposta;

                    if(resposta == 'c' || resposta == 'C'){

                     cout<<"\nResposta correta!\n"<<endl;

                     total++;
                    }
                    
                    else{

                     cout<<"\nResposta incorreta!\n"<<endl;
                     
                    }

                cout<<"| Arte |"<<endl;
                cout<<"2. Quem pintou a obra Mona Lisa?"<<endl;
                cout<<"A) Pablo Picasso"<<endl;
                cout<<"B) Leonardo da Vinci"<<endl;
                cout<<"C) Vincent van Gogh"<<endl;
                cout<<"D) Michelangelo"<<endl;
                cout<<"\n Digite a letra: ";
                cin>>resposta;

                        if(resposta == 'b' || resposta == 'B'){

                         cout<<"\nResposta correta!\n"<<endl;
                         total++;

                        }

                        else{

                         cout<<"\nResposta incorreta!\n"<<endl;

                            }

                            cout<<"| Astronomia |"<<endl;
                            cout<<"3. Qual planeta � conhecido como \"Planeta Vermelho\"?"<<endl;
                            cout<<"A) Marte"<<endl;
                            cout<<"B) Saturno"<<endl;
                            cout<<"C) J�piter"<<endl;
                            cout<<"D) V�nus"<<endl;
                            cout<<"\n Digite a letra: ";
                            cin>>resposta;

                            if(resposta == 'a' || resposta == 'A'){

                             cout<<"\nResposta correta!\n"<<endl;
                             total++;

                            }
                            
                            else {

                                cout<<"\nResposta incorreta!\n"<<endl;

                            }
                             
                            cout<<"| Hist�ria |"<<endl;
                            cout<<"4.Em que pa�s foram realizados os primeiros jogos Ol�mpicos da Antiguidade"<<endl;
                            cout<<"A) It�lia"<<endl;
                            cout<<"B) Egito"<<endl;
                            cout<<"C) Gr�cia"<<endl;
                            cout<<"D) Fran�a"<<endl;
                            cout<<"\n Digite a letra: ";
                            cin>>resposta;

                            if(resposta == 'c' || resposta == 'C'){

                             cout<<"\nResposta correta!\n"<<endl;
                             total++;

                            }else{

                                cout<<"\nResposta incorreta!\n"<<endl;

                            }

                            cout<<"| Ci�ncias |"<<endl;
                            cout<<"5.Qual � o animal terrestre mais r�pido do mundo?"<<endl;
                            cout<<"A) Le�o"<<endl;
                            cout<<"B) Cavalo"<<endl;
                            cout<<"C) Guepardo"<<endl;
                            cout<<"D) Lobo"<<endl;
                            cout<<"\n Digite a letra: ";
                            cin>>resposta;

                            if(resposta == 'c' || resposta == 'C'){

                             cout<<"\nResposta correta!\n"<<endl;
                             total++;

                            }
                            else {

                                cout<<"\nResposta incorreta!\n"<<endl;

                            }

                            cout<<"\n Total de acertos: "<<total<<" / 5"<<endl;
                            break;
                        }

                    case 2:

                        {
                            cout<<"| Qu�mica |"<<endl;
                            cout<<"1.Qual destes elementos qu�micos � representado pela sigla \"O\"?"<<endl;
                            cout<<"A) Ouro"<<endl;
                            cout<<"B) Oxig�nio"<<endl;
                            cout<<"C) Osmium"<<endl;
                            cout<<"D) Prata"<<endl;
                            cout<<"\n Digite a letra: ";
                            cin>>resposta;

                            if(resposta == 'b' || resposta == 'B'){

                                cout<<"\nResposta correta!\n"<<endl;
                                total++;

                            }

                            else {

                                cout<<"\nResposta incorreta!\n"<<endl;

                            }

                            cout<<"| Geografia |"<<endl;
                            cout<<"2. Qual � a capital do Canad�?"<<endl;
                            cout<<"A) Toronto"<<endl;
                            cout<<"B) Vancouver"<<endl;
                            cout<<"C) Montreal"<<endl;
                            cout<<"D) Ottawa"<<endl;
                            cout<<"\n Digite a letra: ";
                            cin>>resposta;

                            if(resposta == 'd' || resposta == 'D'){

                                cout<<"\nResposta correta!\n"<<endl;
                                total++;

                            }

                            else {

                                cout<<"\nResposta incorreta!\n"<<endl;

                            }

                            cout<<"| Tecnologia |"<<endl;
                            cout<<"3. Qual inven��o � atribu�da a Alexander Graham Bell?"<<endl;
                            cout<<"A) R�dio"<<endl;
                            cout<<"B) L�mpada"<<endl;
                            cout<<"C) Telefone"<<endl;
                            cout<<"D) Televis�o"<<endl;
                            cout<<"\n Digite a letra: ";
                            cin>>resposta;

                            if(resposta == 'c' || resposta == 'C'){

                                cout<<"\nResposta correta!\n"<<endl;
                                total++;

                            }

                            else {

                                cout<<"\nResposta incorreta!\n"<<endl;

                            }

                            cout<<"| Geometria |"<<endl;
                            cout<<"4. Qual � o nome da figura geom�trica que possui 3 lados?"<<endl;
                            cout<<"A) Tri�ngulo"<<endl;
                            cout<<"B) Ret�ngulo"<<endl;
                            cout<<"C) Quadrado"<<endl;
                            cout<<"D) Pent�gono"<<endl;
                            cout<<"\n Digite a letra: ";
                            cin>>resposta;

                            if(resposta == 'a' || resposta == 'A'){

                                cout<<"\nResposta correta!\n"<<endl;
                                total++;

                            }
                            
                            else{

                                cout<<"\nResposta incorreta!\n"<<endl;

                            }

                            cout<<"| Cultura Pop / Mitologia |"<<endl;
                            cout<<"5.Qual personagem usa um martelo chamado Mj�lnir?"<<endl;
                            cout<<"A) Loki"<<endl;
                            cout<<"B) Homem de Ferro"<<endl;
                            cout<<"C) Thor"<<endl;
                            cout<<"D) Hulk"<<endl;
                            cout<<"\n Digite a letra: ";
                            cin>>resposta;

                            if(resposta == 'c' || resposta == 'C'){

                             cout<<"\nResposta correta!\n"<<endl;
                             total++;

                            }

                            else {

                             cout<<"\nResposta incorreta!\n"<<endl;

                            }

                            cout<<"\n Total de acertos: "<<total<<" / 5"<<endl;

                            break;
                        }
                     }
                }

// Encerramento do programa

        case 3: {
            cout << "\nEncerrando o programa..." << endl;
             break;
        }

// Opção inválida

        default:{

            cout << "\nOpção inválida, tente novamente!" << endl;

            }
    }

    return 0;
}