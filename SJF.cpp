#include<iostream>
using namespace std;
int main()
// otime=s no order time= burst time  .. cooking time= waiting time, tat  
{
int otime[20], ctime[20] ,tat[20],wt[20],e[20],b[20];
int n,i,j,min,d,tatt,stat,swt,atat,awt;
cout<<"Enter number of orders :";
cin>>n;
cout<<"Enter Order time of order number "<<endl;
for(i=0;i<n;i++){
cout<<i+1<<": ";
cin>>otime[i];
}
cout<<"Enter cooking time of order number "<<endl;
for(i=0;i<n;i++)
{
cout<<i+1<<":";
cin>>ctime[i];
}
 for(i=0;i<n;i++)
      {
         for(j=i+1;j<n;j++)
          {
                if(ctime[i]<ctime[j])
                {
                      otime[i],otime[j]=otime[j],otime[i];
                      ctime[i],ctime[j]=ctime[j],ctime[i];
                      
                }
          }
          min=otime[0];

      for(i=0;i<n;i++)
      {
            if(min>otime[i])
            {
                  min=otime[i];
                  d=i;
            }
      }
      tatt=min;
      e[d]=tatt+ctime[d];
      tatt=e[d];

      for(i=0;i<n;i++)
      {
            if(otime[i]!=min)
            {
                  e[i]=ctime[i]+tatt;
                  tatt=e[i];
            }
      }
      for(i=0;i<n;i++)
      {

            tat[i]=e[i]-otime[i];
            stat=stat+tat[i];
            wt[i]=tat[i]-ctime[i];
            swt=swt+wt[i];
      }
      atat=stat/n;
      awt=swt/n;
      cout<<"Process  order-time      cooking-time      Waiting-time      Turnaround-time\n";

    for(i=0;i<n;i++)
    {
    cout<<"Order "<<i+1<<"            "<<otime[i]<<"              "<<ctime[i]<<"                "<<wt[i]<<"        "<<tat[i]<<endl;
    }
    cout<<"awt="<<awt<<endl;
    cout<<" atat="<<atat<<endl;
}
      }


