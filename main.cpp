//pointers
//problem1 memory address and the value of an integer
// #include<iostream>
// using namespace std;
// int main () {
//     int a;
//     int *pValue=&a;
//     a=12;
//     cout<<"The memory address of a is "<<&a<<"\n";
//     cout<<"The value of *pValue is "<<*pValue<<"\n";
//     return 0;
// }

//Problem2
// #include<iostream>
// using namespace std;
// int main () {
//     int number=10;
//     int *Number=&number;
//     cout<<"Initial value: "<<number<<"\n";
//     *Number=15;
//     cout<<"Memory location: "<<&number<<"\n";
//     cout<<"Final value: "<<*Number<<"\n";
//     return 0;
// }

//Problem3 swap numbers
// #include<iostream>
// using namespace std;
// void swap(int *a, int *b);
// int main() {
//     int a=20;
//     int b=25;
//     cout<<"A= "<<a<<"\n";
//     cout<<"B= "<<b<<"\n";
//     swap(a,b);
//     cout<<"Swapped A= "<<a<<"\n";
//     cout<<"Swapped B= "<<b<<"\n";
//     return 0;
// }

//Problem4 iteration without indexing
// #include<iostream>
// using namespace std;
// int main () {
//     int num[5]={1,2,3,4,5};
//     int *ptr=num;
//     int size=sizeof(num)/sizeof(num[0]);
//     for (int i=0; i<size; i++) {
//         cout<<*(ptr+i)<< " ";
//     }
//     cout<<endl;
//     return 0;
// }

//problem5 find middle element
// #include<iostream>
// using namespace std;
// int main () {
//     int array[]={10,15,20,25,30,35,40};
//     int size=sizeof(array)/sizeof(array[0]);
//     int *start=array;
//     int *end=array+size-1;
//     int *middle=start+(end-start)/2;
//     cout<<"Middle element is "<<*middle<<"\n";
//     return 0;
// }

//Problem6
// #include<iostream>
// using namespace std;
// void square(int *n) {
//     *n=(*n)*(*n);
// }
// int main () {
//     int num=6;
//     cout<<"Original value="<<num<<"\n";
//     square(&num);
//     cout<<"Squared value="<<num<<"\n";
//     return 0;
// }

//Problem7
// #include<iostream>
// using namespace std;
// int main () {
//     int array[]={1,2,3,4,5};
//     int *ptr=array;
//     cout<<"Size of array: "<<sizeof(array)<<'\n';
//     cout<<"Size of pointer: "<<sizeof(ptr)<<'\n';
//     return 0;
// }

//problem8 ask the teacher
// #include<iostream>
// using namespace std;
// int main () {
//     int value=42;
//     void *ptr=&value;
//     cout<<"Value via void pointer: "<<*ptr<<'\n';
//     return 0;
// }

//Problem9
// #include<iostream>
// using namespace std;
// int findMax(int *array, int size) {
//     int max=*array;
//     for (int *ptr=array; ptr<array+size; ptr++) {
//         if (*ptr>max) {
//             max=*ptr;
//         }
//     }
//     return max;
// }
// int main () {
//     int num[]={1,2,3,4,5,6,7};
//     int size=sizeof(num)/sizeof(num[0]);
//     cout<<"Maximum value: "<<findMax(num,size)<<'\n';
//     return 0;
// }

//problem 10 a ba ptr A ptrB
// #include<iostream>
// using namespace std;
// int main () {
//     int a, b;
//     int *ptrA, *ptrB;
//     cout<<"Enter integers for variable 'a': ";
//     cin>>a;
//     cout<<"Enter integers for variable 'b': ";
//     cin>>b;
//     ptrA=&a;
//     ptrB=&b;
//     cout<<"\nValues accessed via pointers";
//     cout<<"\nValue of a via *ptrA: "<<*ptrA<<endl;
//     cout<<"\nValue of b via *ptrB: "<<*ptrB<<endl;
//     return 0;
// }

//Problem11
// #include<iostream>
// using namespace std;
// int main() {
//     int size;
//     cout<<"Enter the size of data values: ";
//     cin>>size;
//     if (size<=0) {
//         cout<<"Invalid Input"<<endl;
//         return 1;
//     }
//     int *data=new int[size];
//     cout<<"Enter "<<size<<" values: ";
//     for(int i=0;i<size;i++) {
//         cin>>data[i];
//     }
//     int *maxptr=data;
//     for (int i=1; i<size;i++) {
//         if (data[i]>*maxptr) {
//             maxptr=&data[i];
//         }
//     }
//     cout<<"The maximum value is "<<*maxptr<<endl;
//     cout<<"The memory location is "<<maxptr<<endl;
// }

//Problem13
// #include<iostream>
// using namespace std;
// int main () {
//     int array[10]={1,3,5,12,15,23,21,34,33,44};
//     int *ptrA=array;
//     for (int i=0;i<10;i++) {
//         cout<<"The memory address of an array: "<<&array[i]<<endl;
//         cout<<"Value of an array: "<<*(ptrA+i)<<endl;
//     }
//     return 0;
// }

//Problem14
// #include<iostream>
// using namespace std;
// int main () {
//     int message=55;
//     int *ptr=&message;
//     cout<<"Memory location: "<<&message<<endl;
//     cout<<"Secret message: "<<*ptr<<endl;
//     return 0;
// }

//Problem15
// #include <iostream>
// using namespace std;
// int main() {
//     int treasures[] = {10, 20, 30, 40, 50};
//     int* ptr = treasures;
//     ptr = ptr + 4;
//     cout << "The last treasure value is: " << *ptr << endl;
//
//     return 0;
// }

//Problem16
// #include <iostream>
// using namespace std;
//
// int main(){
//     int score = 75;
//     int* ptr = &score;
//     *ptr = *ptr + 10;
//     cout << "Updated score (after extra credit): " << score << endl;
//     return 0;
// }

//Problem17
// #include <iostream>
// using namespace std;
// void reverseArray(int* arr, int size) {
//     int* start = arr;
//     int* end = arr + size - 1;
//
//     while (start < end) {
//         // Swap values
//         int temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }
// }
//
// int main() {
//     int numbers[] = {1, 2, 3, 4, 5};
//     cout << "Original array: ";
//     for (int num : numbers) {
//         cout << num << " ";
//     }
//     cout << endl;
//     reverseArray(numbers, 5);
//     cout << "Reversed array: ";
//     for (int num : numbers) {
//         cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }

//problem18
// #include <iostream>
// using namespace std;
//
// void findTop3Scores(int* arr, int size) {
//     int* highest = nullptr;
//     int* secondhighest = nullptr;
//     int* thirdhighest = nullptr;
//
//     // Iterate through the array to find top 3 scores
//     for (int i = 0; i < size; ++i) {
//         if (highest == nullptr || *(arr + i) > *highest) {
//             thirdhighest = secondhighest;
//             secondhighest = highest;
//             highest = arr + i;
//         } else if (secondhighest == nullptr || *(arr + i) > *secondhighest) {
//             thirdhighest = secondhighest;
//             secondhighest = arr + i;
//         } else if (thirdhighest == nullptr || *(arr + i) > *thirdhighest) {
//             thirdhighest = arr + i;
//         }
//     }
//     cout << "Top 3 scores: " << *highest << ", " << *secondhighest << ", " << *thirdhighest << endl;
// }
//
// int main() {
//     int scores[] = {78, 95, 85, 62, 88};
//     findTop3Scores(scores, 5);
//
//     return 0;
// }

//problem19
// #include <iostream>
// using namespace std;
// int* countDigits(const int& number) {
//     static int digitCounts[10] = {0};
//     int num = number;
//     while (num != 0) {
//         int digit = num % 10;
//         digitCounts[digit]++;
//         num /= 10;
//     }
//
//     return digitCounts;
// }
//
// int main() {
//     int number = 112345112;
//     int* counts = countDigits(number);
//     cout << "Digit occurrences in " << number << ":\n";
//     for (int i = 0; i < 10; ++i) {
//         cout << "Digit " << i << ": " << counts[i] << "\n";
//     }
//     return 0;
// }

//Problem20
// #include <iostream>
// using namespace std;
// void sortArray(int* arr, int size) {
//     for (int i = 0; i < size - 1; ++i) {
//         for (int j = 0; j < size - i - 1; ++j) {
//             if (*(arr + j) > *(arr + j + 1)) {
//                 int temp = *(arr + j);
//                 *(arr + j) = *(arr + j + 1);
//                 *(arr + j + 1) = temp;
//             }
//         }
//     }
// }
// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     sortArray(arr, size);
//     cout << "Sorted array: ";
//     for (int i = 0; i < size; ++i) {
//         cout << *(arr + i) << " ";
//     }
//     cout << endl;
//     return 0;
// }

