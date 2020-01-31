#include<bits/stdc++.h>
using namespace std;

int rand(int a, int b){
	return a + rand() % (b-a+1);
}

int main(int argc, char* argv[]){
	srand(atoi(argv[1]));
	int n = rand(2, 15);
	cout<<n<<endl;
	//tree
	//for(int i = 2; i <= n; i++){
		//cout<<rand(1, i-1)<<' '<<i<<'\n';
	//}
	//binary tree
	for(int i = 2; i <= n; i++){
		cout<<i/2<<' '<<i<<'\n';
	}
	
	return 0;
}
