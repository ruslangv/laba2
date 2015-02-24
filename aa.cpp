/** \file aa.cpp */
#include <iostream>
using namespace std;
int a[100];

/** \void quickSort  */
void quickSort(int l, int r)
{
    int x = a[l + (r - l) / 2];
    //запись эквивалентна (l+r)/2, 
    //но не вызввает переполнения на больших данных
    int i = l;
    int j = r;
    
	//процедура разделения
    while(i <= j)
    {
        while(a[i] < x) i++;
        while(a[j] > x) j--;
        if(i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (i<r)
                quickSort(i, r);
    
    if (l<j)    
        quickSort(l, j);    
}


/** \void main  */
int main()
{
    int n;//количество элементов в массиве
	cout<<"vvedite 4islo elementov ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
		
        cin>>a[i];
    }
    quickSort(0, n-1);
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }        
    return(0);
}