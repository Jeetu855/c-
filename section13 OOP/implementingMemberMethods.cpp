#include<iostream>
#include<vector>
#include<string>

class Account{

    private:
    double balance; //* methods inside this class have access to this data

    public:
    void set_balance(double bal);
    double get_balance();
};

// **declaring methods outside of class declration
void Account::set_balance(double bal){
    balance=bal;
}
double Account::get_balance(){
    return balance;
}

int main(){
    


    return 0;
}