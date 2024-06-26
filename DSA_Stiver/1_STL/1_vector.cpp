#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> v;
    for(int i = 0; i < 10; i++){
        v.push_back(i);
    } 
    
    cout << "The elements in the vector is : ";
    for(auto it = v.begin(); it !=v.end(); it++){
        cout << *it << " ";
    }

    cout << "\n The front element of the vector : " <<v.front();
    cout << "\n The last element of the vector : " << v.back();
    cout << "\n The size of the vector : " << v.size();
    cout << "\n Deleting element from the end : " << v[v.size() - 1];
    v.pop_back();

    cout << "\nPrinting the vector after removing the last element:" << endl;
    for (int i = 0; i < v.size(); i++){
    cout << v[i] << " "; 
    }

    cout << "\n Inserting 5 at the beginning : " << endl;
    v.insert(v.begin(),5);
    cout << "The first element is : " << v[0] << endl;
    cout << "Erasing the first element : " << endl;
    v.erase(v.begin());
    cout << "Now the first element is : " << v[0] << endl;

    if(v.empty()){
        cout << "\n Vector is empty ! " << endl;
    }

    else{
        cout << "\n Vector is not empty ! " << endl;
    }

    v.clear();
    cout << "The size of the vector after clearing the vector is : " << v.size();
}