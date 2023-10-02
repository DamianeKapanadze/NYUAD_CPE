
#include <iostream>

using namespace std;

int main()
{
    double sumX, sumY, sumXX, sumXY, a, b, m, n=0;
    while(cin>>a>>b){
        sumX +=a;
        sumY +=b;
        sumXX += a*a;
        sumXY += a*b;
        n++;
    }
    m = (sumX * sumY - sumXY * n) / (sumX * sumX - n * sumXX);
    b = (sumX * sumXY - sumXX * sumY) / (sumX * sumX - n * sumXX);
    
    cout<<m<<" "<<b<<endl;
    return 0;
}
