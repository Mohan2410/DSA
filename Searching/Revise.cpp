// #include<iostream>
// using namespace std;

// int findOddElement(int arr[],int size){
//     int start = 0;
//     int end = size - 1;

//     while(start<=end){
//         int mid = (start+end)/2;

//         //single element check 
//         if(start==end){
//             return start; //return start or end koi bhi kar sakte ho
//         }

//         if(mid & 1){
//             if(arr[mid-1]==arr[mid]){
//                 start = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }
//         }else{
//             if(arr[mid+1]==arr[mid]){
//                 start = mid + 2;
//             }
//             else{
//                 end = mid; //value lost na ho isliye
//             }
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[] = {1,1,10,10,11,11,44,44,87,99,99,54,54};
//     int size = 13;

//     int ansIndex = findOddElement(arr,size);
//     cout<<"answer is at index: "<<ansIndex<<endl;
//     cout<<"final answer is: "<<arr[ansIndex]<<endl;
// }



// #include<iostream>
// using namespace std;
// int bSearch(int arr[],int size,int target){
//     int start = 0;
//     int end = size - 1;

//     while(start<=end){
//         int mid = (start+end)/2;

//         if(arr[mid]==target){
//             return mid;
//         }
//         else if(target > arr[mid]){
//             start = mid + 1;
//         }
//         else{
//             end = mid -1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[] = {10,20,30,40,50,60,70,80};
//     int size = 8;
//     int target = 99;

//     int ans = bSearch(arr,size,target);
//     cout<<"target found at index: "<<ans<<endl;
//     if(ans == -1){
//         cout<<"not found..."<<endl;
//     }else{
//         cout<<"found"<<endl;
//     }

// }