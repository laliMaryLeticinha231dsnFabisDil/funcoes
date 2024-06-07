//#include <iostream>
//#include <locale>
//using namespace std;

//PARA SOMAR 
// 
//int soma(int a, int b);
	//essa função principal
//int main() {
//	int num1 = 5;
//	int num2 = 3;
//	int resultado = soma(5, 3);
//	cout << resultado;
//}
//int soma(int a, int b) {
//	return a + b;
//}

//void imprimeTexto ();
//int main() {
//	locale::global(locale("pt_BR.UTF-8"));
//	imprimeTexto();
//}
//void imprimeTexto() {
//	cout << "Essa funcao vazia, nao retorna nada";
//}


//int maior(int a, int b); //declarar função
//int main() { //bloco de código principal
//	locale::global(locale("pt_BR.UTF-8"));
//	int num1, num2;
//	cout << "Digite o primeiro número: ";
//	cin >> num1;
//	cout << "Digite o segundo número: ";
//	cin >> num2;
//	int resposta = maior(num1, num2);
//	cout << "O maior entre eles é" << resposta;
//}
//int maior(int a, int b) { //função
//	if (a > b) {
//		return a;
//	}
//	else {
//		return b;
//	}
//
//}






//      EXERCÍCIO 01


//#include <iostream>
//
//using namespace std;
//
//// Função que calcula o salário
//double calculaSalario(int horas, double valorPorHora) {
//    return horas * valorPorHora;
//}
//
//int main() {
//    int numeroFuncionario;
//    int horasTrabalhadas;
//    double valorPorHora;
//
//    // Leitura dos dados do funcionário
//    cout << "Digite o número do funcionário: ";
//    cin >> numeroFuncionario;
//
//    cout << "Digite o número de horas trabalhadas: ";
//    cin >> horasTrabalhadas;
//
//    cout << "Digite o valor que recebe por hora: ";
//    cin >> valorPorHora;
//
//    // Cálculo do salário utilizando a função calculaSalario
//    double salario = calculaSalario(horasTrabalhadas, valorPorHora);
//
//    // Exibição dos resultados
//    cout << "N funcionário: " << numeroFuncionario << "\n";
//    cout << "Salário: " << salario << "\n";
//
//    return 0;
//}



// EXERCÍCIO 2

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int quantidade1;
//    double valorUnitario1;
//
//    // Leitura dos dados do primeiro produto
//    cout <<  "Quantidade do Produto:";
//    cin >> quantidade1;
//
//    // Leitura dos dados do segundo produto
//    cout << "Valor do Produto:";
//    cin >> valorUnitario1;
//
//    // Cálculo do valor total a pagar
//    double valorAPagar = (quantidade1 * valorUnitario1);
//
//    // Exibição do resultado
//    cout << "VALOR A PAGAR: " << valorAPagar << "\n";
//
//    return 0;
//}


// EXERCÍCIO 3

#include <iostream>
#include <cmath> // Biblioteca para funções matemáticas

using namespace std;

int main() {
    locale::global(locale("pt_BR.UTF-8"));

    double A, B, C;

    // Leitura dos valores A, B e C
    cout << "Digite os valores de A, B e C: ";
    cin >> A >> B >> C;

    // Cálculo das áreas
    double areaTriangulo = (A * C) / 2.0;
    double areaCirculo = 3.14159 * C * C;
    double areaTrapezio = ((A + B) / 2.0) * C;
    double areaQuadrado = B * B;
    double areaRetangulo = A * B;

    // Exibição dos resultados
    cout << "Área do triângulo retângulo: " << areaTriangulo << "\n";
    cout << "Área do círculo: " << areaCirculo << "\n";
    cout << "Área do trapézio: " << areaTrapezio << "\n";
    cout << "Área do quadrado: " << areaQuadrado << "\n";
    cout << "Área do retângulo: " << areaRetangulo << "\n";

    return 0;
}