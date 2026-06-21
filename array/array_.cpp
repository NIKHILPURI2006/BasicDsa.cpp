 #include <iostream>
 using namespace std;
 int ArraySum(int ar[], int n)
 {
   int sum = 0;
   for (int i = 0; i < n; i++)
   {
     sum = sum + ar[i];
   }
   return sum;
 }
 int main()
 {
   int ar[100];
   int size;
   cout << "Enter the size of array :: ";
   cin >> size;
   cout << "Enter the element of array:: ";
   for (int i = 0; i < size; i++)
   {
     cin >> ar[i];
   }
   cout << "Sum = " << ArraySum(ar,size);
 }