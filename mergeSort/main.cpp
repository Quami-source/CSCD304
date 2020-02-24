#include<bits/stdc++.h>
using namespace std;
int Merge(int A[],int p, int q,int r)
{

    int sizeLeft,sizeRight,i,j,k;

    //size of left array=sizeLeft
    //size of right array=sizeRight

    sizeLeft = q-p+1;
    sizeRight = r-q;
    int Left[sizeLeft],Right[sizeRight];
    //initializing the value of Left part to Left[]
    for(i=0; i<sizeLeft; i++)
    {
        Left[i]=A[p+i];
    }


    //initializing the value of Right Part to Right[]
    for(j=0; j<sizeRight; j++)
    {
        Right[j]=A[q+j+1];
    }
    i=0,j=0;

    //Comparing and merging them
    //into new array in sorted order
    for(k=p; i< sizeLeft&&j< sizeRight; k++)
    {
        if(Left[i]<Right[j])
        {
            A[k]=Left[i++];
        }
        else
        {
            A[k]=Right[j++];
        }
    }
    //If Left Array L[] has more elements than Right Array R[]
    //then it will put all the
    // reamining elements of L[] into A[]
    while(i<sizeLeft)
    {
        A[k++]=Left[i++];
    }

    while(j<sizeRight)
    {
        A[k++]=Right[j++];
    }
}
//This is Divide Part
//This part will Divide the array into
//Sub array and then will Merge them
//by calling Merge()


int MergeSort(int A[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        MergeSort(A,p,q);
        MergeSort(A,q+1,r);
        Merge(A,p,q,r);
    }
}

//main function
int main()
{
    int n;
    cout<<"Enter size of the Array: ";
    cin>>n;
    int Arr[n],i;
    cout<<"Enter array values:\n";
    for(i=0;i<n;i++)
    cin>>Arr[i];
    //Calling the MergeSort()
    //First we are passing the array
    //the start index that is 0
    //and the size of the array n

    MergeSort(Arr,0,n-1);
    cout<<"The Sorted List is\n";
    for(i=0;i<n;i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}
