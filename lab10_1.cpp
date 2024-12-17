#include<iostream>
using namespace std;

int main(){
    int i = 1;
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	char grade;
	do{
		cout << "Student ["<< i <<"]: " ;
		cin >> grade; 
		
		if(grade == '0') {
		    break;
		} //The loop must be terminated when grade = '0'
		
		if(grade == 'A'){ // if grade is A
			count[0]++;
			i++;
		}else if(grade == 'B'){ // if grade is B
			count[1]++;
			i++;
		}else if(grade == 'C'){ // if grade is B
			count[2]++;
			i++;
		}else if(grade == 'D'){ // if grade is B
			count[3]++;
			i++;
		}else if(grade == 'F'){ // if grade is B
			count[4]++;
			i++;
		}
		//and so on ... for grade = C, D, F	
		else{cout << "Wrong input. Please input again."<<endl;} 
	}while(true);
	
	cout << "In total "<<i-1<<" students."<< endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] ;	
	
	return 0;
}