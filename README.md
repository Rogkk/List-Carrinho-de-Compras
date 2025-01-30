# Carrinho de Compras em C++

Este projeto implementa um sistema de carrinho de compras em C++ utilizando a biblioteca `<list>`, permitindo ao usuário adicionar, remover e visualizar produtos no carrinho, além de calcular o total da compra e esvaziar o carrinho.

## Funcionalidades

- **Adicionar Produto**: O usuário pode adicionar um produto informando nome, quantidade e preço unitário.
- **Remover Produto**: Permite remover um item do carrinho informando o nome do produto.
- **Exibir Carrinho**: Lista todos os produtos adicionados com suas quantidades, preços unitários e totais.
- **Calcular Total**: Exibe o valor total da compra somando os valores dos produtos no carrinho.
- **Limpar Carrinho**: Esvazia completamente o carrinho de compras.
- **Sair**: Finaliza o programa.

## Como Executar

### Compilação
Caso o arquivo executável não esteja presente, compile o código utilizando um compilador C++:
```sh
 g++ shoppcart.cpp -o shoppcart
```

### Execução
Após compilar, execute o programa:
```sh
 ./shoppcart
```

## Interface do Usuário
Ao iniciar o programa, o usuário verá o seguinte menu:
```
Bem vindo ao sistema de compras! Escolha uma opcao:
1. Adicionar Produto
2. Remover Produto
3. Exibir carrinho
4. Calcular total da compra
5. Limpar carrinho
6. Sair
```
O programa exibe opções claras para o gerenciamento da lista, permitindo uma navegação intuitiva.

## Estrutura do Código

O código usa uma estrutura `Produto` para armazenar as informações do produto e uma `list<Produto>` para armazenar os itens no carrinho. As principais funções implementadas são:
- `addProduto()`: Adiciona um novo item ao carrinho.
- `reProduto()`: Remove um produto pelo nome.
- `exCarrinho()`: Exibe os produtos do carrinho.
- `totalCarrinho()`: Calcula e exibe o total da compra.
- `cleanCarrinho()`: Esvazia a lista de compras.

## Estrutura do Projeto

- **shoppcart.cpp**: Contém o código fonte do programa.
- **README.md**: Este arquivo explicativo.
- **shoppcart.exe**: (Opcional) Executável do programa.

Com este projeto, podemos entender conceitos de estrutura de dados como listas e sua aplicação em sistemas do mundo real, como o atendimento bancário. Divirta-se explorando e aprimorando o código!
Como desafio, experimente implementar a funcionalidade de atualizar a quantidade de um produto sem removê-lo e envie suas melhorias para o e-mail rogerioweel@gmail.com. Ficarei feliz em ver suas contribuições!
