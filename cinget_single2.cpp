//#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
	char stri[10];
	cout << "input string(10):";
	cin.get(stri, 10);//cin.get()���������ַ��������������С10�����ƣ���־λû��Ӱ�졣ֻ�Ǽ���ʣ���ַ����ڻ�������
	                                             //���ǣ����Ƕ�ȡ���еĻ��������´�cinΪfalse��
	cout << "inputed string:" << stri << endl;
	char ch;
	while ((ch = cin.get()) != '\n')
	{
		cout << " ch:" << ch ;
	}
	return 0;
	/*char stri[10];
	cout << "input string(10):";
	cin.getline(stri, 10);   //cin.getline()�м��������ַ��������������С10�����ƣ����־λcin.fail()����Ϊtrue��
	                               //����ʣ���ַ����ڻ�������������������.����cin.clear()���ñ�־λ��
	while (cin.fail())          
	{
		cin.clear();
		int m = cin.get();
		cout << "m is " << m<<" relevant char is " << char(m) << endl;
	}
	return 0;
	*/
	/*int num;
	while ((num = cin.get()) != EOF)
	{
		cout << "num:" << num << ' ';
		cout.put(num);
		cout << " ";

	}
	cout << "num:" << num << ' ';
	// cout << "sizeof int:"<< sizeof(int)<< endl;
	*/
	cout << " input line string:";
	char str[5];
	cin.getline(str, 5);
	cout << "inputed str:" << str << endl;
	int inte2 = cin.get();
	cout << "inter of intputed char:" << inte2 << endl;
	// cout<<"ch:"<<ch<<endl;
	int inte3 = cin.get();
	cout << "inter of intputed char:" << inte3 << endl;
	// cout<<"ch:"<<ch<<endl;
	int inte = cin.get();
	cout << "inter of intputed char:" << inte << endl;
	// cout<<"ch:"<<ch<<endl;
	/*const char* fn = "myfile2.txt";
	ofstream  fout;
	fout.open(fn);
	if (!fout.is_open())
	{
		cout << "cannot open "
			<< fn << "  bye" << endl;
		exit(EXIT_FAILURE);
	}
	double object;
	cout << "input focal length of double object:";
	cin >> object;
	double eps[4];
	cout << "double object:" << object << endl;
	//cout << "input focal length of "<<4<<" double eyes:"<<endl ;
	*/
}
