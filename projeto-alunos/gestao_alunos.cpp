
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int numAlunos = 10;
    string numero, nome, idade;
    string linha_aluno;
 /*   ofstream MyFile("dados.txt");

    for (int i = 1; i <= numAlunos; i++){
        cout << "\n ALUNO #" << i;
        cout << "\n";
        cout << "Diz o teu numero de cartao : ";
        getline(cin, numero);

        cout << "Diz o teu nome completo : ";
        getline(cin, nome);

        cout << "Diz a tua idade : ";
        getline(cin, idade);

        linha_aluno = numero + ";" + nome + ";" + idade;
        MyFile<< "\n";
        MyFile << linha_aluno;

    }

    MyFile.close();
*/
    string myText;
    ifstream MyReadFile("dados.txt");
    int j = 1;
    while(getline (MyReadFile, myText)) {
        cout << "\nAlunos #" << j << "\n";
        for (int i=0; i< myText.length(); i++){
            if (myText[i] !=';') {
               // cout << myText[i];
            }else {
               // cout << "\n";
            }
        }
        cout << numero [i] << "\n";
        cout << nome [i]<< "\n";
        cout << idade [i]<< "\n";
        cout << "\n";
        j++;
    }

    MyReadFile.close();

    return 0;

}
