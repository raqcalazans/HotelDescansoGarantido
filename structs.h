typedef struct Cliente
{
    int codigo;
    char nome[50];
    char endereco[200];
    char telefone[15];

} Cliente;

typedef struct Funcionario
{
    int codigo;
    char nome[50];
    int telefone;
    char cargo[20];
    float salario;
    
} Funcionario;

typedef struct Estadia
{
    int codigo;
    int diaEntrada;
    int mesEntrada;
    int diaSaida;
    int mesSaida;
    
} Estadia;

typedef struct Quarto
{

} Quarto;