#include <iostream>
#include <vector>

using namespace std;

// Definição da estrutura para armazenar informações de nome, matrícula e notas
struct Produto {
    
    string nome;
    int quantidade;
    double preco;
};

int main() {
    // Criação de uma lista de alunos para armazenar informações
    vector<Produto> listaProdutos;
    string nome;
    int quantidade;
    double preco;
    char continuar = 'S';
    int escolha = 0;

    while (continuar != 'N'){
        cout << "Lista de opções: " << endl;
        cout << "1 - Adicionar produto" << endl;
        cout << "2 - Atualizar estoque" << endl;
        cout << "3 - Calcular valor total" << endl;
        cout << "4 - Listar produtos" << endl;
        cout << "Sua opção: ";
        cin >> escolha;

        cout << endl;

        switch (escolha) {
            case 1:
                printf("Você escolheu a opção: 1 - Adicionar produto.\n");
                cout << "Nome: " << endl;
                cin >> nome;
                cout << "Quantidade: " << endl;
                cin >> quantidade;
                cout << "Preço: " << endl;
                cin >> preco;
                
                listaProdutos.push_back({nome, quantidade, preco});
                break;

            case 2:
                printf("Você escolheu a opção 2.\n");
                break;

            case 3:
                printf("Você escolheu a opção 3.\n");
                break;

            case 4:
                printf("Você escolheu a opção 4.\n");
                break;

            default:
                printf("Opção inválida. Por favor, escolha uma opção de 1 a 4.\n");
                break;
        }

        
        cout << "\nDeseja continuar? (S/N): ";
        cin >> continuar;

    }

    /*// Iterando pelo vetor de alunos e exibindo as informações
    for (const Aluno& aluno : listaAlunos) {
        double media = (aluno.nota[0] + aluno.nota[1] + aluno.nota[2]) / 3;

        cout << "\nMATRICULA NOTA1 NOTA2 NOTA3 MEDIA: " << endl;
        cout << "===========================================" << endl;
        cout << aluno.matricula << "   ";
        cout << aluno.nota[0] << "     ";
        cout << aluno.nota[1] << "     ";
        cout << aluno.nota[2] << "     ";
        cout << media << "   " << endl;


    }*/

    return 0;
}
