#include <iostream>
 using namespace std;


int func(int ar[],int n){
    
    int sum=0;
      for( int i=0;i<n;i++){
       
        
        sum=sum + ar[i];
        

}
return sum;

}

int main() {

        int size;
        int ar[100];
       cout<<"enter the size of array";
       cin>>size;
       cout<<"enter the elements of array ";
       for (int i =0;i<=size;i++){
        
        cin>>ar[i];
        
       }
       cout<<"sum of elements of array are "<<func(ar,size);  

        

}