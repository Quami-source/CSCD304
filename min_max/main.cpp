#include <iostream>

using namespace std;

int main()
{
    int n,item = 0;
    int arra[n];
    cout << "Enter the array size : ";
    cin >> n;

    for (int i=0; i<n; i++){
        cout << " Enter array elements : ";
        cin >> arra[i];
    }

    //max element
    int minElement, maxElement = arra[0];
    for(int j=0; j<n; j++){
      if(arra[j]>maxElement){
        maxElement = arra[j];
      }

      if(arra[j]<minElement){
        minElement = arra[j];
      }

    }

    cout << "Maximum is : "<< maxElement<<endl;
    cout << "Minimum is : "<< minElement<<endl;

    return 0;
}
