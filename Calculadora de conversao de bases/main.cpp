#include <iostream>

using namespace std;

int main()
{
    int digito;
    bool executa = true;
    int bin[8];

    while(executa){
        digito = 0;
        cout << "Calculadora BD e DB" << endl;
        cout << "Qual conversao voce deseja" << endl;
        cout << "1 = Decimal para Binario" << endl;
        cout << "2 = Binario para Decimal" << endl;
        cout << "0 = Para fechar o menu" << endl;
        cin >> digito;
        cout << "O valor digitado foi: " << digito << endl;
    if(digito == 1){
        int decimal;
        cout << "Voce selecionou a opcao Decimal para Binario" << endl;
        cout << "Digite o valor em Decimal" << endl;
        cin >> decimal;
        cout << "O valor " << decimal << endl;
        cout << "Em Binario e: " << endl;
        for(int i = 7; i >= 0; i--){
            if(decimal % 2 == 0){
                bin[i] = 0;
            }else{
                bin[i] = 1;
            }
            decimal = decimal / 2;
        }
        for(int i = 0; i < 8; i++){
                cout << bin[i];
        }
                cout << endl;

    }else{
        if(digito == 2){
         int binario;
         cout << "Voce selecionou a opcao Binario para Decimal" << endl;
         cout << "Digite o valor em Binario" << endl;
         cin >> binario;
         cout << "O valor em Decimal e: " << endl;
        }else{
            if(digito == 0){
                cout << "Saindo do programa" << endl;
                executa = false;
                exit;


            }else{
                cout << "Nao temos essa opcao no menu" << endl;

            }
        }

    }
    }
   return 0;
}
