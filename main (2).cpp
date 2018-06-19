#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
# include<cstdlib>
# include<graphics.h>
# include<fstream>
#include<time.h>
using namespace std;
class card
    {
          char name[30];
          int cvv;
          char cno[12];
          public:
                 card()
                 {
                       name[0]='o';
                       cvv=0;
                       cno[0]='o';
                       }
                 void getdata()
                 {
                      cout<<"enter name\n";
                      cin>>name;
                      cout<<"enter cvv\n";
                      cin>>cvv;
                      cout<<"enter card number\n";
                      cin>>cno;
                      }
                      card(char name1[30],int cvv1,char cno1[12])
                      {
                                strcpy(name,name1);
                                cvv=cvv1;
                                strcpy(cno,cno1);
                                }
                      void putdata()

                           {
                      cout<<"\nname\n";
                      cout<<name;
                      cout<<"\ncvv\n";
                      cout<<cvv;
                      cout<<"\ncard number\n";
                      cout<<cno;
                      }
                      char* retname()
                      {
                            return name;
                            }
                            int retcvv()
                            {
                                  return cvv;
                                  }
                                  char* retcno()
                                  {
                                        return cno;
                                        }
                      };

class user
{
      char name[30];
      char emailid[50];
      char password[30];
      int redeempts;
      public:
             user()
             { redeempts=0;
             }
             void getdata()
             {
                  cout<<"enter your name\n";
                  cin>>name;
                  cout<<"enter your email address\n";
                  cin>>emailid;
                  cout<<"enter your password\n";
                  cin>>password;
                  }
                  void putdata()

                           {
                      cout<<"\n\nNAME\t\t";
                      cout<<name;
                      cout<<"\n\nEMAIL ID\t";
                      cout<<emailid;
                      cout<<"\n\nUSER POINTS\t";
                      cout<<redeempts<<"\n\n";
                      }
             char* retname()
             {
                  return name;
                  }
             char* retpass()
             {
                   return password;
                   }
                   char* retid()
             {
                   return emailid;
                   }
             int retpts()
             {
                 return redeempts;
                 }
                 void modpoints(int x)
                 {
                      redeempts+=x/10;
                      }
}u;
class placetype
{
       char name[40];
       double ratings;
       int price;
       char sprice[20];
       char address[200];
       char type[20];
                     void set_price()
                                            {
                                                 if(price<=250)
                           strcpy(sprice,"ECONOMICAL\t");
                           else if(price<=500&&price>250)
                           strcpy(sprice,"MODERATE\t");
                           else if(price>500)
                           strcpy(sprice,"COSTLY\t\t");
                           }
       public:
              char* ret_name()
              {
                    return name;
                    }
              placetype()
              {
                         name[0]=' ';
                         ratings=0;
                         price=0;
                         sprice[0]=' ';
                         address[0]=' ';
                         type[0]=' ';
                         }
                         placetype(char name1[40],double ratings1,int price1,char address1[200],char type1[20])
                         {
                                        strcpy(name,name1);
                                        ratings=ratings1;
                                        price=price1;
                                        strcpy(address,address1);
                                        strcpy(type,type1);
                                        }
                                        ~placetype()
                                        {
                                                    }
              void put()
              {
              cout<<name<<"\t\t";
                           cout<<ratings<<"\t\t";
                           set_price();
                           cout<<sprice;
                           if(strcmp(type,"SPORTS")==0||strcmp(type,"INDIAN")==0)
                           cout<<type<<"\t\t";
                           else
                           cout<<type<<"\t";
                           cout<<address<<"\t\n\n";
                           }
                           int ret_price()
                           {
                               return price;
                               }
                               char* ret_type()
                               {
                                     return type;
                                     }
                                     double ret_ratings()
                                     {
                                            return ratings;
                                            }
       }p,f[15],s[15];
      // placetype foodplc[15]={placetype("ANAND SWEETS",3.7,200,"84, Jayalakshmi Building","INDIAN"),placetype("SAFFRON       ",4.2,350,"2, Maruthi Towers, 9th B Main","INDIAN"),placetype("TASTE OF BENGAL",3.3,400,"766/1, 9th Main, 2nd Cross","INDIAN"),placetype("KFC\t",4.2,600,"4M- 403, 80 Feet Road, Kalyan Nagar","FAST FOOD"),placetype("BEIJING BITES",3.5,500,"4M 408, 1st Floor, 2nd Block, H.R.B.R layout","FAST FOOD"),placetype( "CRAZY KEBABS",3.5,550,"431, 2nd Main, Near Coffee Day, Kasturi nagar","FAST FOOD"),placetype("CHUNG WAH",3.6,450,"418, 5th Main, 2nd Block, HRBR Layout","FAST FOOD"),placetype("AL AMMANAH",4.4,120,"19, 5th Avenue, 5th Main Road","CONTINENTAL"),placetype("PIZZA HUT",4.3,350,"Plot No.310, AVR Base,HRBR Layout","CONTINENTAL"),placetype("BENITOES",3.5,550,"4C, 315, 3rd Block, Opp JVV","CONTINENTAL"),placetype("DOMINO'S",4.0,250,"5th Main Rd, HRBR Layout Kalyan Nagar","CONTINENTAL"),placetype("MC DONALDS",4.2,200,"Kammanahali Main Rd, HRBR Layout 3rd Block","FAST FOOD"),placetype("SUKH SAGAR",3.8,300,"86, Kammanahalli Main Road, Kalyan Nagar","INDIAN"),placetype("MAST KALANDAR",3.9,350,"CMR Rd, HRBR Layout 2nd Block","INDIAN"),placetype("SUBWAY\t",3.6,325,"401, CMR Rd, HRBR Layout 2nd Block","CONTINENTAL")};
       //placetype shopplc[15]={placetype("FEET FAIR",3.6,300,"No. 108, Kammanahalli","SPORTS"),placetype("ADIDAS   ",4,700,"No. 85, Coles Road","SPORTS"),placetype( "SPORTS ZONE",4.0,700,"#17, Buddha Vihar Road","SPORTS"),placetype("RAKHRA   ",4,425,"No. 669,1st Main,80Feet Road","SPORTS"),placetype("NIKE     ",4.1,800,"No 4M-415. Kammanahalli Road","SPORTS"),placetype("STUDENTS CHOICE",4.5,25,"Kammanahalli Main Rd,cmr road,","STATIONERY"),placetype("SARASWATHI  ",4.2,40,"Shop No.65,Main Road,kammanahalli","STATIONERY"),placetype("PAVAN     ",4.1,60,"Kammanahalli Main Rd, Sena Vihar","STATIONERY"),placetype("7 DAYS   ",4.7,250,"near jal vayu vihar kamannahalli","GENERAL STORES"),placetype("HOMEX    ",3.8,450,"near sena vihar kammanahalli","GENERAL STORES"),placetype("FOOD WORLD",4.6,200,"5th main road HRBR layout","GENERAL STORES"),placetype("F-SQUARE",4.0,750,"No.26, Kammanahalli Main Road","APPARELS"),placetype("RELAINCE TRENDS",4.2,450,"Kammanahalli Main Road,","APPARELS"),placetype("MEGAMART",4.2,475,"Kammanahalli Main Road,","APPARELS"),placetype("VAN HEUSEN",5,650,"No 401,Kammanahalli Main Road","APPARELS")};
int display(int x);
void fsort (int y);
void ssort (int y);
void booking();
void cinema(char name[50],int s);
void offers();
//void book();
void linearsearch(int x,int z);
void start();
int login();
void signup();
void previous();
void writepoints();
void payment(int);
void admin();


int pts;
 ifstream finr;
 ifstream fins;
       int main()
       {
            char t,f='m';
           system("color 79");
           system("cls");
           //login();
           previous();
           
           cout<<"\t\t\t\tWELCOME TO RUSH DIAL SERVICES(kammanahalli) \n\n";
           getch();
           }
           void start()
           {
                char t,f='s';
                          do {
              system ("CLS");
              cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
           int x ,y ,z;
           char user[35],a[35],b[35],c[35];
           cout<<"Hello "<<u.retname()<<"\nEnter what you are searching for \n\n1.Restaurants\n\n2.Shopping outlets\n\n3.Cinema booking\n\n4.Profile\n";
           if (u.retpts()>200)
           {cout<<"\n5.Premium users offers\n";
            cout<<"\n6.logout\n\n";}
            else
            {cout<<"\n5.logout\n\n";}
           cin>>x;
           if(x==1)
           {display(1);}
           else if (x==2)
           { display(2);}
           else if (x==3)
            {display(3);}
            else if (x==4)
            {system("CLS");
                 cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                 u.putdata();
                 cout<<"do you wish to edit any data(y/n)\n";
                 char ch;
                 cin>>ch;
                 if (ch=='y'||ch=='Y')
                 {system("CLS");
                 cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                 cout<<"what dou you wish to edit\n\n 1.email id\n 2.password\n";
                 int n1;
                 cin>>n1;
                 if(n1==1)
                 {
                          system("CLS");
                 cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                 char id[50];
                 cout<<"enter new email id\n";
                 cin>>id;
                 strcpy(u.retid(),id);
                 writepoints();}
                 if(n1==2)
                 {
                          system("CLS");
                 cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                 char pass1[50];
                 char pass2[50];
                 cout<<"enter old password\n";
                 cin>>pass1;
                 if(strcmp(u.retpass(),pass1)==0)
                 { cout<<"\n";}
                 else
                 { cout<<"wrong password\n";
                   exit(0);
                   }
                   cout<<"\nenter new password\n";
                   cin>>pass2;
                 strcpy(u.retpass(),pass2);
                 writepoints();}
                          }}
            else if(u.retpts()>200&&x==5)
            {offers();}
            else if((u.retpts()>200&&x==6)||(u.retpts()<200&&x==5))
            {previous();}
             else if((x>=65&&x<=90)||(x>=97&&x<=112))
             {
                  system("cls");
                                                  cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                                                  cout<<"sorry! wrong option\n";

                                                  }
            else
            {
                           system("cls");
                                                  cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                                                  cout<<"sorry! wrong option\n";

                           }
            cout<<"do you wish to go to home(Y)\n";
            cin>>t;
            }while(t=='y'||t=='Y');
            cout<<"\nthank you for visiting  RUSH DIAL SERVICES(kammanahalli)\n";
            exit(0);
            }

           int display(int x)
           {
               int y=1,z;
                 system("CLS");
                 cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
               if(x==1)
               {cout<<"enter how do you wish to arrange?\n\n1)ratings\n\n2)budget\n\n3)to list according to cuisine or type\n";
               cin>>y;
                if(y==1)
               {
                       fsort(1);}//y=1 end
                     else if(y==2)
                    {
                         fsort(2);
                         }//y=2 end
                         }
                         else if(x==2)
               {cout<<"enter how do you wish to arrange?\n\n1)ratings\n\n2)budget\n\n3)to list according to cuisine or type\n";
               cin>>y;
                if(y==1)
               {
                       ssort(1);}//y=1 end
                     else if(y==2)
                    {
                         ssort(2);
                         }//y=2 end
                         }
                         else if(x==3)
                         {
                              /*cout<<"enter where you want to book\n1.restaurant\n2.cinemas\n";
                              cin>>y;*/
                              booking();
                              }
                         if (y==3)
                         {
                                  system ("CLS");
                                  cout<<"\t\t\t \t\tRUSH DIAL SERVICES(kammanahalli) \n\n";
                              if(x==1)
                              {cout<<"enter \n\n1)indian\n\n2)continental\n\n3)fast food\n";
                              cin>>z;
                              linearsearch(x,z);}//end if
                              else if(x==2)
                              {
                                  cout<<"enter  \n\n1)apparels(casuals,formals,ethnic,kids)\n\n2)sports\n\n3)stationary\n\n4)general stores\n";
                                  cin>>z;
                              linearsearch(x,z);}//end else
                              }
                              if(y!=1&&y!=2&&y!=3)
                              {
                                   system("cls");
                                                  cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                                                  cout<<"sorry! wrong option\n";}

           }
void fsort (int y)
{ system("CLS");
cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
finr.open("restaurant.dat",ios::in|ios::binary);
finr.seekg(0,ios::end);
              int x=finr.tellg();
              x=x/(sizeof(placetype));
              cout<<x<<"\n";
              finr.seekg(0);
              for(int i=0;i<x;i++)
              finr.read((char*)&f[i],sizeof(placetype));
     if (y==1)
     {
              
              
              for(int i=0;i<x;i++)
           {
                   for( int j=0;j<x-1;j++)
                   {
                        if((f[j].ret_ratings())<(f[j+1].ret_ratings()))
                        {
                          placetype temp = f[j];
                          f[j]=f[j+1];
                          f[j+1]= temp;
                          }
                   }
           }
           ofstream foutr("restaurant1.dat",ios::out|ios::binary);
           for(int i=0;i<x;i++)
           {
           foutr.write((char*)&f[i],sizeof(placetype));
           }
           foutr.close();
           ifstream finr1("restaurant1.dat",ios::out|ios::binary);
                   for(int i=0;i<x;i++)
                   {
                           finr1.read((char*)&p,sizeof(placetype));
                           if(i==0){
                                     cout<<"SNO\t NAME\t\t\tRATINGS\t\tPRICE\t\tTYPE\t\tADDRESS\n\n";}
                           cout<<"("<<i+1<<")\t";
                           p.put();
                           }
                           finr1.close();

     }
     else if (y==2)
     {
          //for(int i=0;i<15;i++)
              //finr.read((char*)&f[i],sizeof(placetype));
              for(int i=0;i<x;i++)
           {
                   for( int j=0;j<x-1;j++)
                   {
                        if((f[j].ret_price())>(f[j+1].ret_price()))
                        {
                         placetype temp = f[j];
                          f[j]=f[j+1];
                          f[j+1]= temp;
                          }
                   }
           }
           ofstream foutr("restaurant1.dat",ios::out|ios::binary);
           for(int i=0;i<x;i++)
           {
           foutr.write((char*)&f[i],sizeof(placetype));
           }
           foutr.close();
           ifstream finr1("restaurant1.dat",ios::out|ios::binary);
                   for(int i=0;i<x;i++)
                   {
                           finr1.read((char*)&p,sizeof(placetype));
                           if(i==0){
                                    cout<<"SNO\t NAME\t\t\tRATINGS\t\tPRICE\t\tTYPE\t\tADDRESS\n\n";}
                           cout<<"("<<i+1<<")\t";
                           p.put();
                           }
                           finr1.close();
     }
     else if(y!=1&&y!=2)
                              {
                                   system("cls");
                                                  cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                                                  cout<<"sorry! wrong option\n";}
                                                  finr.close();


}//close function sort
void linearsearch (int x,int z)
{

     system ("CLS");
     cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
    cout<<"NAME\t\t\tRATINGS\t\tPRICE\t\tTYPE\t\tADDRESS\n\n";
     if(x==1)
     {
             finr.open("restaurant.dat",ios::in|ios::binary);
             if(z==1)
             {
                     finr.seekg(0);
                     for(int i=0;i<15;i++)
                     {
                             finr.read((char*)&p,sizeof(placetype));
                             if(strcmpi(p.ret_type(),"indian")==0)
                             {
                             p.put();
                              }//end if
                     }//end for
             }// end if for z=1
             else if(z==2)
             {
                     finr.seekg(0);
                     for(int i=0;i<15;i++)
                     {
                             finr.read((char*)&p,sizeof(placetype));
                             if(strcmpi(p.ret_type(),"continental")==0)
                             {
                             p.put();
                              }//end if
                     }//end for
             }// end if for z=2
             else if(z==3)
             {
                     finr.seekg(0);
                     for(int i=0;i<15;i++)
                     {
                             finr.read((char*)&p,sizeof(placetype));
                             if(strcmpi(p.ret_type(),"fast food")==0)
                             {
                             p.put();
                              }//end if
                     }//end for
             }// end if for z=3
             else if(z!=1||z!=2||z!=3)
             {
                  system("cls");
                                                  cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                                                  cout<<"sorry! wrong option\n";}
                                                  finr.close();
     }//end x=1
     if(x==2)
     {
             fins.open("store.dat",ios::in|ios::binary);
             if(z==1)
             {
                     for(int i=0;i<15;i++)
                     {
                             fins.read((char*)&p,sizeof(placetype));
                             if(strcmpi(p.ret_type(),"apparels")==0)
                             {
                             p.put();
                              }//end if
                     }//end for
             }// end if for z=1
             else if(z==2)
             {
                     for(int i=0;i<15;i++)
                     {
                             fins.read((char*)&p,sizeof(placetype));
                             if(strcmpi(p.ret_type(),"sports")==0)
                             {
                             p.put();
                              }//end if
                     }//end for
             }// end if for z=2
             else if(z==3)
             {
                     for(int i=0;i<15;i++)
                     {
                             fins.read((char*)&p,sizeof(placetype));
                             if(strcmpi(p.ret_type(),"stationery")==0)
                             {
                             p.put();
                              }//end if
                     }//end for
             }// end if for z=3
             else if(z==4)
             {
                     for(int i=0;i<15;i++)
                     {
                             fins.read((char*)&p,sizeof(placetype));
                             if(strcmpi(p.ret_type(),"general stores")==0)
                             {
                             p.put();
                              }//end if
                     }//end for
             }// end if for z=4
             else if(z!=1||z!=2||z!=3||z!=4)
             {
                  system("cls");
                                                  cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                                                  cout<<"sorry! wrong option\n";}
                                                  fins.close();
     }//end x=2
}//end function
void ssort (int y)
{ system("CLS");

cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
fins.open("store.dat",ios::in|ios::binary);
int k;
fins.seekg(0,ios::end);
              int x=fins.tellg();
              x=x/(sizeof(placetype));
              cout<<x<<"\n";
              fins.seekg(0);
              for(int i=0;i<x;i++)
              fins.read((char*)&s[i],sizeof(placetype));
     if (y==1)
     {
              //for(int i=0;i<15;i++)
              //fins.read((char*)&s[i],sizeof(placetype));
              for(int i=0;i<x;i++)
           {
                      placetype smal = s[i];
                      k=i;
                      for( int j=i+1;j<x;j++)
                      {
                           if((s[j].ret_ratings())>(smal.ret_ratings()))
                         {
                          smal=s[j];
                          k=j;
                          }
                   }
                   placetype temp=s[i];
                   s[i] = smal;
                   s[k] = temp;
           }
            ofstream fouts("store1.dat",ios::out|ios::binary);
           for(int i=0;i<x;i++)
           {
           fouts.write((char*)&s[i],sizeof(placetype));
           }
           fouts.close();
           ifstream fins1("store1.dat",ios::out|ios::binary);
                   for(int i=0;i<x;i++)
                   {
                           fins1.read((char*)&p,sizeof(placetype));
                           if(i==0){
                                    cout<<"SNO\t NAME\t\t\tRATINGS\t\tPRICE\t\tTYPE\t\tADDRESS\n\n";}
                           cout<<"("<<i+1<<")\t";
                           p.put();
                           }
                           fins1.close();
     }
     else if (y==2)
     {
          //for(int i=0;i<x;i++)
              //fins.read((char*)&s[i],sizeof(placetype));
              for(int i=0;i<x;i++)
           {
                      placetype smal=s[i];
                      k=i;
                   for( int j=i+1;j<x;j++)
                   {
                        if((s[j].ret_price())<(smal.ret_price()))
                        {
                         smal=s[j];
                         k=j;
                          }
                   }
                   placetype temp=s[i];
                   s[i]=smal;
                   s[k]=temp;
           }
           ofstream fouts("store1.dat",ios::out|ios::binary);
           for(int i=0;i<x;i++)
           {
           fouts.write((char*)&s[i],sizeof(placetype));
           }
           fouts.close();
           ifstream fins1("store1.dat",ios::out|ios::binary);
                   for(int i=0;i<x;i++)
                   {
                           fins1.read((char*)&p,sizeof(placetype));
                           if(i==0){
                                    cout<<"SNO\t NAME\t\t\tRATINGS\t\tPRICE\t\tTYPE\t\tADDRESS\n\n";}
                           cout<<"("<<i+1<<")\t";
                           p.put();
                           }
                           fins1.close();
     }
     else if(y!=1||y!=2)
                              {
                                   system("cls");
                                                  cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                                                  cout<<"sorry! wrong option\n";}
fins.close();

}//close function ssort

void booking()
{
     int z;
     /*
     if(y==1)
     {
              /*system("CLS");
              cout<<"\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                  cout<<"choose restaurant where you wish to reserve seats\n";
                  for(int i=0;i<15;i++)
                  {
                          cout<<i+1<<" "<<foodplc[i].ret_name()<<"\n";
                  }

     cin>>z;
     system("cls");
     cout<<"\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
     cout<<"still developing\n";
     }*/
     
          int n,s;
          system("cls");
          cout<<"choose the theatre where you wish to book tickets\n";
          cout<<"\n1.Mukunda\n\n2.Everest\n\n3.Anand theatre\n\n4.Fun cinemas\n\n";
          cin>>z;
          if(z==1)
          {
                  system("cls");
                  cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                  cout<<"enter the number of seats required\n";
                  cin>>s;
                  char name[50]={"Booking-Mukunda"};
                  cinema(name,s);
                  return;

                  }
                            else if(z==2)
          {
                            system("cls");
                  cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                  cout<<"enter the number of seats required\n";
                  cin>>s;
                  char name[50]={"Booking-Everest"};
                  cinema(name,s);
                  return;
                  }
                            else if(z==3)
          {
                            system("cls");
                  cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                  cout<<"enter the number of seats required\n";
                  cin>>s;
                  char name[50]={"Booking-Anand Theatre"};
                  cinema(name,s);
                  return;
                  }
                            else if(z==4)
          {
                            system("cls");
                  cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                  cout<<"enter the number of seats required\n";
                  cin>>s;
                  char name[50]={"Booking-Fun cinemas"};
                 cinema(name,s);
                 return;
                  }
                  else
                  {
                      system("cls");
                      cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                      cout<<"sorry! wrong option\n";
                      }
     
     }
void offers()
{
     int y;
     go:
     system ("CLS");
      cout<<"\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
     cout<<"the current offers available this week are at\n1. KFC\n\n2.pizza hut\n\n3.dominos\n\n4.mc donalds\n\n5.fun cinemas\n\n6.exit\n";
     cin>>y;
     int flag=1;
     if(y==1)
     {
             initwindow(500,220,"KFC voucher");
             readimagefile("kfc.jpeg",1,1,490,190);
             char a[10]="FINISH";
             outtextxy(13,192,a);
             rectangle(10,190,60,210);
             rectangle(420,190,484,210);
             char b[10]="REDEEM";
             outtextxy(423,192,b);
             int x=0,z=0,n;
             while(flag)
             {
              if(ismouseclick(WM_LBUTTONDOWN))
     {
                                     getmouseclick(WM_LBUTTONDOWN,x,z);
                                     flag=0;

     }
     clearmouseclick(WM_LBUTTONDOWN);
     if(x<60&&x>10&&z<210&&z>190)
     {
                                 closegraph();
                                 goto go;
                                 }


     else if(x<484&&x>420&&z<210&&z>190)
     {
          closegraph();
          u.modpoints(-500);
          writepoints();
          system ("CLS");
          cout<<"\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
          cout<<"your coupon number is:\t"<<rand()<<"\n";
          return;}
          else
          {
              flag=1;
              }
          }
     }
     else if(y==2)
      {
             initwindow(500,220,"PIZZA HUT voucher");
             readimagefile("pizzahut.jpg",1,1,490,190);
             char a[10]="FINISH";
             outtextxy(13,192,a);
             rectangle(10,190,60,210);
             rectangle(420,190,484,210);
             char b[10]="REDEEM";
             outtextxy(423,192,b);
             int x=0,z=0,n;
             while(flag)
             {
              if(ismouseclick(WM_LBUTTONDOWN))
     {
                                     getmouseclick(WM_LBUTTONDOWN,x,z);
                                     flag=0;

     }
     clearmouseclick(WM_LBUTTONDOWN);
     if(x<60&&x>10&&z<210&&z>190)
     {
                                 closegraph();
                                 goto go;
                                 }


     else if(x<484&&x>420&&z<210&&z>190)
     {
          closegraph();
          u.modpoints(-1000);
          writepoints();
          system ("CLS");
          cout<<"\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
          cout<<"your coupon number is:\t"<<rand()<<"\n";
          return;
          }
          else
          {
              flag=1;
              }
          }
     }
     else if(y==3)
      {
             initwindow(500,220,"DOMINOS voucher");
             readimagefile("dominos.jpg",1,1,490,190);
             char a[10]="FINISH";
           outtextxy(13,192,a);
             rectangle(10,190,60,210);
             rectangle(420,190,484,210);
             char b[10]="REDEEM";
             outtextxy(423,192,b);
             int x=0,z=0,n;
             while(flag)
             {
              if(ismouseclick(WM_LBUTTONDOWN))
     {
                                     getmouseclick(WM_LBUTTONDOWN,x,z);
                                     flag=0;

     }
     clearmouseclick(WM_LBUTTONDOWN);
     if(x<60&&x>10&&z<210&&z>190)
     {
                                 closegraph();
                                 goto go;
                                 }


     else if(x<484&&x>420&&z<210&&z>190)
     {
          closegraph();
          u.modpoints(-1000);
          writepoints();
          system ("CLS");
          cout<<"\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
          cout<<"your coupon number is:\t"<<rand()<<"\n";
          return;
          }
          else
          {
              flag=1;
              }
          }
     }
     else if(y==4)
      {
             initwindow(500,220,"MC DONALDS voucher");
             readimagefile("mc donalds.jpg",1,1,490,190);
             char a[10]="FINISH";
           outtextxy(13,192,a);
             rectangle(10,190,60,210);
             rectangle(420,190,484,210);
             char b[10]="REDEEM";
             outtextxy(423,192,b);
             int x=0,z=0,n;
             while(flag)
             {
              if(ismouseclick(WM_LBUTTONDOWN))
     {
                                     getmouseclick(WM_LBUTTONDOWN,x,z);
                                     flag=0;

     }
     clearmouseclick(WM_LBUTTONDOWN);
     if(x<60&&x>10&&z<210&&z>190)
     {
                                 closegraph();
                                 goto go;
                                 }


     else if(x<484&&x>420&&z<210&&z>190)
     {
          closegraph();
          u.modpoints(-500);
          writepoints();
          system ("CLS");
          cout<<"\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
          cout<<"your coupon number is:\t"<<rand()<<"\n";
          return;
          }
          else
          {
              flag=1;
              }
          }
     }
     else if(y==5)
      {
             initwindow(500,220,"cinema voucher");
             readimagefile("fun cinema.jpg",1,1,490,190);
             char a[10]="FINISH";
           outtextxy(13,192,a);
             rectangle(10,190,60,210);
             rectangle(420,190,484,210);
             char b[10]="REDEEM";
             outtextxy(423,192,b);
             int x=0,z=0,n;
             while(flag)
             {
              if(ismouseclick(WM_LBUTTONDOWN))
     {
                                     getmouseclick(WM_LBUTTONDOWN,x,z);
                                     flag=0;

     }
     clearmouseclick(WM_LBUTTONDOWN);
     if(x<60&&x>10&&z<210&&z>190)
     {
                                 closegraph();
                                 goto go;
                                 }


     else if(x<484&&x>420&&z<210&&z>190)
     {
          closegraph();
          u.modpoints(-1000);
          writepoints();
          system ("CLS");
          cout<<"\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
          cout<<"your coupon number is:\t"<<rand()<<"\n";
          return;
          }
          else
          {
              flag=1;
              }
          }
     }
     if(y==6)
     {
             system("cls");
             cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
             return;
             }
     else
     {
           system("cls");
                                                  cout<<"\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                                                  cout<<"sorry! wrong option\n";
     }
     }

     void cinema(char name[50],int p)
{
     initwindow(515,345,(name));
      int poly[8]={0,0,515,0,515,215,0,215};

                     setcolor(12);

                    // rectangle(10,10,505,180);
                     setfillstyle(1,12);
                      fillpoly(4,poly);
                      int poly1[8]={0,210,515,210,515,315,0,315};

                     setcolor(11);

                    // rectangle(10,10,505,180);
                     setfillstyle(1,11);
                      fillpoly(4,poly1);
                      char a[20]="SILVER.Rs.160";
                      outtextxy(10,5,a);
                      setcolor(12);
                      char b[20]="GOLD.Rs.200";
                      outtextxy(10,205,b);
     for(int y=25;y<300;y+=25)
     {
             for(int x=10;x<500;x+=25)
             {
                     if(y==200||x==260||x==235)
                     {
                              //y-=2;
                              continue;
                              }
                              setcolor(15);

                     rectangle(x,y,x+20,y+20);
                     }
                     }
                     rectangle(130,0,390,20);
                     char abc[20]="SCREEN 1";
                    outtextxy(230,2,abc);
                     int x,y,n=0,g=0,s=0,price,flag=1,z[10][20];
                     for(int i=0;i<10;i++)
                     {
                             for(int j=0;j<20;j++)
                             {
                                     z[i][j]=0;
                                     }
                                     }
                     setcolor(WHITE);
                     char text[10]="FINISH";
                     outtextxy(13,320,text);
                     rectangle(10,320,60,335);
int flag1=1;
while(g+s<p)
{//cout<<"\ng+s"<<g+s;
clearmouseclick(WM_LBUTTONDOWN);
while(flag1)
{

                      if(ismouseclick(WM_LBUTTONDOWN))
     {
                                     getmouseclick(WM_LBUTTONDOWN,x,y);
                                    // clearmouseclick(WM_LBUTTONDOWN);
                                    n++;
                                     flag1=0;
     }
else
{
    x=0;y=0;}
    clearmouseclick(WM_LBUTTONDOWN);
for(int j=25;j<300;j+=25)
     {
             for(int i=10;i<500;i+=25)
             {
                     if(j==200||i==260||i==235)
                     {
                              continue;
                              }
                             
              if(x<=i+20&&x>=i&&y<=j+20&&y>=j)
     {//cout<<"if2\n";
              z[j/25][i/25]=1;
              if(y>200)
              {
                       g+=1;
                       }
                       else if(y<200)
                       {
                            s+=1;
                            }
                     int poly2[8]={i,j,i+20,j,i+20,j+20,i,j+20};
                     setcolor(BLACK);
                     setfillstyle(SOLID_FILL,BLACK);
                      fillpoly(4,poly2);
                      }
                      }
                      }
                      }
                              flag1=1;
}
flag1=0;
                      int flag2=1;
                      go:
                      while(flag2)
                      {

                      if(ismouseclick(WM_LBUTTONDOWN))
     {
                                     getmouseclick(WM_LBUTTONDOWN,x,y);
                                     flag2=0;
     }
     clearmouseclick(WM_LBUTTONDOWN);
     if(x>10&&x<60&&y>320&&y<335)
     {
                                 closegraph();
                                 price=g*200+s*160;
                                 system("cls");
                                 cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                                 cout<<"\nYou have selected "<<g<<" gold class seats and "<<s<<" silver class seats\n";
                                 cout<<"Silver seat = Rs160/-\nGold seat = Rs200/-";
                                 cout<<"\nYour total cost is Rs"<<price<<"\n";
                                 cout<<"proceeding to payment...\n";
                                 system("pause");
                                 payment(price);
                                 writepoints();
                                 if(u.retpts()>200)
                                 {
                                  system("cls");
                                  cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
                                  cout<<"YOUR USER POINTS ARE "<<u.retpts()<<"\n\n";
                                  cout<<"CONGRATULATIONS YOU ARE NOW A PREMIUM USER\n\nYOU CAN NOW AVAIL OUR SPECIAL OFFERS "<<"\n\n";
                                 }}
                                 else
                                 {
                                     flag2=1;
                                     goto go;}

}
flag2=0;
}
void previous()
{    int pts ;
     char c='p';
    initwindow(500,500,"RUSH DIAL SERVICES");
    /*int poly[8]={0,0,500,0,500,500,0,500};
    rectangle(0,0,500,500);
    setfillstyle(SOLID_FILL,RED);
    fillpoly(RED,poly);*/
    char a[20]="welcome to";
   outtextxy(220,50,a);
    setcolor(YELLOW);
    settextstyle(BOLD_FONT,HORIZ_DIR,-70);
//    settextjustify(CENTER_TEXT, TOP_TEXT);
    for(int i=500,j=500;i>=80&&j>=90;i-=3,j-=3)
    {delay(10);
    char a[20]="RUSH DIAL";
    outtextxy(i,100,a);
    char b[20]="SERVICES";
    outtextxy(j,200,b);
}
   /* for(int i=-420;i<=90;i++)
    {delay(1);

}*/
    settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
    setcolor(WHITE);
    rectangle(75,395,135,420);
    char abc[10]="ADMIN";
    outtextxy(80,400,a);
    rectangle(345,395,415,420);
    char b[10]="GUEST";
    outtextxy(350,400,b);
go:
    int flag=1,x,y,flag1=1,x1,y1;

    while(flag)
    {
              if(ismouseclick(WM_LBUTTONDOWN))
     {
                                     getmouseclick(WM_LBUTTONDOWN,x,y);
                                     flag=0;
     }

     else
     {
         x=0;y=0;}
         }
     clearmouseclick(WM_LBUTTONDOWN);
     if(x<135&&x>75&&y<420&&y>395)
     {
                                  closegraph();
                                 admin();
                                 }
     else if(x<415&&x>345&&y<420&&y>395)
     {
     							 char a[10]="LOGIN";
                                 outtextxy(80,400,a);
                                 char b[10]="SIGNUP";
                                 outtextxy(350,400,b);
                                 while(flag1)
    {
              if(ismouseclick(WM_LBUTTONDOWN))
     {
                                     getmouseclick(WM_LBUTTONDOWN,x1,y1);
                                     flag1=0;
     }

     else
     {
         x=0;y=0;}
         }
         if(x1<135&&x1>75&&y1<420&&y1>395)
         {
                                          closegraph();
                                 pts=login();
                                 //cout<<"login\n";
                                 start();
                                 //cout<<"start\n";
                                 }
                                 else if(x1<415&&x1>345&&y1<420&&y1>395)
                                 {
                                      closegraph();
                                 signup();
                                 //cout<<"signup\n";
                                 cout<<"Please login to continue \n";
                                 pts=login();
                                 //cout<<"login\n";
                                 start();
                                 //cout<<"start\n";
                                 }
                                 }
                                 else
                                 goto go;

    getch();
}
/*void next(char s)
{
     char c='n';
     cout<<"hello\n";
     cout<<"back?\n";
     if(s=='p')
     {
               previous();
               }
               return;
               }*/
               int  login()
{    system("cls");
     cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
     cout<<"Please login:\n";
     int choice;
     ifstream fin("customer.dat",ios::in|ios::binary);
     char name[30],password[30];
     cout<<"enter your name\n";
     cin>>name;
     cout<<"enter your password\n";
     cin>>password;
     /*char p;
     int i=0;
     while(p!=13)
     {            cout<<"while";
            p=getch();
            cout<<"after getch()";
            cout<<p;
            password[i]=p;
            /*if(int(p)==13)
            break;*/
        /*    if(int(p)==8)
            {
                         cout<<"if";
                         i--;
                         /*system("cls");
                         cout<<"enter\n";
                         for(int j=0;j<i;j++)
                         cout<<"*";*/
                         
          /*  else
            {
                cout<<"else";
            i++;
            cout<<"*";
            }
           }
           cout<<"after while";*/
     fin.seekg(0);
     while(!fin.eof())
     {
     fin.read((char*)&u,sizeof(u));
     if((strcmp(name,u.retname())==0)&&(strcmp(password,u.retpass())==0))
     {
            
             
             return  u.retpts();
                                 }
     }
     fin.close();
     cout<<"sry user not registered \n";
     cout<<"continue(Y/N)\n";
     char ch;
     cin>>ch;
     if(ch=='y'||ch=='Y')
     {previous();}
     else
     exit(0);
}//end of function
void signup()
{
     system("cls");
     cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
     cout<<"Please signup:\n";
     u.getdata();
     ofstream fout("customer.dat",ios::app|ios::binary);
     fout.write((char*)&u,sizeof(u));
     cout<<"id has been created\n";
     fout.close();
}
void writepoints()
{
     ofstream fout("newcustomer.dat",ios::binary|ios::ate);
     ifstream fin("customer.dat",ios::binary|ios::in);
     user u1;
     int flag=0;
     int pos=0;
     while(fin)
     {
             
             fin.read((char*)&u1,sizeof(user));
             if(fin.eof())
             break;

             if(strcmpi(u1.retname(),u.retname())==0)
             {
                    fout.write((char*)&u,sizeof(user));
             }
             else
             {
                 fout.write((char*)&u1,sizeof(user));
                 }           
     }
     fin.clear();
     fin.seekg(0);
     fin.close();
     fout.close();
     remove("customer.dat");
     rename("newcustomer.dat","customer.dat");
     }
void payment(int price)
{
     system("cls");
     cout<<"\t\t\t WELCOME TO PAY PAL(OFFICIAL PAYMENT PARTNER FOR RUSH DIAL SERVICES(kammanahalli)) \n\n";
     card c,c1;
     cout<<"enter you details for credit card authentication\n";
     c.getdata();
     int flag=0;
     ifstream fin("creditcard.dat",ios::binary|ios::in);
     while(!fin.eof())
     {
                    fin.read((char*)&c1,sizeof(card));
                    //c1.putdata();
                    if(strcmp(c.retname(),c1.retname())==0&&c.retcvv()==c1.retcvv()/*&&strcmp(c.retcno(),c1.retcno())==0*/)
                    {
                                        system("cls");
                                        cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";                                                                                   
                                        cout<<"\npayment succesfull...\n";
                                        system("pause");
                                        u.modpoints(price);
                                        cout<<"your points are"<<u.retpts()<<"\n";
                                        flag=1;
                                        break;
                                        }
                                        }
                                        fin.close();
                                        if(flag==0)
                                        {
                                                   cout<<"sorry user not registered!!\n";
                                                   }
                                                   return;
                                                   }
void admin()
{
     system("cls");
     cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
     char ch;
     cout<<"Please login:\n";
     int pass ;
     cout<<"enter your password\n";
     cin>>pass;
     if(pass==1)
     { cout<<"\n";}
     else
     {cout<<"\nsry not registered\n";
      previous();}
     system("cls");
     cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
     do{
        system("cls");
     cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";               
     cout<<"\n1.restaurants\n2.shopping outlets\n3.exit\n";
     int x;
     cin>>x;
     if(x==1)
     {       system("cls");
     cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
     cout<<"1.add\n\n2.delete\n\n3.exit\n\n";
     int y;
     cin>>y;
     
     if(y==1)
     { char name[40];
       double ratings;
       int price;
       char address[200];
       char type[20];
       cout<<"enter name\n";
       cin.get();
       cin.getline(name,40);
       cout<<"enter ratings\n";
       cin>>ratings;
       cout<<"enter price\n";
       cin>>price;
       cout<<"enter address\n";
       cin.get();
       cin.getline(address,200);
       cout<<"enter type\n";
       cin.getline(type,20);
       placetype r(name,ratings,price,address,type);
       ofstream fout("restaurant.dat",ios::app|ios::binary);
       fout.write((char*)&r,sizeof(placetype));
       fout.close();}
       if(y==2)
       {
           placetype r1;
           char name[20];
           ofstream fout("newrest.dat",ios::out|ios::binary);
           ifstream fin("restaurant.dat",ios::in|ios::binary);
           cout<<"enter name of restaurant you wish to delete\n";
           cin.get();
           cin.getline(name,20);
           fin.seekg(0);
           while(fin)
           {
             
             fin.read((char*)&r1,sizeof(placetype));
             if(fin.eof())
             break;
                            if(strcmpi(r1.ret_name(),name)!=0)
                            {fout.write((char*)&r1,sizeof(placetype));
                            }
                                }
     fin.close();
     fout.close();
     remove("restaurant.dat");
     rename("newrest.dat","restaurant.dat");
     }//end of y=2  
     if(y==3)
     {system("cls");
     cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";}                 
     }//end of x=1
     if(x==2)
     {   system("cls");
     cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";
     cout<<"1.add\n\n2.delete\n\n3.exit\n\n";
     int y;
     cin>>y;
     
     if(y==1)
     { char name[40];
       double ratings;
       int price;
       char address[200];
       char type[20];
       cout<<"enter name\n";
       cin.get();
       cin.getline(name,40);
       cout<<"enter ratings\n";
       cin>>ratings;
       cout<<"enter price\n";
       cin>>price;
       cout<<"enter address\n";
       cin.get();
       cin.getline(address,200);
       cout<<"enter type\n";
       cin.getline(type,20);
       placetype s(name,ratings,price,address,type);
       ofstream fout("store.dat",ios::app|ios::binary);
       fout.write((char*)&s,sizeof(placetype));
       fout.close();}
       if(y==2)
       {
           placetype s1;
           char name[20];
           ofstream fout("newstore.dat",ios::out|ios::binary);
           ifstream fin("store.dat",ios::in|ios::binary);
           cout<<"enter name of store you wish to delete\n";
           cin.get();
           cin.getline(name,20);
           fin.seekg(0);
           while(fin)
           {
             
             fin.read((char*)&s1,sizeof(placetype));
             if(fin.eof())
             break;
                            if(strcmpi(s1.ret_name(),name)!=0)
                            {fout.write((char*)&s1,sizeof(placetype));
                            }
                                }
     fin.close();
     fout.close();
     remove("store.dat");
     rename("newstore.dat","store.dat");
     }//end of y=2  
     if(y==3)
     {system("cls");
     cout<<"\t\t\t\t\t RUSH DIAL SERVICES(kammanahalli) \n\n";}                 
     }//end of x=2
     if(x==3)
     {previous();}
     cout<<"do you wish to go to home(Y)\n";
     cin>>ch;
     }while(ch=='y'||ch=='Y');
}  
      
                                                        
                                                   
                                        
                                        





