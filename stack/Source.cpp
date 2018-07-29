#include <iostream>
#include <stack>

using namespace std;

void atomicSwap(stack<int> s1, stack<int> s2) {
	int v1, v2;
	cout << "������� ������� ����� 1 = " << s1.top() << endl;
	cout << "������� ������� ����� 2 = " << s2.top() << endl;
	v1 = s1.top();
	cout << "v1 = " << v1 << endl;
	v2 = s2.top();
	cout << "v2 = " << v2 << endl;
	s1.pop();
	s2.pop();
	cout << endl;
	cout << "***������� ������� ��������***" << endl;
	cout << endl;

	cout << "������� ������� ����� 1 = " << s1.top() << endl;
	cout << "������� ������� ����� 2 = " << s2.top() << endl;

	cout << endl;
	cout << "***�������� ������� ��������***" << endl;
	cout << endl;

	s1.push(v2);
	cout << "������� ������� ����� 1 = " << s1.top() << endl;
	s2.push(v1);
	cout << "������� ������� ����� 2 = " << s2.top() << endl;
}

void printStack(stack<int> s) {
	for (int i = 0; i < 3; i++) {
		cout << s.top() << endl;
		s.pop();
	}
}

void main() {
	setlocale(LC_CTYPE, "Russian");
	stack<int> st1, st2;
	cout << "������� ���� ����� ����� ����� ������� 1: " << endl; // ���������� ������������ 
	int i = 0;
	while (i != 3) {
		int a;
		cin >> a;
		st1.push(a);  // ��������� ��������� �����
		i++;
	}

	cout << "������� ���� ����� ����� ����� ������� 2: " << endl; // ���������� ������������ 
	i = 0;
	while (i != 3) {
		int a;
		cin >> a;
		st2.push(a);  // ��������� ��������� �����
		i++;
	}

	atomicSwap(st1, st2);
	cout << "������ 1:" << endl;
	printStack(st1);
	cout << "������ 2:" << endl;
	printStack(st2);
	cout << "Project has been added in Git repo";
	system("pause");
}
