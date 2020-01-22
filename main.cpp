#include <iostream>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

ifstream in("duomenys.txt");
ofstream out("rezultatai.txt");

void skaitomPusinam(vector<int> &A);
void spausdink(vector<int> A, string text);
void lyginu(vector<int> A, int &didziausias);
void indeksas(vector<int> A, vector<int> &B, int didziausias);
void trynimas(vector<int> &A, vector<int> &B);

int main()
{

    vector<int> M, N;
    int maxElementas;
    skaitomPusinam(M);
    spausdink(M, "Nuskaite");
    lyginu(M, maxElementas);
    indeksas(M, N, maxElementas);
    spausdink(N, "Max elementu indeksu masyvas");
    trynimas(M, N);
    spausdink(M, "aptrintas");

    in.close();
    out.close();
    return 0;
}
void skaitomPusinam(vector<int> &A){
    int a=0;
    while(!in.eof()){
        in>>a;
        A.push_back(a);
    }
}

void spausdink(vector<int> A, string text){
    out<<text<<endl;
    for(int i=0; i<A.size(); i++){
        out<<A[i]<<" ";
}
out<<endl;
}
void lyginu(vector<int> A, int &didziausias){
    didziausias=A[0];
    for(int i=0; i<A.size(); i++){
        if(A[i]>didziausias) didziausias=A[i];
    }
}
void indeksas(vector<int> A, vector<int> &B, int didziausias){
    for(int i=0; i<A.size(); i++){
        if(A[i]==didziausias){
            B.push_back(i);

        }
    }
}
void trynimas(vector<int> &A, vector<int> &B){
    for(int i=0; i<B.size(); i++){
            cout<<B[i];
            A.erase(A.begin()+B[i]-i);


    }
}
