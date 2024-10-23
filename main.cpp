#include <iostream>
using namespace std;

class product{
private:
    string productid;
    string productname;
    double price;
    int qnt;
    double percenatage[3]= {000,0,10};

public:
    product(string productid,string productname,double price,int qnt){
        product::productid=productid;
        product::productname=productname;
        product::price=(price<0)?product::price:price;
        product::qnt=(qnt<0)?product::qnt:qnt;
    }

    void setprice(double price){
        product::price=price;
    }
    void setstockqnt(int stock){
            qnt=stock;
    }
    int getprice(){
        return price;
    }
    int getqnt(){
        return qnt;
    }
    void applydiscount(){

        for (int i = 0; i < 3; ++i) {
            double disc;
            disc=price*(percenatage[i]/100);
            price=price-disc;
        }
    }
    void print(){
        cout<<"  id "<<productid<<"  name  "<<productname<<"  price  "<<price<<"  qnt  "<<qnt<<endl;
    }
};
int main() {
product samsung("123","apple",10,20);
    product laptop("246","dell",200,50);
    product honda("369","car",250,70);
samsung.getprice();
samsung.getqnt();
samsung.print();
samsung.applydiscount();
samsung.print();

    return 0;
}
