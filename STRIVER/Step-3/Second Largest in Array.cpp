// BRUTE FORCE APPROACH -> jb koi duplicate na ho
// #include<bits/stdc++.h>
// using namespace std;
// void getElements(int arr[],int n)
// {
//     if(n==0 || n==1)
//         cout<<-1<<" "<<-1<<endl;  
//     sort(arr,arr+n);   //array ko sort krna hai taki 2nd smallest aur 2nd largest nikal ske
//     int small=arr[1];
//     int large=arr[n-2];
//     cout<<"Second smallest is "<<small<<endl;
//     cout<<"Second largest is "<<large<<endl;
// }


//  Second Largest Number->coding ninjas ki problem->a array second largest or smallest element nikalna hai 
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    sort(a.begin(), a.end());
    int second_smallest = a[1];
    int second_largest = a[a.size() - 2];
    return {second_largest, second_smallest};

}
