#include <iostream>

using namespace std;
#include <iomanip>

int main()

{
	double brojOcena;
	double prosecnaOcena;
	double ocena;
	int n = 0;
	double zbiro = 0;
	int a= 0;
 	
 	cin>> brojOcena;
 	
 	while(brojOcena > n){
 		cin>>ocena;
 		n++;
 		zbiro = ocena + zbiro;
 	}
 	
	float final = zbiro / brojOcena;
 	cout << fixed << setprecision(2) << final;
}
