#include <iostream>

using namespace std;

int main()
{
    int n,j = 0;

    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];

    for(int i = 0; i<n; i++){
        if(n != 0){
            cout << "Enter elements : ";
            cin >> arr[i];
        }
        else{
            cout << "Array size cannot be zero";
        }
    }

    //////////////////////////////////
    bool found = false;
    int searchItem = 0;
    cout << "Enter the element to search linearly : ";
    cin >> searchItem;

    for (int j = 0; j<n; j++){
        if(searchItem == arr[j] ){
            //cout << " Item found" << j+1;
            found = true;
            break;
        }
    }

    if(found){
        cout << "Item found at index "<<j+1<<endl;
    }

    else{
        cout << "Item not found"<<endl;
    }



    return 0;
}
