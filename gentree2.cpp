#include<bits/stdc++.h>
using namespace std;

int rand(int a, int b){
	return a + rand() % (b-a+1);
}

int main(int argc, char* argv[]){
	srand(atoi(argv[1]));
	int n = rand(2, 20);
	cout<<n<<endl;
	//pair<int, int>edge[n-1];
	vector<pair<int, int>>edges;
	for(int i = 2; i<=n; i++){
		///binary tree
		edges.emplace_back(i / 2, i);
		///
	}
	vector<int>permute(n+1); //re-naming vertices
	for(int i = 1; i <= n; i++){
		permute[i] = i;
	}
	random_shuffle(edges.begin(), edges.end());
	
	for(pair<int, int>edge : edges){
		int a = edge.first;
		int b = edge.second;
		if(rand()%2){
			swap(a, b);
		}
		cout<<permute[a]<<' '<< permute[b]<<endl;
	}
	return 0;
}
	
	
