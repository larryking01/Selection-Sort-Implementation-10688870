#include<iostream>
 
using namespace std;
 
int main()
{
    int i,j,arraySize,loc,temp,min,array[30];
    
    cout<<"Enter the number of elements:";
    cin>>arraySize;
    
    cout<<"\nEnter the elements\n";
 
    for(i=0; i<arraySize; i++)
    {
        cin>>array[i];
    }
 
    for(i=0; i<arraySize-1; i++)
    {
        min=array[i];
        loc=i;
        for(j=i+1; j<arraySize; j++)
        {
            if(min>array[j])
            {
                min=array[j];
                loc=j;
            }
        }
 
        temp=array[i];
        array[i]=array[loc];
        array[loc]=temp;
    }
 
    cout<<"\nSorted list is as follows\n";
    for(i=0; i<arraySize; i++)
    {
        cout<<array[i]<<" ";
    }
 
    return 0;
}
