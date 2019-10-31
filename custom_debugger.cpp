#include "bits/stdc++.h"
using namespace std;

#define imie(...) cout<<" "<<#__VA_ARGS__<<(__VA_ARGS__)<<endl;
#define loop(n) for(int ii = 0; ii < n; ++ ii)
#define DEBUG 1
#if(DEBUG == 1)                        
#define ASSERT(...)                             \
cout<<#__VA_ARGS__<<" ... "<< num;              \
if((__VA_ARGS__) != true){                      \
    cout<<" Fails in file "<<__FILE__;          \
    cout<<" at line "<<__LINE__<<endl;          \
        }                                       \
else cout<<" Success! "<<endl;

#elif(DEBUG == 0)   
#define ASSERT(...)                             \
cout<<" "<<#__VA_ARGS__" result is = "<<num<<endl;       
#endif
 
int main() {
    int num = -1, temp = 0;
    ASSERT(num<0 && temp == 0);
    ASSERT(num<0);
}

