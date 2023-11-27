#include <iostream>

using namespace std; 

int main(){
cout<<"\t Добро пожаловать! \n\t Выберите опцию:"; //Welcome
//Menu

start:
cout<<"\t\n1.Просмотреть баланс ";
cout<<"\t\n2.Снять деньги с карты ";
cout<<"\t\n3.Смена PIN кода ";
cout<<"\t\n4.Выход";
cout<<"\t\n";
int balance = 4000;
int option;
cin >> option;
int pin;
switch (option)
//Передвижение по меню
{
case 1/*Просмотр баланса */:
    cout << "\t\n Введите PIN:";
    //Выводим если пароль правильный
    cin>>pin;
    if (pin==0000)
    {
        cout << "\t\n Ваш баланс:" << balance;
        goto start;
    }
    else
    //В случае если пароль неправильный
    {   
        cout<<"\t\nНеверный PIN,";
        cout<<"\t\nВведите еще раз:";
        cin>>pin;
        if (pin != 0000)
        {
            cout<<"\t\nОтказано в доступе";
            break;
        }
        
    }
    
    goto start;

case 2: //Снятие денег
    cout << "\t\n Введите PIN:";
    cin>>pin;
    if (pin == 0000){
    cout<<"\t\nВведите сумму для снятия денег с карты:";
    int sum;
    cin>>sum;
    cout<<"\t\nОставшаяся сумма на балансе:"<<balance-sum <<"\t\nВы сняли:"<<sum<<endl;
    goto start;}
    else { //Если пароль неправильный  
        cout<<"\t\nНеверный PIN,";
        cout<<"\t\nВведите еще раз:";
        cin>>pin;
        if (pin != 0000)
        {
            cout<<"\t\nОтказано в доступе";
            break;
        }
        
    }

case 3: //Замена Пароля
    cout<<"\t\nВведите старый PIN:";
    cin>>pin;
    if(pin == 0000){
        cout << "\t\nВведите новый PIN:";
        int newpin;
        cin >> newpin;
        newpin == pin;
        goto start;
    }
    
    else {  //Если пароль неправильный
        cout<<"\t\nНеверный PIN,";
        cout<<"\t\nВведите еще раз:";
        cin>>pin;
        if (pin != 0000)
        {
            cout<<"\t\nОтказано в доступе";
            break;
        }
        
    }
case 4:
    cout<<"\t\nВыход из системы";
    break;
default:
    {
    for( int i=0;i<3;i++){
    cout<<"\n\tERROR";}}
    goto start;
}
return 0;
}
