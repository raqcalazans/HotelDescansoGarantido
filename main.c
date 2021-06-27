#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"

// CLIENTE

void cadastrarCliente(Cliente *cliente){
    printf(" ====================================================\n");
    printf("                CADASTRO DE CLIENTE                  \n");
    printf(" ====================================================\n\n");
    puts("\nCódigo (sequencial e gerado automaticamente): ");
    for (int i = 0; i < 10; i++){
        printf("%d",rand() %10);
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

// ARRUMAR ISSO AQUI (QUARTOS)
void buscarCliente()
{
    char nome[10];
    puts("Informe o nome do cliente:");
    scanf("%s", &nome);

    //////////////////////////////////////

    FILE *arq;
    arq = fopen("clientes.txt", "r");

    printf("Informe o nome do cliente:\n");
    char cliente[20];
    scanf("%s", cliente);
    getchar();

    while (!feof(arq))
    {
        char nome[200] = "";
        fgets(nome, sizeof(nome), arq);
        int boolean = 0;
        for (int i = 0; i < strlen(cliente); i++)
        {
            if (cliente[i] != nome[i])
            {
                boolean = 1;
            }
        }
        if (boolean != 1)
        {
            char aux[] = ";";
            printf("O hóspede cadastrado no sistema é:\n");
            printf(" ");
            int i = 0;
            for (i = 0; i < strlen(nome); i++)
            {
                if (nome[i] == aux[0])
                {
                    printf("\n");
                }
                else
                {
                    printf("%c", nome[i]);
                }
            }
            char opcoes[] = "123";

            char hospedes = nome[strlen(nome) - 2];
            if (hospedes == opcoes[0] || hospedes == opcoes[1])
            {
                printf("                               Quarto duplo disponível                               ");
            }
            else if (hospedes == opcoes[2])
            {
                printf("                              Quarto triplo disponível                              ");
            }
            else
            {
                printf("                        Quarto quadruplo disponível                     ");
            }
            printf("\n\n");
        }
    }
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




    ///////////////////////////////////////////
    FILE *arq;
    arq = fopen("funcionarios.txt", "r");
    printf("Informe o nome do funcionario:\n");
    char funcionario[20];
    scanf("%s", funcionario);
    getchar();
    while (!feof(arq))
    {
        char nome[200] = "";
        fgets(nome, sizeof(nome), arq);
        int boolean = 0;
        for (int i = 0; i < strlen(funcionario); i++)
        {
            if (funcionario[i] != nome[i])
            {
                boolean = 1;
            }
        }
        if (boolean != 1)
        {
            char aux[] = ";";
            printf("\nO funcionario cadastrado no sistema é:\n");
            printf(" ");
            int i = 0;
            for (i = 0; i < strlen(nome); i++)
            {
                if (nome[i] == aux[0])
                {
                    printf("\n");
                }
                else
                {
                    printf("%c", nome[i]);
                }
            }
        }
    }
}

void cadastrarEstadia(Funcionario *funcionario)
{
    printf(" ====================================================\n");
    printf("                  CADASTRO DE ESTADIA                \n");
    printf(" ====================================================\n");



    char nome[20];
    puts("Informe o nome do cliente:");
    scanf("%s", nome);

    if()


    puts("\nCódigo (sequencial e gerado automaticamente): ");
    for (int i = 0; i < 10; i++){
        printf("%d",rand() %10);
    }
    fgets(funcionario->codigo, sizeof(funcionario->codigo), stdin);
    puts("Nome: ");
    fgets(funcionario->nome, sizeof(funcionario->nome), stdin);
    puts("Endereço: ");
    fgets(funcionario->endereco, sizeof(funcionario->endereco), stdin);
    puts("Telefone: ");
    fgets(funcionario->telefone, sizeof(funcionario->telefone), stdin);



    FILE *arq;
    arq = fopen("hospedagem.txt", "a");

    char nome[100];
    printf("\nNome do re: ");
    scanf("%s", nome);

    int totalHospedes;
    printf("total Hospedes: ");
    scanf("%d", &totalHospedes);

    int diaInicio;
    printf("Dia inicio: ");
    scanf("%d", &diaInicio);

    int mesInicio;
    printf("Mes inicio: ");
    scanf("%d", &mesInicio);

    int diaFim;
    printf("Dia fim: ");
    scanf("%d", &diaFim);

    int mesFim;
    printf("Mes fim: ");
    scanf("%d", &mesFim);

    fputs(nome, arq);
    fputs("; ", arq);

    fputs("Entrada: ", arq);
    fprintf(arq, "%i", diaInicio);
    fputs("/", arq);
    fprintf(arq, "%i", mesInicio);
    fputs("; ", arq);

    fputs("Saida: ", arq);
    fprintf(arq, "%i", diaFim);
    fputs("/", arq);
    fprintf(arq, "%i", mesFim);
    fputs("; ", arq);

    int dias = (diaFim - diaInicio) + (mesFim - mesInicio) * 30;
    fputs("Total de dias: ", arq);
    fprintf(arq, "%i", dias);
    fputs("; ", arq);

    fputs("Total de Hospedes: ", arq);
    fprintf(arq, "%i", totalHospedes);
    fputs("; ", arq);

                //vitor
    float mult, valorDiaria;
    // calcular valor total pago pelas estadias
    printf("Digite o valor de cada diária: ");
    scanf("%f", &valorDiaria);

    mult = dias * valorDiaria;
    fputs("Total da estadia: R$", arq);
    fprintf(arq, "%.2f", mult);
    fputs("\n", arq);
    fclose(arq);
}

void sair()
{
    return;
}

void buscarHospedagem(){}

void cadastrarQuarto(){}

void buscarQuarto(){}

void menu()
{
    int opt = 10;
    while (opt != 0)
    {
        printf("\nEscolha a opção: \n\n0-Sair, \n1-Cadastrar cliente, \n2-Buscar cliente \n3-Cadastrar funcionário \n4-Buscar funcionário \n5-Cadastrar estadia \n6-Buscar estadia \n7-Cadastrar quarto \n8-Buscar quarto\n");
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
            cadastrarHospedagem();
            break;
        case 6:
            buscarHospedagem();
            break;
        case 7:
            cadastrarQuarto();
            break;
        case 8:
            buscarQuarto();
            break;
        default:
            puts("Opção invalida. Escolha de 0 a 8.");
        }
        opt = 8;
    }
}

int main()
{
    printf("\n\n\t\t\t Hotel Descanso Garantido \n\n");
    menu();
    return 0;
}
