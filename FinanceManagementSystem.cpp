#include <iostream>
#include<cstdlib>
#include<vector>

using namespace std;

vector<int> incomeHistory;
vector<int> expenseHistory;


void addIncome(int& inc){
 int i;
 cout<<"Enter Income"<<endl;
 cin>>i;
 if(i>=0){
 inc+=i;
 incomeHistory.push_back(i);
 cout<<"Income Added Successfully!"<<endl;

 }
 else{
    cout<<"Income can't be negative"<<endl;
 }
 cout<<" "<<endl;
}


void addExpense(int& exp){
 int e;
 cout<<"Enter Expense"<<endl;
 cin>>e;
 if(e>=0){
 exp+=e;
 expenseHistory.push_back(e);
 cout<<"Expense Added Successfully!"<<endl;
 }
 else{
    cout<<"Expense can't be negative."<<endl; 
    }
 
 cout<<" "<<endl;
}

void displayTransactionHistory() {
    cout << "Transaction History:" << endl;
    cout << "Income: ";
    for (int i : incomeHistory) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Expense: ";
    for (int e : expenseHistory) {
        cout << e << " ";
    }
    cout << endl;
}

void displaySummary(int income, int expense) {
    cout << "Total Income: " << income << endl;
    cout << "Total Expenses: " << expense << endl;
    cout << "Net Balance: " << (income - expense) << endl;
    cout << endl;
}

void balanceIN(int inc,int exp){
  
    int balance=inc-exp;
    if(balance<0){
        cout<<"You are in Loss of "<<balance<<" units!"<<endl;
        cout<<" "<<endl;
    }
    else if(balance>0){
      cout<<"You are in Profit of "<<balance<< " units!"<<endl;
      cout<<" "<<endl;
    }
    else
    {
        cout<<"You are breaking even!"<<endl;
        cout<<" "<<endl;
    }
}

bool confirmExit() {
    char choice;
    cout << "Are you sure you want to exit? (y/n): ";
    cin >> choice;
    return (choice == 'y' || choice == 'Y');
}



int main(){

   int income=0,expense=0;
 int choice;

   while(true){
    cout<<"FINANCE MANAGAEMENT SYSTEM"<<endl;
    cout<<"==========================================="<<endl;
    cout<<"1. ADD Income"<<endl;
     cout<<"2. ADD Expense"<<endl;
      cout<<"3. Balance Inquery"<<endl;
       cout << "4. Display Transaction History" << endl;
    cout << "5. Display Summary" << endl;
    cout << "6. EXIT" << endl;
    
      cout<<"Enter Choice: "<<endl;
      cin>>choice;
     
       system("cls");

     switch(choice){
        //add income
       case 1: addIncome(income);
               break;
       //add expense
        case 2: addExpense(expense);
                break;

      //calculate balance
        case 3: balanceIN(income,expense);
                break;
         case 4:displayTransactionHistory();
                break;
         case 5: displaySummary(income, expense);
                break;
      
      case 6: if (confirmExit()){
              cout<<"Thanks for visiting!!"<<endl;
              return 0;} 
              
      
      default: cout<<"Error: Invalid Input"<<endl;
               break;
      }
      
   } 
}

