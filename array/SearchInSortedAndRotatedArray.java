package amazon.data_structures.array;

public class SearchInSortedAndRotatedArray {

    static boolean search(int arr[], int low, int high, int element){
        int mid = (low + high)/2 ;
        if(low >= high) return false;
        if(arr[mid] == element) return true;
        if(arr[mid] < arr[high-1]){
            return search(arr, mid, high, element);
        }
        else{
            return search(arr,low, mid, element);
        }
    }

    public static void main(String[] args) {
        int arr[] = {3, 4, 5, 1, 2};
        if(search(arr,0,4,3)){
            System.out.println("Found 3.");
        }
        else{
            System.out.println("Not found 3.");
        }
    }
}
