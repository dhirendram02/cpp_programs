#include<iostream>

class base {
    int val1, val2;
public:

    void get() {
        cin>>val1>>val2;
    }
    friend float mean(base ob);
};

float mean(base ob) {
    return float(ob.val1 + ob.val2) / 2;
}

void main() {
    base obj;
    obj.get();
    cout<<mean(obj);
    return();
}