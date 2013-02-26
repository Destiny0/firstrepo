
#include <iostream>
#include <string>
using namespace std;

class tovar
{
private:
 string name;
 int n;
 double cost;
public:
tovar ()
{
  n=0;
  cost=0;
  name="";
};
 void in(int n, double cost, string name);
 double proc(double proc);
};
void tovar::in(int n, double cost, string name)
 {
  this->n=n;//устанавливает название, колво.
  this->cost=cost;
  this->name=name;
 }
double tovar::proc(double proc)
{
cost=cost*(1+proc*0.01);
return cost*n;
}
void main()
{
 setlocale(LC_ALL,"Russian");
 int n;
 cout<<"¬ведите размерность массива: ";
 cin>>n;
 tovar *mass=new tovar[n];
 for(int i=0;i<n;i++)
 {
     cin.clear();
     cin.sync();
     char name[256];double cost;int n;
     cout<<"\n¬ведите название "<<i+1<<"-го товара: ";
     cin.getline(name, 256);
     cout<<"\n¬ведите стоимость "<<i+1<<"-го товара: ";
     cin>>cost;
     cout<<"\n¬ведите количество "<<i+1<<"-го товара: ";
     cin>>n;
     mass[i].in(n,cost,name);
 }
 double proc;
 cout<<"\n¬ведите процент: ";
 cin>>proc;
 double sum=0;
 for(int i=0;i<n;i++)
     sum+=mass[i].proc(proc);
 cout<<"\n—умма всех товаров: "<<sum<<endl<<endl;
getch();
}