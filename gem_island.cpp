#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
int n,d,r,gems;
double total=0;
int possibilities;

cin>> n , d , r ;

gems=n+d;
if(gems%2!=0)
{
possibilities=n*n;
for(int i=0;i<n;i++)

    total+=(double)(gems-1-i)*n;
    
}
else { 
    possibilities=n*n+1;
    total=  (double)((gems-1)*(n*n)+(r*r));
}

printf("%.6lf\n", (double)((total)/possibilities));
return 0;

}
