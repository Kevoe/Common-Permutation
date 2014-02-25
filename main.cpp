#include <iostream>

using namespace std;

int main()
{
    int casos;
    string palabra1, palabra2;
    cin >> casos;
    while(casos > 0){
        cin >> palabra1;
        cin >> palabra2;
        int maxP = max(palabra1.length(),palabra2.length());
        int arreglo[26][3];

        for (int i=0; i < 3; i++){
            for(int j=0; j < 26; j++){
                arreglo[j][i] = 0;
            }
        }

        for(int i = 0; i < palabra1.length(); i++){
            arreglo[palabra1[i] - 97][0]++;
        }

        for(int i = 0; i < palabra2.length(); i++){
            arreglo[palabra2[i] - 97][1]++;
        }

        for(int i = 0; i < 26; i++){
            arreglo[i][2] = min(arreglo[i][0], arreglo[i][1]);
        }

        for(int i=0; i < 26; i++){
            for(int j=0; j < arreglo[i][2]; j++)
                cout << (char)(97 + i);
        }
        cout << endl;
        casos--;
    }
    return 0;
}
