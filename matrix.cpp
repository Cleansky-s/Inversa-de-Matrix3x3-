#include <iostream>
using namespace std;


float v[3][3];
float adjV[3][3];
float At[3][3];
float inv[3][3];
float deter;

void Inversa() {
	cout << "its inverse is  :" << endl;
	int m = 0;
	for (int i = 0; i <= 2; i++) {
		inv[0][i] = (adjV[0][i]) / deter;
		inv[1][i] = (adjV[1][i]) / deter;
		inv[2][i] = (adjV[2][i]) / deter;
	}
	for (int i = 0; i <= 2; i++) {

		cout << "(" << inv[i][0] << "£© ";
		cout << "(" << inv[i][1] << "£© ";
		cout << "(" << inv[i][2] << ")" << endl;
	}


}

void TMatrix() {
	cout << "its transpuesta is  :" << endl;
	At[0][0] = v[0][0];
	At[1][0] = v[0][1];
	At[2][0] = v[0][2];
	At[0][1] = v[1][0];
	At[1][1] = v[1][1];
	At[2][1] = v[1][2];
	At[0][2] = v[2][0];
	At[1][2] = v[2][1];
	At[2][2] = v[2][2];

	for (int i = 0; i <= 2; i++) {
		
		cout << "(" << At[i][0] << "£© ";
		cout << "(" << At[i][1] << "£© ";
		cout << "(" << At[i][2] << ")" << endl;
	}

}

void adjMatrix() {


	adjV[0][0] = (At[1][1] * At[2][2]) - (At[2][1] * At[1][2]);
	adjV[0][1] = (At[2][2] * At[1][0]) - (At[2][0] * At[1][2]);
	adjV[0][2] = (At[2][1] * At[1][0]) - (At[2][0] * At[1][1]);
	adjV[1][0] = (At[2][2] * At[0][1]) - (At[2][1] * At[0][2]);
	adjV[1][1] = (At[2][2] * At[0][0]) - (At[2][0] * At[0][2]);
	adjV[1][2] = (At[2][1] * At[0][0]) - (At[2][0] * At[0][1]);
	adjV[2][0] = (At[1][2] * At[0][1]) - (At[1][1] * At[0][2]);
	adjV[2][1] = (At[1][2] * At[0][0]) - (At[1][0] * At[0][2]);
	adjV[2][2] = (At[1][1] * At[0][0]) - (At[1][0] * At[0][1]);

	adjV[0][1] = -adjV[0][1];
	adjV[1][0] = -adjV[1][0];
	adjV[1][2] = -adjV[1][2];
	adjV[2][1] = -adjV[2][1];



	cout << " adjunto of the matrix tanspuesta is :" << endl;
	for (int m = 0; m <= 2; m++) {
		cout <<"("<< adjV[m][0]<<"£© ";
		cout << "(" << adjV[m][1] << "£© ";
		cout << "(" << adjV[m][2] << ")"<<endl;
	}


}

void solve_dete() {
	for (int y = 0; y < 3; y++) {
		cin >> v[y][0];
		cin >> v[y][1];
		cin >> v[y][2];
	}
	
	deter = (v[2][2] * v[1][1] * v[0][0]) + (v[0][1] * v[1][2] * v[2][0]) + (v[0][2] * v[1][0] * v[2][1])
		- (v[0][2] * v[1][1] * v[2][0]) - (v[2][1] * v[1][2] * v[0][0]) - (v[1][0] * v[0][1] * v[2][2]);
	cout << "it's determinante is :" << deter<<endl;
}
