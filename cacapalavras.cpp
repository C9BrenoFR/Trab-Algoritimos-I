#include <iostream>
#include <cstring>
#include "biblioteca.h"

using namespace std;

int main()
{
    // leão (horizontal - 0,0), tigre(vertical - 0,10), canguru(horizontal - 9,2) 
    //camelo( diagona - 3,0), tilapia(horizontal - 3,4), gato(vertical - 1,6) e urubu(vertical - 4,7)

    char matrizAnimais[10][10] = {
        {'L', 'E', 'A', 'O', 'K', 'X', 'V', 'F', 'P', 'T'},
        {'N', 'Z', 'U', 'S', 'Y', 'G', 'J', 'O', 'H', 'I'},
        {'C', 'W', 'T', 'I', 'L', 'A', 'P', 'I', 'A', 'G'},
        {'U', 'A', 'H', 'C', 'N', 'T', 'V', 'K', 'D', 'R'},
        {'X', 'S', 'M', 'I', 'Y', 'O', 'Q', 'U', 'N', 'E'},
        {'M', 'Q', 'W', 'E', 'F', 'X', 'L', 'R', 'U', 'J'},
        {'P', 'B', 'I', 'Z', 'L', 'A', 'S', 'U', 'F', 'D'},
        {'R', 'O', 'G', 'Y', 'A', 'O', 'X', 'B', 'C', 'Y'},
        {'N', 'C', 'A', 'N', 'G', 'U', 'R', 'U', 'Z', 'K'},
        {'H', 'F', 'O', 'Y', 'J', 'V', 'I', 'Z', 'P', 'W'}};

    // banana (horizontal - 0,0), acerola (vertical - 0, 10), uva (diagonal - 2, 6)
    // laranja (vertical - 3, 6 ), pitanga (horizontal - 10, 0) e kiwi (diagonal - 1, 3).

    char matrizFrutas[10][10] = {
        {'B', 'A', 'N', 'A', 'N', 'A', 'F', 'X', 'K', 'A'},
        {'S', 'Z', 'D', 'U', 'C', 'G', 'Y', 'B', 'N', 'C'},
        {'J', 'G', 'T', 'H', 'V', 'U', 'O', 'P', 'M', 'E'},
        {'I', 'K', 'Q', 'N', 'F', 'V', 'L', 'E', 'S', 'R'},
        {'D', 'Y', 'I', 'C', 'J', 'A', 'A', 'Z', 'X', 'O'},
        {'U', 'M', 'V', 'W', 'B', 'G', 'R', 'D', 'Y', 'L'},
        {'X', 'N', 'S', 'O', 'I', 'P', 'A', 'H', 'F', 'A'},
        {'C', 'E', 'P', 'Y', 'O', 'T', 'N', 'G', 'Q', 'U'},
        {'A', 'L', 'Y', 'G', 'X', 'A', 'J', 'B', 'Z', 'W'},
        {'P', 'I', 'T', 'A', 'N', 'G', 'A', 'K', 'V', 'L'}};

    // medica(horizontal - 0,0), enfermeiro(horizontal - 6,0), ator(vertical - 3,8)
    // lixeiro(vertical - 0,9), juiza(horizontal - 3,4), musico(diagonal - 0,0).

    char matrizProfissoes[10][10] = {
        {'M', 'E', 'D', 'I', 'C', 'A', 'N', 'Y', 'P', 'L'},
        {'K', 'U', 'R', 'Q', 'B', 'D', 'G', 'J', 'O', 'I'},
        {'F', 'Z', 'S', 'A', 'W', 'K', 'O', 'X', 'V', 'X'},
        {'O', 'M', 'G', 'I', 'J', 'U', 'I', 'Z', 'A', 'E'},
        {'S', 'R', 'P', 'K', 'C', 'H', 'D', 'L', 'T', 'I'},
        {'A', 'Y', 'U', 'J', 'G', 'O', 'N', 'H', 'O', 'R'},
        {'E', 'N', 'F', 'E', 'R', 'M', 'E', 'I', 'R', 'O'},
        {'W', 'B', 'H', 'F', 'E', 'T', 'M', 'U', 'Q', 'N'},
        {'U', 'Q', 'I', 'D', 'L', 'A', 'C', 'K', 'Z', 'Y'},
        {'X', 'E', 'W', 'H', 'Y', 'S', 'O', 'A', 'V', 'J'}};

    int tema = 1;

    // escolha do tema
    do
    {
        if (tema < 1 || tema > 3)
        {
            cout << "Tema inválido!" << endl;
        }

        cout << "Escolha o tema:" << endl;
        cout << "1 - Animais" << endl;
        cout << "2 - Frutas" << endl;
        cout << "3 - Profissoes" << endl;
        cin >> tema;
    } while (tema < 1 || tema > 3);

    if (tema == 1)
    {
        // variaveis para armazenar as palavras
        char animais1[100], animais2[100], animais3[100], animais4[100], animais5[100], animais6[100], animais7[100];
        imprimirmatriz(matrizAnimais);

        int n, m, p, restantes = 7;

        // loop para procurar as palavras, você só sai do loop quando encontrar todas as palavras.
        do
        {
            do
            {
                cout << "Digite a quantidade de palavras que deseja procurar(maximo de " << restantes << "): ";
                cin >> n;

            } while (n < 1 || n > restantes);

            cout << "Digite a linha, coluna que deseja procurar: " << endl;
            cin >> m >> p;

            if (n == 1)
            {
                cout << "Digite a palavra que deseja procurar: ";
            }else
            {
                cout << "Digite as palavras que deseja procurar: ";
            }
            
            // checa se a palavra existe de acordo com a quantidade de palavras que o usuário digitou
            if (n == 1)
            {
                cin >> animais1;
                restantes = checar(matrizAnimais, animais1, m, p, restantes);
            }
            else if (n == 2)
            {
                cin >> animais1 >> animais2;
                restantes = checar(matrizAnimais, animais1, m, p, restantes);
                restantes = checar(matrizAnimais, animais2, m, p, restantes);
            }
            else if (n == 3)
            {
                cin >> animais1 >> animais2 >> animais3;
                restantes = checar(matrizAnimais, animais1, m, p, restantes);
                restantes = checar(matrizAnimais, animais2, m, p, restantes);
                restantes = checar(matrizAnimais, animais3, m, p, restantes);
            }
            else if (n == 4)
            {
                cin >> animais1 >> animais2 >> animais3 >> animais4;
                restantes = checar(matrizAnimais, animais1, m, p, restantes);
                restantes = checar(matrizAnimais, animais2, m, p, restantes);
                restantes = checar(matrizAnimais, animais3, m, p, restantes);
                restantes = checar(matrizAnimais, animais4, m, p, restantes);
            }
            else if (n == 5)
            {
                cin >> animais1 >> animais2 >> animais3 >> animais4 >> animais5;
                restantes = checar(matrizAnimais, animais1, m, p, restantes);
                restantes = checar(matrizAnimais, animais2, m, p, restantes);
                restantes = checar(matrizAnimais, animais3, m, p, restantes);
                restantes = checar(matrizAnimais, animais4, m, p, restantes);
                restantes = checar(matrizAnimais, animais5, m, p, restantes);
            }
            else if (n == 6)
            {
                cin >> animais1 >> animais2 >> animais3 >> animais4 >> animais5 >> animais6;
                restantes = checar(matrizAnimais, animais1, m, p, restantes);
                restantes = checar(matrizAnimais, animais2, m, p, restantes);
                restantes = checar(matrizAnimais, animais3, m, p, restantes);
                restantes = checar(matrizAnimais, animais4, m, p, restantes);
                restantes = checar(matrizAnimais, animais5, m, p, restantes);
                restantes = checar(matrizAnimais, animais6, m, p, restantes);
            }
            else if (n == 7)
            {
                cin >> animais1 >> animais2 >> animais3 >> animais4 >> animais5 >> animais6 >> animais7;
                restantes = checar(matrizAnimais, animais1, m, p, restantes);
                restantes = checar(matrizAnimais, animais2, m, p, restantes);
                restantes = checar(matrizAnimais, animais3, m, p, restantes);
                restantes = checar(matrizAnimais, animais4, m, p, restantes);
                restantes = checar(matrizAnimais, animais5, m, p, restantes);
                restantes = checar(matrizAnimais, animais6, m, p, restantes);
                restantes = checar(matrizAnimais, animais7, m, p, restantes);
            }
            
            // imprime quantas palavras foram encontradas e quantas restam
            cout << "Voce encontrou " << 7 - restantes << " palavras" << endl;
            cout << "Restam " << restantes << " palavras" << endl;

        } while (restantes > 0);
    }

    if (tema == 2)
    {
        // variaveis para armazenar as palavras
        char frutas1[100], frutas2[100], frutas3[100], frutas4[100], frutas5[100], frutas6[100];
        imprimirmatriz(matrizFrutas);

        int n, m, p, restantes = 6;

        //loop para procurar as palavras, você só sai do loop quando encontrar todas as palavras.
        do
        {
            do
            {
                cout << "Digite a quantidade de palavras que deseja procurar(maximo de " << restantes << "): ";
                cin >> n;

            } while (n < 1 || n > restantes);

            cout << "Digite a linha, coluna que deseja procurar: " << endl;
            cin >> m >> p;

            if (n == 1)
            {
                cout << "Digite a palavra que deseja procurar: ";
            }else
            {
                cout << "Digite as palavras que deseja procurar: ";
            }

            // checa se a palavra existe de acordo com a quantidade de palavras que o usuário digitou
            if (n == 1)
            {
                cin >> frutas1;
                restantes = checar(matrizFrutas, frutas1, m, p, restantes);
            }
            else if (n == 2)
            {
                cin >> frutas1 >> frutas2;
                restantes = checar(matrizFrutas, frutas1, m, p, restantes);
                restantes = checar(matrizFrutas, frutas2, m, p, restantes);
            }
            else if (n == 3)
            {
                cin >> frutas1 >> frutas2 >> frutas3;
                restantes = checar(matrizFrutas, frutas1, m, p, restantes);
                restantes = checar(matrizFrutas, frutas2, m, p, restantes);
                restantes = checar(matrizFrutas, frutas3, m, p, restantes);
            }
            else if (n == 4)
            {
                cin >> frutas1 >> frutas2 >> frutas3 >> frutas4;
                restantes = checar(matrizFrutas, frutas1, m, p, restantes);
                restantes = checar(matrizFrutas, frutas2, m, p, restantes);
                restantes = checar(matrizFrutas, frutas3, m, p, restantes);
                restantes = checar(matrizFrutas, frutas4, m, p, restantes);
            }
            else if (n == 5)
            {
                cin >> frutas1 >> frutas2 >> frutas3 >> frutas4 >> frutas5;
                restantes = checar(matrizFrutas, frutas1, m, p, restantes);
                restantes = checar(matrizFrutas, frutas2, m, p, restantes);
                restantes = checar(matrizFrutas, frutas3, m, p, restantes);
                restantes = checar(matrizFrutas, frutas4, m, p, restantes);
                restantes = checar(matrizFrutas, frutas5, m, p, restantes);
            }
            else if (n == 6)
            {
                cin >> frutas1 >> frutas2 >> frutas3 >> frutas4 >> frutas5 >> frutas6;
                restantes = checar(matrizFrutas, frutas1, m, p, restantes);
                restantes = checar(matrizFrutas, frutas2, m, p, restantes);
                restantes = checar(matrizFrutas, frutas3, m, p, restantes);
                restantes = checar(matrizFrutas, frutas4, m, p, restantes);
                restantes = checar(matrizFrutas, frutas5, m, p, restantes);
                restantes = checar(matrizFrutas, frutas6, m, p, restantes);
            }

            // imprime quantas palavras foram encontradas e quantas restam
            cout << "Voce encontrou " << 6 - restantes << " palavras" << endl;
            cout << "Restam " << restantes << " palavras" << endl;

        } while (restantes > 0);
    }

    if (tema == 3)
    {
        // variaveis para armazenar as palavras
        char profissoes1[100], profissoes2[100], profissoes3[100], profissoes4[100], profissoes5[100], profissoes6[100];
        imprimirmatriz(matrizProfissoes);

        int n, m, p, restantes = 6;

        //loop para procurar as palavras, você só sai do loop quando encontrar todas as palavras.
        do
        {
            do
            {
                cout << "Digite a quantidade de palavras que deseja procurar(maximo de " << restantes << "): ";
                cin >> n;

            } while (n < 1 || n > restantes);

            cout << "Digite a linha, coluna que deseja procurar: " << endl;
            cin >> m >> p;

            if (n == 1)
            {
                cout << "Digite a palavra que deseja procurar: ";
            }else
            {
                cout << "Digite as palavras que deseja procurar: ";
            }

            // checa se a palavra existe de acordo com a quantidade de palavras que o usuário digitou
            if (n == 1)
            {
                cin >> profissoes1;
                restantes = checar(matrizProfissoes, profissoes1, m, p, restantes);
            }
            else if (n == 2)
            {
                cin >> profissoes1 >> profissoes2;
                restantes = checar(matrizProfissoes, profissoes1, m, p, restantes);
                restantes = checar(matrizProfissoes, profissoes2, m, p, restantes);
            }
            else if (n == 3)
            {
                cin >> profissoes1 >> profissoes2 >> profissoes3;
                restantes = checar(matrizProfissoes, profissoes1, m, p, restantes);
                restantes = checar(matrizProfissoes, profissoes2, m, p, restantes);
                restantes = checar(matrizProfissoes, profissoes3, m, p, restantes);
            }
            else if (n == 4)
            {
                cin >> profissoes1 >> profissoes2 >> profissoes3 >> profissoes4;
                restantes = checar(matrizProfissoes, profissoes1, m, p, restantes);
                restantes = checar(matrizProfissoes, profissoes2, m, p, restantes);
                restantes = checar(matrizProfissoes, profissoes3, m, p, restantes);
                restantes = checar(matrizProfissoes, profissoes4, m, p, restantes);
            }
            else if (n == 5)
            {
                cin >> profissoes1 >> profissoes2 >> profissoes3 >> profissoes4 >> profissoes5;
                restantes = checar(matrizProfissoes, profissoes1, m, p, restantes);
                restantes = checar(matrizProfissoes, profissoes2, m, p, restantes);
                restantes = checar(matrizProfissoes, profissoes3, m, p, restantes);
                restantes = checar(matrizProfissoes, profissoes4, m, p, restantes);
                restantes = checar(matrizProfissoes, profissoes5, m, p, restantes);
            }
            else if (n == 6)
            {
                cin >> profissoes1 >> profissoes2 >> profissoes3 >> profissoes4 >> profissoes5 >> profissoes6;
                restantes = checar(matrizProfissoes, profissoes1, m, p, restantes);
                restantes = checar(matrizProfissoes, profissoes2, m, p, restantes);
                restantes = checar(matrizProfissoes, profissoes3, m, p, restantes);
                restantes = checar(matrizProfissoes, profissoes4, m, p, restantes);
                restantes = checar(matrizProfissoes, profissoes5, m, p, restantes);
                restantes = checar(matrizProfissoes, profissoes6, m, p, restantes);
            }

            // imprime quantas palavras foram encontradas e quantas restam
            cout << "Voce encontrou " << 6 - restantes << " palavras" << endl;
            cout << "Restam " << restantes << " palavras" << endl;

        } while (restantes > 0);
    }

    cout << "Parabens, voce encontrou todas as palavras!" << endl;

    return 0;
}

// No trabalho não houve comentarios sobre os membros, pois o trabalho foi feito em conjunto usando o live share.
// Todos os membros do grupo participaram igualmente do trabalho, não houve
// nenhuma parte feita individualmente. Todos os membros estavam trabalhando juntos, em todo o codigo