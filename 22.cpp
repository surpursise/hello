#include "iostream"
#include "cmath"
#include <ctime>
#include "algorithm"
#include "vector"


using namespace std;
int add(int c)//�ݹ�
{
    int a = 0;
    c && (a = add(c - 1));
    cout << a + c << endl;
    return a + c;
}
void fangcheng()//һԪ���η���
{
    double  a , b , c ;
    cin >> a >> b >> c;
    // a * x * x + b * x + c=0 ;
    double x1 = ( - b + sqrt( b * b - 4 * a * c))/( 2 * a);
    double x2 = ( - b - sqrt( b * b - 4 * a * c))/( 2 * a);
    cout << x1 << endl << x2 << endl ;
}
void lingxing()//����
{
    int n = 5;
    for (int i = 0; i < 2 * n + 1; i++) {
        for (int j = 0; j < 2 * n + 1; j++) {
            if (abs(i - n) + abs(j - n) == n ) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void showrand()//ʱ�������
{
    int j ;
    srand(unsigned(time(NULL)));
    for(int i = 0;i < 10; i++)
    {
        j = rand();
        cout << j << endl;
    }
}

void yyear()//�ж�����
{
    int a ;
    cin >> a;
    if( !(a % 400) || !( a%4 )  && a%100 )
    {
        cout << "yes" << endl;
    }
}
void showtm(tm* ltm)
{
    cout << "��ǰ��" << ltm->tm_year + 1900 << "��"<< ltm->tm_mon + 1
    << "��"<< ltm->tm_mday << "��\n"<< "����" << ltm->tm_wday 
    << "\nʱ����" << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;
}
void mytime()
{
    // clock_t t1,t2;
    // t1 = clock();
    // _sleep(5000);
    // t2 = clock();
    // int i = difftime(t2,t1);
    // cout << i;
    // cout << t;
    time_t nowtime = time(0);//time(&nowtime)
    cout << nowtime << endl;
    tm *ltm,*gmtm;
    ltm = localtime(&nowtime);//����ʱ��
    string a = ctime(&nowtime);//����ʱ��
    string b = asctime(ltm);//��ȡʱ�亯��
    cout << b;
    showtm(ltm);
    gmtm = gmtime(&nowtime);
    char *gm = asctime(gmtm);
    cout << gm;

}



int main()
{
    


    // string str1 = "hello", str2 = "world";
    // str1.append(str2);
    // int a = str1.length();
    // int b = str1.find("o");
    // str1.replace(str1.find("d"),1,"d!");
    // vector<char> v;
    // for(int i = 0 ; i < str2.length() ; i++)
    // {
    //     v.push_back(str2[i]);
    // }
    // for_each(v.begin(),v.end(), [](char a){cout << a;});
    // vector<char>::iterator pch = v.end();
    // string::iterator pstr = str2.end();
    // str2.insert( *pstr + 5,"12");
    // cout << *pch << endl ;
    // char str3[5];
    // cin.getline(str3 ,5);
    // // cin.get();
    // cout << str3 << endl;
    // cin.getline(str3 ,5);
    // cout << str3 << endl;
    mytime();
    system("pause");
    return 0;
}