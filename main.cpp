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
void indeksas(vector<int> A, vector<int> &B, int &didziausias);

int main()
{

    vector<int> M, Ap;
    int maxElementas;
    skaitomPusinam(M);
    spausdink(M, "Nuskaite");
    lyginu(M, maxElementas);


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
    for(int i=0; i<A.size(); i++){
        if(A[i]>didziausias) didziausias=A[i];
    }
}
void indeksas(vector<int> A, vector<int> &B, int &didziausias){
    for(int i=0; i<A.size(); i++){
        if(A[i]==didziausias){
            B.push_back(i);
        }
    }
}
