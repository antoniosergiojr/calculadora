// exemplo de uma calculadora simples

#include <iostream>
#include <cmath>
using namespace std;

int main(){

      float x, y; // Numero ponto flutuante
      int op;     // Numero inteiro
      char Opr;   // caractere -> letra

      do
      {
            system("COLOR FC");
            cout << "\t\t\t==============******================" << endl;
            cout << "\t\t\tQual Operacao voce deseja realizar?: " << endl;
            cout << "\t\t\t==============******================" << endl
                 << endl
                 << endl;
            cout << "\t  (1) Adicao            \t(7)  Raiz Cubica" << endl
                 << endl;
            cout << "\t  (2) Subtracao         \t(8)  Hipotenusa" << endl
                 << endl;
            cout << "\t  (3) Multiplicacao     \t(9)  Seno" << endl
                 << endl;
            cout << "\t  (4) Divisao           \t(10) Co-seno" << endl
                 << endl;
            cout << "\t  (5) Potencia          \t(11) Tangente" << endl
                 << endl;
            cout << "\t  (6) Raiz Quadrada" << endl
                 << endl;
            cout << "\n Digite o numero correspondente a operacao a ser realizada: ";
            cin >> op;
            cout << endl;

            if (op >= 1 && op <= 5 || op == 8)
            {
                  cout << " .Digite um numero: ";
                  cin >> x;
                  cout << "\n .Digite outro numero: ";
                  cin >> y;
            }

            if (op >= 6 && op <= 7 || op >= 9 and op <= 11)
            {
                  cout << "\n .Digite um numero:";
                  cin >> x;
            }

            switch (op)
            {
            case 1:
                  system("COLOR F3");
                  cout << "\n Total: " << x + y << endl
                       << endl
                       << endl;
                  break;

            case 2:
                  system("COLOR F4");
                  cout << "\n Total: " << x - y << endl
                       << endl
                       << endl;
                  break;

            case 3:
                  system("COLOR F0");
                  cout << "\n Total: " << x * y << endl
                       << endl
                       << endl;
                  break;

            case 4:
                  system("COLOR F1");
                  cout << "\n Total: " << x / y << endl
                       << endl
                       << endl;
                  break;

            case 5:
                  system("COLOR F2");
                  cout << "\n O resultado de " << x << " elevado a potencia de " << y << " e de: " << pow(x, y) << endl
                       << endl
                       << endl;
                  break;

            case 6:
                  system("COLOR F9");
                  cout << "\n A raiz quadrada de " << x << " e: " << sqrt(x) << endl
                       << endl
                       << endl;
                  break;

            case 7:
                  system("COLOR 2F");
                  cout << "\n A raiz cubica de " << x << " e: " << cbrt(x) << endl
                       << endl
                       << endl;
                  break;

            case 8:
                  system("COLOR F6");
                  cout << "\n O valor da hipotenusa (Hip2=CA2+Co2) e de: " << hypot(x, y) << endl
                       << endl
                       << endl;
                  break;

            case 9:
                  system("COLOR E0");
                  cout << "\n O seno de " << x << " e: " << sin(x) << endl
                       << endl
                       << endl;
                  break;

            case 10:
                  system("COLOR 07");
                  cout << "\n O cos-seno de " << x << " e: " << cos(x) << endl
                       << endl
                       << endl;
                  break;

            case 11:
                  system("COLOR B0");
                  cout << "\n A tangente de " << x << " e: " << tan(x) << endl
                       << endl
                       << endl;
                  break;

            default:
                  cout << "\n TENTE NOVAMENTE .";
                  cout << " Opcao invalida!" << endl
                       << endl;
                  break;
            }

            system("PAUSE");
            system("cls");
            system("color 97");
            cout << "\n\n\t\t\t#**************************# ";
            cout << "\n\n\t\t\t Quer continuar 'S' ou 'N' ? ";
            cout << "\n\n\t\t\t#**************************# ";
            cout << "\n\n\t Sua opcao e --> ";
            cin >> Opr;
            system("cls");

      } while (Opr == 's' || Opr == 'S');
}
