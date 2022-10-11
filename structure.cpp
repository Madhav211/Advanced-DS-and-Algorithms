#include <iostream>

using namespace std;
struct smarks{
    int m1,m2,m3,m4,m5;
    float avg;
}s1, s2, s3, s4, s5, s6;

int main()
{
    cout<<"Enter Student 1:";
    cin>>s1.m1>>s1.m2>>s1.m3>>s1.m4>>s1.m5;
    s1.avg=(s1.m1+s1.m2+s1.m3+s1.m4+s1.m5)/5.0;
        cout<<"Enter Student 2:";

    cin>>s2.m1>>s2.m2>>s2.m3>>s2.m4>>s2.m5;
    s2.avg=(s2.m1+s2.m2+s2.m3+s2.m4+s2.m5)/5.0;
        cout<<"Enter Student 3:";

    cin>>s3.m1>>s3.m2>>s3.m3>>s3.m4>>s3.m5;
    s3.avg=(s3.m1+s3.m2+s3.m3+s3.m4+s3.m5)/5.0;
        cout<<"Enter Student 4:";

    cin>>s4.m1>>s4.m2>>s4.m3>>s4.m4>>s4.m5;
    s4.avg=(s4.m1+s4.m2+s4.m3+s4.m4+s4.m5)/5.0;
        cout<<"Enter Student 5:";

    cin>>s5.m1>>s5.m2>>s5.m3>>s5.m4>>s5.m5;
    s5.avg=(s5.m1+s5.m2+s5.m3+s5.m4+s5.m5)/5.0;
    
    cout<<"Student 1:"<<s1.avg<<endl;
    cout<<"Student 2:"<<s2.avg<<endl;
    cout<<"Student 3:"<<s3.avg<<endl;
    cout<<"Student 4:"<<s4.avg<<endl;
    cout<<"Student 5:"<<s5.avg<<endl;
 