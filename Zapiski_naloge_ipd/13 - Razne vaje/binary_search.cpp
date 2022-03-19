int binary_search(string A[], int n, string name)
{           
   // To deluje, če je A[] sortiran po velikosti (najvecji element je na A[n-1])
   
   int levo = 0;
   int desno = n-1;              // First, Last and pivotdle array elements
   int pivot = 0;

   while(levo <= desno)
   {
		pivot = (levo+desno)/2;      // Calculate pivot point of array
		if (A[pivot] == name)        // If value is found at pivot
		{
		   return pivot;	  
		}
		else if (A[pivot] > name)
		{                       
		   desno = pivot + 1;
		}
		else if (A[pivot] < name)
		{      
		   levo = pivot - 1;
		}	   
	}
    return -1;
}

int main()
{
	int index = binary_search(tab, 30, "Miha");
	if(index == -1)
		cout << "Miha ne obstaja";
	else
		cout << "Miha je na indexu " << index;


}