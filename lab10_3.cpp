#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>
using namespace std;

int main(){
    ifstream source;
    int i = 0;
    double sum = 0,sum2 = 0;
    string x;
	source.open("score.txt");
	while(getline(source,x)){
	 sum += stod(x);
	 sum2 += pow(stod(x),2);
	 i++;
	}
	double mean = sum/i;
	double zigma = sqrt((sum2/i)-pow(mean,2));
    cout << "Number of data = "<< i <<endl;
    cout << setprecision(3);
    cout << "Mean = "<< mean <<endl;
    cout << "Standard deviation = "<< zigma;
    source.close();
}