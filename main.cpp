#include<Empolyee.h>
#include <Department.h>
#include <Medicine.h>
#include <Nurse.h>
#include<Doctor.h>
#include<Patiant.h>
#include <iostream>
#include<windows.h>
#include<conio.h>
#include "../include/color.hpp"
using namespace std;
void Doctor_Optians(Doctor& doct);
void   Nurses_Optians(Nurse& nr);
void  Medicines_Optians(Medicine& md);
void Patients_Optians( Patiant& pt);
void Department_Optians(Department& dpr);
int main()
{

    Doctor doct;
    Nurse nr;
    Department dpr;
    Medicine md;
    Patiant pt;


    while(true){
            cout <<dye::aqua("-------- Welcome to Sohag Hospital -----------") <<endl;
  cout  <<endl  <<endl;
       cout<< dye::green("1 - Doctors      2 -  Nurses ")<<endl;
       cout<<dye::yellow("3 - Patient      4 -  Department")<<endl;
       cout<<dye::vanilla("5 - Medicines    6 -  Exit")<<endl;
       cout<<dye::grey("Enter option ")<<endl;
        int x;
        cin>>x;
        switch(x){
    case 1:
        Doctor_Optians(doct);

        break;
    case 2:
        Nurses_Optians(nr);
        break;

        case 3:
            Patients_Optians(pt);
        break;

        case 4:

            Department_Optians(dpr);
        break;
        case 5:
            Medicines_Optians(md);
        break;
        case 6:
            return 0;
        break;
        default:
        cout<< "Enter Correct Choice "<<endl;

        }
    }

    return 0;
}

    void Doctor_Optians(Doctor& doct){

    system("cls");
        cout<<"1- Add     2 - Edit "<<endl;
        cout<<"3-Display  4 - Delete"<<endl;
        cout<<"5-Back "<<endl;
       cout<<"Enter Your Choice"<<endl;
        int x;
        cin>>x;
        switch(x){
    case 1:
            getch();
    system("cls");
        doct.Add_Doc();

        break;
    case 2:
              getch();
    system("cls");
        int m;
            doct.display();
            cout<<"Enter number of Doctor you need edit"<< endl;
            cin>>m;
            doct.Edit_Doc(m-1);
        break;

        case 3:
             getch();
             system("cls");
            doct.display();
        break;

        case 4:
            getch();
            system("cls");
            int y;
            doct.display();
            cout<<"Enter number of Doctor"<< endl;
            cin>>y;
            doct.Delete(y-1);
        break;
        case 5:
        getch();
        system("cls");
        break;
        case 6:
            return ;
        break;
        default:
        cout<<"IN Correct choice "<<endl;

    }getch();
    system("cls");
    }

   void Nurses_Optians( Nurse& nr){

    system("cls");
        cout<<"1 - Add  2 -  Edit "<<endl;
        cout<<"3 - Display  4 - Delete "<<endl;
        cout<<"5 - Back"<<endl;
       cout<<"Enter Your choice"<<endl;
        int x;
        cin>>x;
        switch(x){
    case 1:
        getch();
        system("cls");
        nr.Add_Nurse();
        break;
    case 2:
        getch();
        system("cls");
        int m;
            nr.display();
            cout<<"Enter number of nurse you need edit"<< endl;
            cin>>m;
            nr.Edit_Nurse(m-1);
        break;

        case 3:
             getch();
            system("cls");
            nr.display();
        break;

        case 4:
             getch();
             system("cls");
            int y;
            nr.display();
            cout<<"Enter number of nurse"<< endl;
            cin>>y;
            nr.Delete(y-1);
        break;
        case 5:

        break;
        default:
        cout<<"IN Correct choice "<<endl;

    }getch();
    system("cls");
    }
   void Patients_Optians( Patiant& pt){

    system("cls");
        cout<<"1 - Add  2 -  Edit "<<endl;
        cout<<"3 - Display  4 - Back"<<endl;
       cout<<"Enter Your choice"<<endl;
      int x;
        cin>>x;
        switch(x){
    case 1:
         getch();
        system("cls");
        pt.Add_Patian();
        break;
    case 2:
         getch();
         system("cls");
        int m;
            pt.display();
            cout<<"Enter number of patiant you need edit"<< endl;
            cin>>m;
            pt.Edit_Patien(m-1);
        break;

        case 3:
            getch();
            system("cls");
            pt.display();
        break;

        case 4:

        break;


        default:
        cout<<"IN Correct choice "<<endl;

    }getch();
    system("cls");
    }
   void Medicines_Optians(Medicine& md){

    system("cls");
        cout<<"1 - Add  2 -  Edit "<<endl;
        cout<<"3 - Display  5 - Back"<<endl;
       cout<<"Enter Your choice"<<endl;
        int x;
        cin>>x;
        switch(x){
    case 1:
        getch();
        system("cls");
        md.Add_Medicine();
        break;
    case 2:
         getch();
         system("cls");
        int m;
            md.display();
            cout<<"Enter number of medicine you need edit"<< endl;
            cin>>m;
            md.Edit_Medicine(m-1);
        break;

        case 3:
            getch();
            system("cls");
            md.display();
        break;

        case 4:
            getch();
            system("cls");
            int y;
            md.display();
            cout<<"Enter number of Doctor"<< endl;
            cin>>y;
            md.Delete(y-1);
        break;
        case 5:
        break;

        default:
        cout<<"IN Correct choice "<<endl;

    }getch();
    system("cls");}
   void Department_Optians(Department& dpr){
    system("cls");
        cout<<"1 - Add  2 -  Edit "<<endl;
        cout<<"3 - Display  5 - Back"<<endl;
       cout<<"Enter Your choice"<<endl;
       int x;
        cin>>x;
        switch(x){
    case 1:
              getch();
    system("cls");
        dpr.Add_Department();
        break;
    case 2:
              getch();
    system("cls");
        int m;
            dpr.display();
            cout<<"Enter number of Department you need edit"<< endl;
            cin>>m;
            dpr.Edit_Department(m-1);
        break;

        case 3:
                  getch();
    system("cls");
            dpr.display();
        break;

        case 4:
                  getch();
    system("cls");
            int y;
            dpr.display();
            cout<<"Enter number of department"<< endl;
            cin>>y;
            dpr.Delete(y-1);
        break;
        case 5:
        break;

        default:
        cout<<"IN Correct choice "<<endl;

    }getch();
    system("cls");}

