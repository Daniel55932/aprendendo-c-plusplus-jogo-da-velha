#include <iostream>
#include <locale.h>
#include <windows.h>

#include <ctime>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("Color E0");
    cout << "******************************" << endl;
    cout << "* Bem vindo ao jogo da velha *" << endl;
    cout << "******************************" << endl;
    string Seletor, Seletor1, Peca1, Peca2, Jogador1, Jogador2, Posicao1, Posicao2, N1, N2, Matriz [3][3]{"A", "B", "C", "D" , "E", "F", "G", "H", "I"};
    int Aleatorio, Select = 0, Menor = 1, Maior = 50, Cont = 0, Cont1 = 0, Cont2 = 0;
    cout << "1 para ir direto para o jogo, 2 para ver tutorial" << endl;
    cin >> Seletor;
    if (Seletor == "2"){
        cout << "Tutorial" << endl;
        cout << "1� Escolha a letra na tabela\n2� Se escolher uma letra j� mercada perdeu a vez \n3� Se escolher uma letra que n�o tenha na tabela perdeu a vez\n" << endl;
        cout << "1 para ir direto para o jogo, 2 sair" << endl;
        cin >> Seletor;
    }
    if(Seletor == "1")
    {
        cout << "Digite o nome do jogor 1� jogador" << endl;
        cin >> Jogador1;
        cout << "Digite o nome do jogor 2� jogador" << endl;
        cin >> Jogador2;
        srand((unsigned)time(0));
        Aleatorio = rand()%(Maior-Menor+1) + Menor;
        if(Aleatorio > 25){
            cout << Jogador2 << " come�a," ;
            N1 = Jogador1;
            N2 = Jogador2;
            Jogador2 = N1;
            Jogador1 = N2;
        }else{
            cout << Jogador1 << " come�a," ;
        }
        Maior = 100;
        Menor = 50;
        srand((unsigned)time(0));
        Aleatorio = rand()%(Maior-Menor+1) + Menor;
        if(Aleatorio > 75){
            Peca1 = "O";
            Peca2 = "X";
        }else{
            Peca1 = "X";
            Peca2 = "O";
        }
        cout << " voc� vai jogar com a pe�a " << Peca1 << endl;
        cout << Jogador2 << " voc� vai jogar com a pe�a " << Peca2 << endl;
        do{
            Cont ++;
            cout << "                                  " << Matriz[0][0] << "  -  " << Matriz[0][1] << "  -  " << Matriz[0][2] << endl;
            cout << "                                 ----+-----+----" << endl;
            cout << "                                  " << Matriz[1][0] << "  -  " << Matriz[1][1] << "  -  " << Matriz[1][2] << endl;
            cout << "                                 ----+-----+----" << endl;
            cout << "                                  " << Matriz[2][0] << "  -  " << Matriz[2][1] << "  -  " << Matriz[2][2] << endl;
            if((Cont == 1) || (Cont == 3) || (Cont == 5) || (Cont == 7) || (Cont == 9) || (Cont == 11) || (Cont == 13) || (Cont == 15)){
                cout << "Escolha a letra " << Jogador1 << endl;
                cin >> Seletor1;
            }else if((Cont == 2) || (Cont == 4) || (Cont == 6) || (Cont == 8) || (Cont == 10) || (Cont == 12) || (Cont == 14) || (Cont == 16)){
                    cout << "Escolha a letra " << Jogador2 << endl;
                    cin >> Seletor1;
            }
            if(Seletor1 == "a"){
                if((Matriz[0][0] == "O") || (Matriz[0][0] == "X")){
                    cout << "Essa posi��o j� foi marcado, perdeu a vez !" << endl;
                    Select ++;
                }else{
                    if((Cont == 1) || (Cont == 3) || (Cont == 5) || (Cont == 7) || (Cont == 9) || (Cont == 11) || (Cont == 13) || (Cont == 15)){
                        Matriz[0][0] = Peca1;
                    }else if((Cont == 2) || (Cont == 4) || (Cont == 6) || (Cont == 8) || (Cont == 10) || (Cont == 12) || (Cont == 14) || (Cont == 16)){
                            Matriz[0][0] = Peca2;
                    }
                }
            }else if(Seletor1 == "b"){
                if((Matriz[0][1] == "O") || (Matriz[0][1] == "X")){
                    cout << "Essa posi��o j� foi marcado, perdeu a vez !" << endl;
                    Select ++;
                }else{
                    if((Cont == 1) || (Cont == 3) || (Cont == 5) || (Cont == 7) || (Cont == 9) || (Cont == 11) || (Cont == 13) || (Cont == 15)){
                        Matriz[0][1] = Peca1;
                    }else if((Cont == 2) || (Cont == 4) || (Cont == 6) || (Cont == 8) || (Cont == 10) || (Cont == 12) || (Cont == 14) || (Cont == 16)){
                        Matriz[0][1] = Peca2;
                    }
                }
            }else if(Seletor1 == "c"){
                if((Matriz[0][2] == "O") || (Matriz[0][2] == "X")){
                    cout << "Essa posi��o j� foi marcado, perdeu a vez !" << endl;
                    Select ++;
                }else{
                    if((Cont == 1) || (Cont == 3) || (Cont == 5) || (Cont == 7) || (Cont == 9) || (Cont == 11) || (Cont == 13) || (Cont == 15)){
                        Matriz[0][2] = Peca1;
                    }else if((Cont == 2) || (Cont == 4) || (Cont == 6) || (Cont == 8) || (Cont == 10) || (Cont == 12) || (Cont == 14) || (Cont == 16)){
                        Matriz[0][2] = Peca2;
                    }
                }
            }else if(Seletor1 == "d"){
                if((Matriz[1][0] == "O") || (Matriz[1][0] == "X")){
                    cout << "Essa posi��o j� foi marcado, perdeu a vez !" << endl;
                    Select ++;
                }else{
                    if((Cont == 1) || (Cont == 3) || (Cont == 5) || (Cont == 7) || (Cont == 9) || (Cont == 11) || (Cont == 13) || (Cont == 15)){
                        Matriz[1][0] = Peca1;
                    }else if((Cont == 2) || (Cont == 4) || (Cont == 6) || (Cont == 8) || (Cont == 10) || (Cont == 12) || (Cont == 14) || (Cont == 16)){
                        Matriz[1][0] = Peca2;
                    }
                }
            }else if(Seletor1 == "e"){
                if((Matriz[1][1] == "O") || (Matriz[1][1] == "X")){
                    cout << "Essa posi��o j� foi marcado, perdeu a vez !" << endl;
                    Select ++;
                }else{
                    if((Cont == 1) || (Cont == 3) || (Cont == 5) || (Cont == 7) || (Cont == 9) || (Cont == 11) || (Cont == 13) || (Cont == 15)){
                        Matriz[1][1] = Peca1;
                    }else if((Cont == 2) || (Cont == 4) || (Cont == 6) || (Cont == 8) || (Cont == 10) || (Cont == 12) || (Cont == 14) || (Cont == 16)){
                        Matriz[1][1] = Peca2;
                    }
                }
            }else if(Seletor1 == "f"){
                if((Matriz[1][2] == "O") || (Matriz[1][2] == "X")){
                    cout << "Essa posi��o j� foi marcado, perdeu a vez !" << endl;
                    Select ++;
                }else{
                    if((Cont == 1) || (Cont == 3) || (Cont == 5) || (Cont == 7) || (Cont == 9) || (Cont == 11) || (Cont == 13) || (Cont == 15)){
                        Matriz[1][2] = Peca1;
                    }else if((Cont == 2) || (Cont == 4) || (Cont == 6) || (Cont == 8) || (Cont == 10) || (Cont == 12) || (Cont == 14) || (Cont == 16)){
                        Matriz[1][2] = Peca2;
                    }
                }
            }else if(Seletor1 == "g"){
                if((Matriz[2][0] == "O") || (Matriz[2][0] == "X")){
                    cout << "Essa posi��o j� foi marcado, perdeu a vez !" << endl;
                    Select ++;
                }else{
                    if((Cont == 1) || (Cont == 3) || (Cont == 5) || (Cont == 7) || (Cont == 9) || (Cont == 11) || (Cont == 13) || (Cont == 15)){
                        Matriz[2][0] = Peca1;
                    }else if((Cont == 2) || (Cont == 4) || (Cont == 6) || (Cont == 8) || (Cont == 10) || (Cont == 12) || (Cont == 14) || (Cont == 16)){
                        Matriz[2][0] = Peca2;
                    }
                }
            }else if(Seletor1 == "h"){
                if((Matriz[2][1] == "O") || (Matriz[2][1] == "X")){
                    cout << "Essa posi��o j� foi marcado, perdeu a vez !" << endl;
                    Select ++;
                }else{
                    if((Cont == 1) || (Cont == 3) || (Cont == 5) || (Cont == 7) || (Cont == 9) || (Cont == 11) || (Cont == 13) || (Cont == 15)){
                        Matriz[2][1] = Peca1;
                    }else if((Cont == 2) || (Cont == 4) || (Cont == 6) || (Cont == 8) || (Cont == 10) || (Cont == 12) || (Cont == 14) || (Cont == 16)){
                        Matriz[2][1] = Peca2;
                    }
                }
            }else if(Seletor1 == "i"){
                if((Matriz[2][2] == "O") || (Matriz[2][2] == "X")){
                    cout << "Essa posi��o j� foi marcado, perdeu a vez !" << endl;
                    Select ++;
                }else{
                    if((Cont == 1) || (Cont == 3) || (Cont == 5) || (Cont == 7) || (Cont == 9) || (Cont == 11) || (Cont == 13) || (Cont == 15)){
                        Matriz[2][2] = Peca1;
                    }else if((Cont == 2) || (Cont == 4) || (Cont == 6) || (Cont == 8) || (Cont == 10) || (Cont == 12) || (Cont == 14) || (Cont == 16)){
                        Matriz[2][2] = Peca2;
                    }
                }
            }else{
                cout << "N�o tem " << Seletor1 << " na tabela, perdeu a ver !" << endl;
            }
            if((Matriz[0][0] == Matriz[0][1]) && (Matriz[0][1] == Matriz[0][2]) && (Matriz[0][2] == Matriz[0][0]) ||
               (Matriz[1][0] == Matriz[1][1]) && (Matriz[1][1] == Matriz[1][2]) && (Matriz[1][2] == Matriz[1][0]) ||
               (Matriz[2][0] == Matriz[2][1]) && (Matriz[2][1] == Matriz[2][2]) && (Matriz[2][2] == Matriz[2][0]) ||
               (Matriz[0][0] == Matriz[1][0]) && (Matriz[1][0] == Matriz[2][0]) && (Matriz[2][0] == Matriz[0][0]) ||
               (Matriz[0][1] == Matriz[1][1]) && (Matriz[1][1] == Matriz[2][1]) && (Matriz[2][1] == Matriz[0][1]) ||
               (Matriz[0][2] == Matriz[1][2]) && (Matriz[1][2] == Matriz[2][2]) && (Matriz[2][2] == Matriz[0][2]) ||
               (Matriz[0][0] == Matriz[1][1]) && (Matriz[1][1] == Matriz[2][2]) && (Matriz[2][2] == Matriz[1][1]) ||
               (Matriz[2][0] == Matriz[1][1]) && (Matriz[1][1] == Matriz[0][2]) && (Matriz[0][2] == Matriz[2][0])){
                cout << "                                ################### " << endl;
                cout << "                                #  " << Matriz[0][0] << "  -  " << Matriz[0][1] << "  -  " << Matriz[0][2] << "  # " << endl;
                cout << "                                # ----+-----+---- # " << endl;
                cout << "                                #  " << Matriz[1][0] << "  -  " << Matriz[1][1] << "  -  " << Matriz[1][2] << "  # " << endl;
                cout << "                                # ----+-----+---- # " << endl;
                cout << "                                #  " << Matriz[2][0] << "  -  " << Matriz[2][1] << "  -  " << Matriz[2][2] << "  # " << endl;
                cout << "                                ################### " << endl;
                if((Cont == 1) || (Cont == 3) || (Cont == 5) || (Cont == 7) || (Cont == 9) || (Cont == 11) || (Cont == 13) || (Cont == 15)){
                    Cont1 ++;
                    cout << Jogador1 << " Ganhou " << endl;
                    cout << "Placar" << endl;
                    cout << Jogador1 << " t� com " << Cont1 << " e " << Jogador2 << " t� com " << Cont2 << endl;
                }else if((Cont == 2) || (Cont == 4) || (Cont == 6) || (Cont == 8) || (Cont == 10) || (Cont == 12) || (Cont == 14) || (Cont == 16)){
                    Cont2 ++;
                    cout << Jogador2 << " Ganhou " << endl;
                    cout << "Placar" << endl;
                    cout << Jogador2 << " t� com " << Cont2 << " e " << Jogador1 << " t� com " << Cont1 << endl;
                }
                Cont = 0;
            }else{
                if((Select + 9) == Cont){
                    cout << "Ninquem ganhou !" << endl;
                    Cont = 0;
                }
            }
            if(Cont == 0){
                Matriz [0][0] = "A";
                Matriz [0][1] = "B";
                Matriz [0][2] = "C";
                Matriz [1][0] = "D";
                Matriz [1][1] = "E";
                Matriz [1][2] = "F";
                Matriz [2][0] = "G";
                Matriz [2][1] = "H";
                Matriz [2][2] = "I";
                cout << "Deseja jogar novamente S para sim N para n�o" << endl;
                cin >> Seletor;
            }
            if(Seletor == "n"){
                if(Cont1 > Cont2){
                    cout << Jogador1 << " venceu de " << Cont1 << " a " << Cont2;
                }else{
                    cout << Jogador2 << " venceu de " << Cont2 << " a " << Cont1;
                }
            }
        }while(Seletor != "n");
    }
    return 0;
}
