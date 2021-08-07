#include"PrintCombination.h"

void PrintCombination(int* arrayPtr, int element, int	 choice)
{
                // A temporary array to store
                // all combination one by on
                int *data=new int[choice];

                // Print all combination using
                // temprary array 'data[]'
                combinationUtil(arrayPtr, data, 0, element - 1, 0, choice);
}

void combinationUtil(int arr[], int data[],int start, int end,int index, int r)
{
                // Current combination is ready
                // to be printed, print it
                if (index == r)
                {
                                for (int j = 0; j < r; j++)
                                {
                                                cout << data[j] ;
                                                if (j != r - 1)
                                                                cout << " ";
                                }
                                cout << endl;
                                return;
                }

                // replace index with all possible
                // elements. The condition "end-i+1 >= r-index"
                // makes sure that including one element
                // at index will make a combination with
                // remaining elements at remaining positions
                for (int i = start; i <= end && end - i + 1 >= r - index; i++)
                {
                                data[index] = arr[i];
                                combinationUtil(arr, data, i + 1, end, index + 1, r);//arr[] data[] start end index r
                }
}