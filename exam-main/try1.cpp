#include<iostream>
#include<typeinfo>
using namespace std;

class A{
    private:
        int aValue;
    public:
        A(){
            aValue = 0;
        }
        A(int value){
            this->aValue = value;
        }
        void accept(){
            cout<<"Enter value :";
            cin>>aValue;
        }
        virtual void display(){
            cout<<"A Value is :"<<aValue<<endl;
        }
};
class B: virtual public A{
    private:
        int bValue;
    public:
        B(){
            bValue = 0;
        }
        B(int value){
            this->bValue = value;
        }
        void accept(){
            cout<<"Enter value :";
            cin>>bValue;
        }
        void display(){
            cout<<" B Value is :"<<bValue<<endl;
        }

        
};
class C:virtual public A{
    private:
        int cValue;
    public:
        C(){
            cValue = 0;
        }
        C(int value){
            this->cValue = value;
        }
        void accept(){
            cout<<"Enter value :";
            cin>>cValue;
        }
        void display(){
            cout<<"C Value is :"<<cValue<<endl;
        }

        
};
class D:public B,public C{
    private:
        int dValue;
    public:
        D(){
            dValue = 0;
        }
        D(int value){
            this->dValue = value;
        }
        void accept(){
            cout<<"Enter value :";
            cin>>dValue;
        }
        void display(){
            cout<<"D Value is :"<<dValue<<endl;
        }

        
};
int main(){
    A *obj = NULL;
    D obj1;
    obj = &obj1;
    if(typeid(*obj) == typeid(obj1)){
        D *temp = dynamic_cast<D*>(obj);
        temp->accept();
        temp->display();
        cout<<typeid(temp).name();
    }

    return 0;
}