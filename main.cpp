#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    // Entrada
    string nomes[20];
    int qtdAlunos;
    float notas[20][4];
    float media[20];
    int qtdDisciplina;
    int opcaoinicial;

    // Processamento

    // LEITURA DE ALUNOS (Commit 1)
    cout << "=== SISTEMA DE NOTAS v4.0 ===" << endl;
    cout << "1 - Novo relátorio" << endl;
    cout << "2 - Ver relatório" << endl;
    cout << "escolha uma opção:" << endl;
    cin >> opcaoinicial;

    //LEITURA DE ARQUIVO (Commit 5)
    if (opcaoinicial == 2)
    {
        ifstream arquivo("relatorio.txt");
        if (arquivo.is_open())
        {
            string linha;
            cout << "\n";
            while (getline(arquivo, linha))
            {
                cout << linha << endl;
            }
            arquivo.close();
        }
        else
        {
            cout << "Erro ao abrir o arquivo." << endl;
        }
        return 0;
    }


    do
    {
        cout << "Quantidade de alunos (1 a 20): ";
        cin >> qtdAlunos;
    } while (qtdAlunos < 1 || qtdAlunos > 20);

    cin.ignore();

    for (int i = 0; i < qtdAlunos; i++)
    {
        cout << "Digite o nome do aluno " << (i + 1) << ": ";
        getline(cin, nomes[i]);
    }

    do
    {
        cout << "Quantidade de disciplinas (1 a 4): ";
        cin >> qtdDisciplina;
    } while (qtdDisciplina < 1 || qtdDisciplina > 4);

    for (int i = 0; i < qtdAlunos; i++)
    {
        cout << "Notas do aluno " << nomes[i] << ":" << endl;
        for (int j = 0; j < qtdDisciplina; j++)
        {
            cout << "Disciplina " << (j + 1) << ": ";
            cin >> notas[i][j];
            while (notas[i][j] < 0 || notas[i][j] > 10)
            {
                cout << "Nota inválida. Digite novamente: ";
                cin >> notas[i][j];
            }
        }
    }

    for (int i = 0; i < qtdAlunos; i++)
    {
        float soma = 0;
        for (int j = 0; j < qtdDisciplina; j++)
        {
            soma += notas[i][j];
        }
        media[i] = soma / qtdDisciplina;
    }

    // Saída
    cout << "\nAlunos cadastrados:" << endl;
    for (int i = 0; i < qtdAlunos; i++)
    {
        cout << (i + 1) << ". " << nomes[i] << endl;
    }

    cout << "\n=== RELAÓRIO === " << endl;
    int aprovados = 0;
    for (int i = 0; i < qtdAlunos; i++)
    {
        cout << "Aluno: " << nomes[i] << endl;
        cout << "Média: " << media[i] << endl;
        if (media[i] >= 6)
        {
            cout << "Situação: Aprovado" << endl;
            aprovados++;
        }
        else
        {
            cout << "Erro em criar o arquivo." << endl;
            cout << "Situação: Reprovado" << endl;
        }
        cout << "-------------------" << endl;
    }

    cout << "\nTotal de alunos aprovados: " << aprovados << endl;

    cout << "\n=== FIM DO PROGRAMA ===" << endl;

    ofstream arquivo("relatorio.txt");

    if (arquivo.is_open())
    {
        arquivo << "=== RELATÓRIO ===" << endl;
        for (int i = 0; i < qtdAlunos; i++)
        {
            arquivo << "Aluno: " << nomes[i] << endl;
            arquivo << "Média: " << media[i] << endl;
            if (media[i] >= 6)
            {
                arquivo << "Situação: Aprovado" << endl;
            }
            else
            {
                arquivo << "Situação: Reprovado" << endl;
            }
            arquivo << "-------------------" << endl;
        }
        arquivo.close();
        cout << "Relatório salvo em 'relatorio.txt'." << endl;
    }

    return 0;
}
