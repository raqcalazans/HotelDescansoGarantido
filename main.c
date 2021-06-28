#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"

// CLIENTE

void cadastrarCliente(Cliente *cliente){
    printf(" ====================================================\n");
    printf("                CADASTRO DE CLIENTE                  \n");
    printf(" ====================================================\n\n");
    puts("\nCódigo: ");
    for (int i = 0; i < 10; i++){
        printf("%d",rand() % 10);
    }
    fgets(cliente->codigo, sizeof(cliente->codigo), stdin);
    puts("Nome: ");
    fgets(cliente->nome, sizeof(cliente->nome), stdin);
    puts("Endereço: ");
    fgets(cliente->endereco, sizeof(cliente->endereco), stdin);
    puts("Telefone: ");
    fgets(cliente->telefone, sizeof(cliente->telefone), stdin);
}

void salvarCliente(Cliente cliente)
{
    FILE *arq;
    arq = fopen("Cliente.db", "ab");
    fwrite(&cliente, sizeof(cliente), 1, arq);
    fclose(arq);
}

void carregarCliente(int a, Cliente *cliente)
{
    FILE *arq;
    arq = fopen("Cliente.db", "rb");
    fseek(arq, sizeof(Cliente) * a, SEEK_SET);
    fread(cliente, sizeof(Cliente), 1, arq);
    fclose(arq);
}

void printCliente(Cliente cliente)
{
    printf("Código: %i\n", cliente.codigo);
    printf("Nome: %s\n", cliente.nome);
    printf("Endereço: %s\n", cliente.endereco);
    printf("Telefone: %s\n", cliente.telefone);
}

// ARRUMAR ISSO AQUI, NÃO SOUBEMOS CONSULTAR OS ARQUIVOS
Cliente buscarCliente()
{
    char nome[20];
    puts("Informe o nome do cliente:");
    scanf("%s", nome);

    Cliente cliente;

    FILE *arq;
    arq = fopen("Cliente.db", "rb");

    //fscanf(arq, “%i”, &a);

    for(int i = 0; i <= sizeof(arq); i++) {
        if(cliente.nome == nome) {
            return cliente;
        } else {
            puts("Cliente não encontrado");
            return;
        }
    }

    ///////////ANTES DE USAR SCRUCT ESTÁVAMOS FAZENDO ASSIM//////////

    //FILE *arq;
    //arq = fopen("clientes.txt", "r");

    //printf("Informe o nome do cliente:\n");
    //char cliente[20];
    //scanf("%s", cliente);
    //getchar();

    //while (!feof(arq))
    //{
    //    char nome[200] = "";
    //    fgets(nome, sizeof(nome), arq);
    //    int boolean = 0;
    //    for (int i = 0; i < strlen(cliente); i++)
    //    {
    //        if (cliente[i] != nome[i])
    //        {
    //            boolean = 1;
    //        }
    //    }
    //    if (boolean != 1)
    //    {
    //        char aux[] = ";";
    //        printf("O hóspede cadastrado no sistema é:\n");
    //        printf(" ");
    //        int i = 0;
    //        for (i = 0; i < strlen(nome); i++)
    //        {
    //            if (nome[i] == aux[0])
    //            {
    //                printf("\n");
    //            }
    //            else
    //            {
    //                printf("%c", nome[i]);
    //            }
    //        }
    //        char opcoes[] = "123";
    //
    //        char hospedes = nome[strlen(nome) - 2];
    //        if (hospedes == opcoes[0] || hospedes == opcoes[1])
    //        {
    //            printf("                               Quarto duplo disponível                               ");
    //        }
    //        else if (hospedes == opcoes[2])
    //        {
    //            printf("                              Quarto triplo disponível                              ");
    //        }
    //        else
    //        {
    //            printf("                        Quarto quadruplo disponível                     ");
    //        }
    //        printf("\n\n");
    //    }
    //}
}

// FUNCIONÁRIO

void cadastrarFuncionario(Funcionario *funcionario)
{
    printf(" ====================================================\n");
    printf("                CADASTRO DE FUNCIONÁRIO               \n");
    printf(" ====================================================\n\n");
    puts("\nCódigo (sequencial e gerado automaticamente): ");
    for (int i = 0; i < 10; i++){
        printf("%d",rand() %10);
    }
    fgets(cliente->codigo, sizeof(cliente->codigo), stdin);
    puts("Nome: ");
    fgets(funcionario->nome, sizeof(funcionario->nome), stdin);
    puts("Endereço: ");
    fgets(funcionario->endereco, sizeof(funcionario->endereco), stdin);
    puts("Telefone: ");
    fgets(funcionario->telefone, sizeof(funcionario->telefone), stdin);
}

void salvarFuncionario(Funcionario funcionario)
{
    FILE *arq;
    arq = fopen("Funcionario.db", "ab");
    fwrite(&funcionario, sizeof(funcionario), 1, arq);
    fclose(arq);
}

void carregarFuncionario(int a, Funcionario *funcionario)
{
    FILE *arq;
    arq = fopen("Funcionario.db", "rb");
    fseek(arq, sizeof(Funcionario) * a, SEEK_SET);
    fread(funcionario, sizeof(Funcionario), 1, arq);
    fclose(arq);
}

void printFuncionario(Funcionario funcionario)
{
    printf("Código: %d\n", funcionario.codigo);
    printf("Nome: %s\n", funcionario.nome);
    printf("Telefone: %i\n", funcionario.telefone);
    printf("Cargo: %s\n", funcionario.cargo);
    printf("Salário: %f\n", funcionario.salario);
}

void buscarFuncionario()
{
    ///////////ANTES DE USAR SCRUCT ESTÁVAMOS FAZENDO ASSIM//////////
    //FILE *arq;
    //arq = fopen("funcionarios.txt", "r");
    //printf("Informe o nome do funcionario:\n");
    //char funcionario[20];
    //scanf("%s", funcionario);
    //getchar();
    //while (!feof(arq))
    //{
    //    char nome[200] = "";
    //    fgets(nome, sizeof(nome), arq);
    //    int boolean = 0;
    //    for (int i = 0; i < strlen(funcionario); i++)
    //    {
    //        if (funcionario[i] != nome[i])
    //        {
    //            boolean = 1;
    //        }
    //    }
    //    if (boolean != 1)
    //    {
    //        char aux[] = ";";
    //        printf("\nO funcionario cadastrado no sistema é:\n");
    //        printf(" ");
    //        int i = 0;
    //        for (i = 0; i < strlen(nome); i++)
    //        {
    //            if (nome[i] == aux[0])
    //            {
    //                printf("\n");
    //            }
    //            else
    //            {
    //                printf("%c", nome[i]);
    //            }
    //        }
    //    }
    //}
}

void cadastrarEstadia(Estadia *estadia)
{
    printf(" ====================================================\n");
    printf("                  CADASTRO DE ESTADIA                \n");
    printf(" ====================================================\n");

    Cliente cliente;
    cliente = buscarCliente();

    puts("\nCódigo da estadia: ");
    for (int i = 0; i < 10; i++){
        printf("%d",rand() %10);
    }
    fgets(estadia->codigo, sizeof(estadia->codigo), stdin);
    puts("Dia de entrada: ");
    fgets(estadia->diaEntrada, sizeof(funcionario->diaEntrada), stdin);
    puts("Mês de entrada: ");
    fgets(estadia->mesEntrada, sizeof(estadia->mesEntrada), stdin);
    puts("Dia de saída: ");
    fgets(estadia->diaSaida, sizeof(estadia->diaSaida), stdin);
    puts("Mês de saida: ");
    fgets(estadia->mesSaida, sizeof(estadia->mesSaida), stdin);
    puts("Quantidade de diárias: ");
    printf("%i", (estadia.diaSaida - estadia.diaInicio) + (estadia.mesSaida - estadia.mesEntrada) * 30));
    fgets(estadia->quantidadeDiarias, sizeof(estadia->quantidadeDiarias), stdin);
    char nome[20];
    puts("Qual o nome do cliente?");
    scanf("%s", nome);

    puts("Código do cliente: ");
    print("%i", cliente.codigo);
    fgets(estadia->codigoCliente, sizeof(estadia->codigoCliente), stdin);
    puts("Quantidade de hóspedes:");
    fgets(estadia->quantidadeHospedes, sifeof(estadia->quantidadeHospedes), stdin);
    puts("Número do quarto: ");
    printf();
    fgets(estadia->telefone, sizeof(estadia->telefone), stdin);
}

void salvarEstadia(Estadia estadia)
{
    FILE *arq;
    arq = fopen("Estadia.db", "ab");
    fwrite(&estadia, sizeof(estadia), 1, arq);
    fclose(arq);
}

void carregarEstadia(int a, Estadia *estadia)
{
    FILE *arq;
    arq = fopen("Estadia.db", "rb");
    fseek(arq, sizeof(Estadia) * a, SEEK_SET);
    fread(estadia, sizeof(Estadia), 1, arq);
    fclose(arq);
}

void printEstadia(Estadia estadia)
{
    printf("Código da estadia: %d\n", estadia.codigo);
    printf("Data de entrada: %i/%i\n", estadia.diaEntrada, estadia.mesEntrada);
    printf("Data de saída: %i/%i\n", estadia.diaSaida, estadia.mesSaida);
    printf("Quantidade de diárias: %i\n", estadia.quantidadeDiarias);
    printf("Código do cliente: %f\n", estadia.codigoCliente);
    printf("Número do quarto: %f\n", estadia.numeroQuarto);
}

void cadastrarQuarto(Quarto *quarto)
{
    printf(" ====================================================\n");
    printf("                  CADASTRO DE QUARTO                 \n");
    printf(" ====================================================\n");

    puts("\nNúmero do quarto: ");
    fgets(quarto->numeroQuarto, sizeof(quarto->numeroQuarto), stdin);
    puts("Quantidade de hóspedes que comporta: ");
    fgets(quarto->quantidadeHospedes, sizeof(quarto->quantidadeHospedes), stdin);
    puts("Valor da diária: ");
    fgets(quarto->valorDiaria, sizeof(quarto->valorDiaria), stdin);
    puts("Status (0 = desocupado, 1 = ocupado): ");
    fgets(quarto->status, sizeof(quarto->status), stdin);
}

float fecharEstadia()
{
    char nome[20];
    puts("Qual o nome do cliente:");
    scanf("%s", nome);

    float totalEstadia, valorDiaria;

    printf("Digite o valor de cada diária: ");
    scanf("%f", &valorDiaria);

    totalEstadia = estadia.quantidadeDiarias * valorDiaria;
    printf("Total da estadia: R$%.2f", &totalEstadia);
}

void sair()
{
    return;
}

void menu()
{
    int opt = 10;
    while (opt != 0)
    {
        printf("\nEscolha a opção: \n\n0-Sair, \n1-Cadastrar cliente, \n2-Buscar cliente \n3-Cadastrar funcionário \n4-Buscar funcionário \n5-Cadastrar estadia \n6-Cadastrar quarto \n7-Fechar uma estadia");
        scanf("%d", &opt);
        getchar();
        switch (opt)
        {
        case 0:
            sair();
            break;
        case 1:
            Cliente c1;
            cadastrarCliente(c1);
            break;
        case 2:
            buscarCliente();
            break;
        case 3:
            cadastrarFuncionario();
            break;
        case 4:
            buscarFuncionario();
            break;
        case 5:
            cadastrarQuarto();
            break;
        case 6:
            fecharEstadia();
            break;
        case 7:
            fecharEstadia();
        default:
            puts("Opção invalida. Escolha de 0 a 7.");
        }
        opt = 7;
    }
}

int main()
{
    printf("\n\n\t\t Hotel Descanso Garantido \n\n");
    menu();
    return 0;
}
