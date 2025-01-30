#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <list>

using namespace std;

struct Produto {
    string nome;
    int quantidade;
    double price;
};

void addProduto(list<Produto>& compras);
void reProduto(list<Produto>& compras);
void exCarrinho(list<Produto>& compras);
void totalCarrinho(list<Produto>& compras);
void cleanCarrinho(list<Produto>& compras);

int main() {

    bool loop = true;
    int opMenu;
    list<Produto> compras; // uma lista de struct

    do {
        system("cls");
        
        cout << "Bem vindo ao sistema de compras! Escolha uma opcao:" << "\n1. Adicionar Produto\n2. Remover Produto\n3. Exibir carrinho"
             << "\n4. Calcular total da compra\n5. Limpar carrinho\n6. Sair"
             << "\n\nDigite sua escolha: ";
        cin >> opMenu;

        if(opMenu == 1) {
            system("cls");
            addProduto(compras);
            loop = true;
        } else if(opMenu == 2) {
            system("cls");
            if(compras.empty()) {
                cout << "Carrinho Vazio :(\n";
                system("pause");
            } else {
                reProduto(compras);
            }
            loop = true;
        } else if(opMenu == 3) {
            system("cls");
            if(compras.empty()) {
                cout << "Carrinho Vazio :(\n";
                system("pause");
            } else {
                exCarrinho(compras);
            }
            loop = true;
        } else if(opMenu == 4) {
            system("cls");
            if(compras.empty()) {
                cout << "Carrinho Vazio :(\n";
                system("pause");
            } else {
                totalCarrinho(compras);
            }
            loop = true;
        } else if(opMenu == 5) {
            system("cls");
            if(compras.empty()) {
                cout << "Carrinho Vazio :(\n";
                system("pause");
            } else {
                cleanCarrinho(compras);
            }
            loop = true;
        } else if(opMenu == 6) {
            system("cls");
            loop = false;
        } else {
            system("cls");
            cout << "Valor digitado invalido!" << endl;
            system("pause");
            loop = true;
        }
    } while(loop);

    cout << "Saindo do sistema. Obrigado por usar o carrinho de compras!" << endl;
    system("pause");

    return 0;
}

void addProduto(list<Produto>& compras) {
    Produto p;
    cout << "Nome do produto: ";
    cin >> p.nome;
    cout << "Quantidade: ";
    cin >> p.quantidade;
    cout << "Preco unitario: ";
    cin >> p.price;

    compras.push_back(p);

    cout << "\nProduto " << p.nome << " adicionado ao carrinho\n";
    system("pause");
}

void reProduto(list<Produto>& compras) {
    string reNome;
    auto it = compras.begin();
    int tam = compras.size();
    int aux = -1;

    cout << "Nome do produto a remover: ";
    cin >> reNome;

    for(int i = 0; i < tam; i++) {
        if(reNome == it->nome) {
            aux = i;
            break;
        } else {
            ++it;
        }
    }
    
    if(aux > -1) {
        compras.erase(it);
        cout << "Produto " << reNome << " removido do carrinho.\n";
    } else {
        cout << "Produto nao encontrado\n";
    }
    system("pause");
}

void exCarrinho(list<Produto>& compras) {
    int tam = compras.size();
    auto it = compras.begin();
    cout << "Produtos no carrinho:\n";
    
    for(int i = 0; i < tam; i++) {
        cout << i+1 << ". " << it->nome << " | Quantidade: " << it->quantidade << " | Preco Un: R$ " << it->price << " | Total: R$ " << (it->price) * (it->quantidade) << "\n";
        ++it;
    }
    system("pause");
}

void totalCarrinho(list<Produto>& compras) {
    double total = 0;
    int tam = compras.size();
    auto it = compras.begin();

    for(int i = 0; i < tam; i++) {
        total = total + (it->price * it->quantidade);
        ++it;
    }

    cout << "Total da compra: R$ " << total << endl;
    system("pause");
}

void cleanCarrinho(list<Produto>& compras) {
    while(!compras.empty()) {
        compras.pop_back();
    }

    cout << "Carrinho Esvaziado" << endl;
    system("pause");
}