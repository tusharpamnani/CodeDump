#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> v;
    cout <<"Size -> " << v.capacity() <<endl;
    
    v.push_back(5);
    cout <<"Size -> " << v.capacity() <<endl;
    
    v.push_back(9);
    cout <<"Size -> " << v.capacity() <<endl;
    
    v.push_back(45);
    cout <<"Size -> " << v.capacity() <<endl;
    
    
    cout << v.size() <<endl;
    
    
    cout << "Elemnet at 2nd index -> " << v.at(2) << endl;
    
    cout << "First Element -> " << v.front() << endl;
    
    cout << "Last Element -> " << v.back() << endl;
    
    cout << "Befor POP " << endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;
    
    v.pop_back();
    
    cout << "After POP "  << endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;
    
    cout << "Size before clearing " << v.size() << endl;
    
    v.clear();
    
    cout << "Size after clearing " << v.size() << endl;
    
    vector <int> a(5,1); // vector of size 5 with all elements as 1
    cout << "All elemnets of a" << endl;
    for(int i:a){
        cout << i << " ";
    }cout << endl;
    
    vector <int> last(a);
    cout << "a is copied to the vector 'last'" << endl;
    for(int i:last){
        cout << i << " ";
    }cout << endl;
    
}
