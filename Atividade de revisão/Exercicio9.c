#include <stdio.h>
#include <string.h>

struct Produto {
    int codigo;
    char descricao[100];
    float precoCompra;
    float precoVenda;
    int quantidadeEstoque;
    int estoqueMinimo;
};

struct Produto cadastrarProduto() {
    struct Produto produto;
    
    printf("\nDigite o codigo do produto: ");
    scanf("%d", &produto.codigo);
    getchar(); 
    
    printf("Digite a descriçao do produto: ");
    fgets(produto.descricao, sizeof(produto.descricao), stdin);
    produto.descricao[strcspn(produto.descricao, "\n")] = '\0';  
    printf("Digite o preço de compra: ");
    scanf("%f", &produto.precoCompra);

    printf("Digite o preço de venda: ");
    scanf("%f", &produto.precoVenda);

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &produto.quantidadeEstoque);

    printf("Digite o estoque minimo: ");
    scanf("%d", &produto.estoqueMinimo);

    return produto;
}

float calcularLucro(struct Produto produto) {
    return produto.precoVenda - produto.precoCompra;
}

float calcularPercentualLucro(struct Produto produto) {
    return (calcularLucro(produto) / produto.precoCompra) * 100;
}

int verificarEstoqueMinimo(struct Produto produto) {
    return produto.quantidadeEstoque < produto.estoqueMinimo;
}

int main() {
    struct Produto produtos[2]; 

  
    for (int i = 0; i < 2; i++) {
        printf("\nCadastro do produto %d:\n", i + 1);
        produtos[i] = cadastrarProduto();
    }
    
    for (int i = 0; i < 2; i++) {
        float lucro = calcularLucro(produtos[i]);
        float percentualLucro = calcularPercentualLucro(produtos[i]);

        printf("\nProduto: %s\n", produtos[i].descricao);
        printf("Lucro por unidade: R$ %.2f\n", lucro);
        printf("Percentual de lucro: %.2f%%\n", percentualLucro);
    }

    printf("\nProdutos com estoque abaixo do minimo:\n");
    for (int i = 0; i < 2; i++) {
        if (verificarEstoqueMinimo(produtos[i])) {
            printf("Produto: %s, Quantidade em estoque: %d, Estoque minimo: %d\n",
                   produtos[i].descricao, produtos[i].quantidadeEstoque, produtos[i].estoqueMinimo);
        }
    }

    return 0;
}
