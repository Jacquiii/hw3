#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

void random(double* p, const int N)
{
 for(int i=0; i<N; i++){
    double r = rand();
    p[i] = r / RAND_MAX;
   }
}
     
void calculation(double*p,const int N,double& mean,double& var)
{

 double sum1=0; 
 for(int i=0; i<N; i++){
    sum1 += p[i];
    }
    mean=(sum1)/(N); 

    
 double sum2=0;
 for(int i=0; i<N; i++){
    sum2 +=(p[i]-mean)*(p[i]-mean); 
    }
    var=(sum2)/(N);

} 
 
int main(){
   const int N = 100;
   double p[N];
   double mean, var;
   
random(p,N);
calculation(p,N,mean,var);


   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
