#include <iostream>
#include <map>
using namespace std;
class User
{
public:
    string name;
    int  number;
    int id;

    User()
    {
        cout<<"enter Ur name ,number and Id:\n";
        int x,y,z;
        cin>>x>>y>>z;
        name=x;
        number=y;
        id=z;
    }





};
class Books
{
public:
    int counts;
    string title;
    map<string,int>list_book;
    map<string, int>::iterator it ;
    map<string, int>::iterator itr;
    Books(){}
    void setbooks(string title,int counts )
    {
        list_book.insert(pair<string,int>(title,counts));
    }
    void getbooks(string title)
    {
        it=list_book.find(title);
        list_book.erase(it);
        //list_book.remove(it->second);


      //cout<<" it:"<<it->first<<it->second;
    }
    void displaybooks()
    {

        for (itr = list_book.begin(); itr != list_book.end(); ++itr)
        {
            cout << '\t' << itr->first << '\t' << itr->second
                 << '\n';
        }
        cout << endl;
    }

};

class Borrower:public User,public Books
{
public:
    string til;
    int cou;

    Borrower()
    {
    }


    void borrow()
    {
        cout<<"Enter book name U need?"<<endl;
        cin>>til;
        this->getbooks(til);



    }
    void retun() {
        cout<<"Enter book name and it's quantity?"<<endl;
        cin>>til;
        cin>>cou;
        this->setbooks(til,cou);

    }
};
int main()
{
    cout << "Hello OOP !" << endl;
    User a;


    //Books b;
    //b.setbooks("algo",10);
    //b.setbooks("math",15);
    //b.displaybooks();
    Borrower p;
    p.setbooks("algo",10);
    p.setbooks("math",15);
    p.setbooks("state",20);
    p.getbooks("algo");
    //p.borrow();

    p.displaybooks();





    return 0;
}
