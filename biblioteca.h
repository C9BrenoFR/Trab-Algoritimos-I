#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void imprimirmatriz(char matriz[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << matriz[i][j];
        }
        cout << endl;
    }
}

int checar(char matriz[10][10],char vetor[],int m,int p,int restantes)
{
    int tamanho = strlen(vetor);

    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = toupper(vetor[i]);
    }
    

    for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < p; j++)
                {
                    if (matriz[i][j] == vetor[0])
                    {
                        // checa horizontal
                        int cont = 0;
                        for (int k = 0; k < tamanho; k++)
                        {
                            if (matriz[i][j + k] == vetor[k])
                            {
                                cont++;
                            }
                        }
                        if (cont == tamanho)
                        {
                            cout << "A palavra " << vetor << " foi encontrada horizontalmente na linha " << i << " e coluna " << j << endl;
                            
                            restantes--;
                            return restantes;
                        }

                        // checa vertical
                        cont = 0;
                        for (int k = 0; k < tamanho; k++)
                        {
                            if (matriz[i + k][j] == vetor[k])
                            {
                                cont++;
                            }
                        }
                        if (cont == tamanho)
                        {
                            cout << "A palavra " << vetor << " foi encontrada verticalmente na linha " << i << " e coluna " << j << endl;
                           
                            restantes--;
                            return restantes;
                        }

                        // checa diagonal
                        cont = 0;
                        for (int k = 0; k < tamanho; k++)
                        {
                            if (matriz[i + k][j + k] == vetor[k])
                            {
                                cont++;
                            }
                        }
                        if (cont == tamanho)
                        {
                            cout << "A palavra " << vetor << " foi encontrada diagonalmente na linha " << i << " e coluna " << j << endl;
                         
                            restantes--;
                            return restantes;
                        }
                    }  
                }
            }
            cout << "A palavra " << vetor << " nao foi encontrada" << endl;
         
            return restantes;
}
