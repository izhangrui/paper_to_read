#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
    freopen("shuzui.TXT","r",stdin);
    freopen("out.txt","w",stdout);
    string a;
    int v,v1,v2,v3;
    while(cin>>a)
    {
        int i;
        for(i=9;i<41;i=i+4)
        {
            switch(a[i])
            {
                case 'A':v=10;break;
                case 'B':v=11;break;
                case 'C':v=12;break;
                case 'D':v=13;break;
                case 'E':v=14;break;
                case 'F':v=15;break;
                default:v=int(a[i])-48;
            }
            switch(a[i+1])
            {
                case 'A':v1=10;break;
                case 'B':v1=11;break;
                case 'C':v1=12;break;
                case 'D':v1=13;break;
                case 'E':v1=14;break;
                case 'F':v1=15;break;
                default:{v1=int(a[i+1])-48;}
            }
            switch(a[i+2])
            {
                case 'A':v2=10;break;
                case 'B':v2=11;break;
                case 'C':v2=12;break;
                case 'D':v2=13;break;
                case 'E':v2=14;break;
                case 'F':v2=15;break;
                default:{v2=int(a[i+1])-48;}
            }
            switch(a[i+3])
            {
                case 'A':v3=10;break;
                case 'B':v3=11;break;
                case 'C':v3=12;break;
                case 'D':v3=13;break;
                case 'E':v3=14;break;
                case 'F':v3=15;break;
                default:{v3=int(a[i+1])-48;}
            }
            cout<<v*16*16*16+v1*16*16+v2*16+v3<<"\n";
        }
        //printf("\n");
    }

    return 0;
}