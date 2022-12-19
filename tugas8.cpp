#include <iostream>
using namespace std;

int main(){
int bil[3][3];
int num[3][3];
int mul[3][3];
int tot[3][3];
int i,j;
cout << "Masukkan 9 buah bilangan untuk matriks A!" << endl;

for (i=0; i<3; i++){
for (int j =0; j<3; j++){
cout << "[" << i << "][" << j << "] = ";
cin >> bil[i][j];}
        }

cout << "Masukk an 9 buah bilangan untuk matriks B!" << endl;

for (i=0; i<3; i++){
for (int j=0; j<3; j++){
    cout << "[" << i << "][" << j << "] = ";
cin >> num[i][j];}
        }
cout << "Hasil pertambahan matriks A + B = ..." << endl;
cout << " A = " << endl;
for (i=0; i<3; i++){
    for (j=0; j<3; j++){
    cout << " " << bil[i][j];
    if (j==2){
    cout << endl;}
            }
        }

cout << "\n B = " << endl;
    for (i=0; i<3; i++){
    for (j=0; j<3; j++){
    cout << " " << num[i][j];
    if (j==2){
    cout << endl;}
            }
        }

cout << "\n A + B = " << endl;
    for (i=0; i<3; i++){
    for (j=0; j<3; j++){
    tot[i][j]=bil[i][j]+num[i][j];
    cout << tot[i][j] << " ";
    if (j==2){
    cout << endl;}
            }
        }

cout << "\n A * B = " << endl;
    for (j=0; j<3; j++){
    if (j==0){
    for (i=0; i<3; i++){
    mul[i][j]=(bil[i][0]*num[0][j])+(bil[i][1]*num[1][j])+(bil[i][2]*num[2][j]);}
            }
    if (j==1){
    for (i=0; i<3; i++){
    mul[i][j]=(bil[i][0]*num[0][j])+(bil[i][1]*num[1][j])+(bil[i][2]*num[2][j]);}
            }
            if (j==2){
                for (i=0; i<3; i++){
                    mul[i][j]=(bil[i][0]*num[0][j])+(bil[i][1]*num[1][j])+(bil[i][2]*num[2][j]);
                }
            }
        }
        for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                cout << mul[i][j] << " ";
                if (j==2){
                    cout << endl;
                }
            }
        }

        cout << "\n Tranpose matriks A " << endl;
        for (j=0; j<3; j++){
            if(j==0){
                for (i=0; i<3; i++){
                    cout << bil[i][j] << " ";
                    if(i==2){
                        cout << endl;
                    }
                }
            }
            if(j==1){
               for (i=0; i<3; i++){
                    cout << bil[i][j] << " ";
                    if(i==2){
                        cout << endl;
                    }
                }
            }
            if(j==2){
                for (i=0; i<3; i++){
                    cout << bil[i][j] << " ";
                    if(i==2){
                        cout << endl;
                    }
                }
            }
        }

        cout << "\n Tranpose matriks B " << endl;
        for (j=0; j<3; j++){
            if(j==0){
                for (i=0; i<3; i++){
                    cout << num[i][j] << " ";
                    if(i==2){
                        cout << endl;
                    }
                }
            }
            if(j==1){
               for (i=0; i<3; i++){
                    cout << num[i][j] << " ";
                    if(i==2){
                        cout << endl;
                    }
                }
            }
            if(j==2){
                for (i=0; i<3; i++){
                    cout << num[i][j] << " ";
                    if(i==2){
                        cout << endl;
                    }
                }
            }
        }

}
