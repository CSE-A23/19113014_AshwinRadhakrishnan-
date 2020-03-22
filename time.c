#include <iostream>
using namespace std;
class time
{
    public:
    int hr;
    int min;
    int sec;
    char mere;
    
        void gettime()
        {
            cout<<"Enter the time";
            cin>>hr>>min>>sec;
            cout<<"Enter the meridian";
            cin>>mere;
        }
        void subtract
        {
            int hh1,mm1,ss1;
            {
                if(t2.hr>t1.hr)
                {
                    hh1=t2.hr-t1.hr;
                    mm1=t2.min-t1.min;
                    if(mm1<0)
                    {   
                        --hh1;
                        mm1=60+mm1;
                    }
                    ss1=t2.sec-t1.sec;
                    if(ss1<0)
                    {
                        --mm1;
                        ss1=60+ss1;
                    }
                    if(mm1<0)
                    {   
                        --hh1;
                        mm1=60+mm1;
                    }
                }
                else
                {
                    hh1=t1.hr-t2.hr;
                    mm1=t1.min-t2.min;
                    if(mm1<0)
                    {   
                        --hh1;
                        mm1=60+mm1;
                    }
                    ss1=t1.sec-t2.sec;
                    if(ss1<0)
                    {
                        --mm1;
                        ss1=60+ss1;
                    }
                    if(mm1<0)
                    {   
                        --hh1;
                        mm1=60+mm1;
                    }
                }
            cout<<"subtracted time is ="<<hh1<<":"<<mm1<<":"<<ss1;
        }
};
int main()
{
    class time t1,t2;
    t2.gettime();
    t2.gettime();
    subtract(int hr,int min,int sec);
    return 0;
}
