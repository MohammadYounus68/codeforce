#include <bits/stdc++.h>
using namespace std;

void print(vector<int> data){
    cout << "Total Elements: " << data.size() << "\n";
    for (int datam:data)
        cout << datam << " ";
    cout << "\n\n";
}
void functionNew(){
    vector<int>v;
    cout<<"Total Eleme:" << v.size() <<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for(int i:v){
        cout<<v[i]<<" ";
    }
}

int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
    // vector<int>v;
    // functionNew();

    /// create

    ///vector <type> name (elements);





  /* vector<int> data (5); 
   print(data);*/




   vector<int> data;
   print(data);

    

//    vector<int> data(5, 2);
//    print(data);

//    vector<int> data({1, 2, 3, 4, 5}); /// int data[] = {1, 2, 3, 4, 5}
//    print(data);

//    vector<int> data = {1, 2, 3, 4, 5}; /// int data[] = {1, 2, 3, 4, 5}
//    print(data);

//    vector<int> data = {1, 2, 3, 4, 5}; /// int data[] = {1, 2, 3, 4, 5}
//    vector<int> data2 = data;
//    print(data2);

    /// add elements

//    vector <int> data = {1,2,3};
//    data.push_back(5);
//    data.push_back(7);
//    data.push_back(9);
//    print(data);


//    vector <int> data = {1,2,3};
//    /// data.begin()
//    /// data.end()
//
////    data.insert( data.begin() , 7);
////    data.insert( data.begin() + 2, 7);
//
////    data.insert(data.end()-1, 7);
//
////    data.insert(data.begin(), 2, 7);
//    data.insert(data.begin() + 1, 2, 7);
//
//    print(data);

    /// read

//    vector <int> data = {3, 2, 1, 6, 4, 2};
//    cout << data[2] << "\n";
//    cout << data.front() << "\n";
//    cout << data.back() << "\n";

//    vector <int> data = {3, 2, 1, 6, 4, 2};
//    for (int d:data){
//        cout << d << " ";
//    }

//    vector <int> data = {3, 2, 1, 6, 4, 2};
//    int ln = data.size();
//    for (int i=0; i<ln; ++i){
//        cout << data[i] << " ";
//    }

//    vector <int> data = {3, 2, 1, 6, 4, 2};
//    int ln = data.size();
//    for (int i=2; i<ln-1; ++i){
//        cout << data[i] << " ";
//    }

//    vector <int> data = {3, 2, 1, 6, 4, 2};
//
//    int *d = data.data();
//    cout << d[2];

    /// update

//    vector <int> data = {3, 2, 1, 6, 4, 2};
//    data[2] = 7;
////    cout << data[2] << "\n";
//    print(data);

/// swap
//    vector <int> data = {3, 2, 1, 6, 4, 2};
//    vector <int> data2 = {6, 9, 8};
//
//    cout << "before swap\n";
//    print(data);
//    print(data2);
//
//    data.swap(data2);
//    cout << "after swap\n";
//    print(data);
//    print(data2);


    /// delete

//    vector <int> data = {3, 2, 1, 6, 4, 2};
//
//    cout << "Before delete\n";
//    print(data);
//
////    data.pop_back();
////    data.clear();
////    data.erase(data.begin()+2, data.begin()+3);
//    data.erase(data.begin()+2, data.end()-2);
//
//    cout << "After delete\n";
//    print(data);


    return 0;
}

/*

1 আমার দেহখান
2 উৎসর্গ
3 নেশার বোঝা
4 পুনর্জন্ম
5 আভাস
6 অবস্থান
7 সতেরো পৃষ্ঠা
8 দুঃখ বিলাস
9 দুঃস্বপ্ন
10 শিরোনামহীন
11স্রোতসিনী
12খোলা জানালা
13প্রস্তাব
14ধুলাবালি
15অনিকেত প্রান্তর 

*/