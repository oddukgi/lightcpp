#include "stdafx.h"
#include <iostream>
using namespace std;

int TestFunc(int nParam)
{
	int nResult = nParam * 2;

	return nResult;
}


int _tmain(int argc, _TCHAR* argv[])
{	
	int nInput = 0;
	cout << "Input number: ";
	cin >> nInput;

	//��� �������� ������� �ӽ� ��ü�� ���� r-value ����
	int &&rdata = nInput + 5;
	cout << rdata << endl;

	//�Լ� ��ȯ���� ������� �ӽ� ��ü�� ���� r-value ����
	int &&result = TestFunc(10);

	result += 10;
	cout << result << endl;


	return 0;
}

/*
  ������� 3+4+5  = ?
   
  3+4 ������ ����� �ӽð�� 
*/