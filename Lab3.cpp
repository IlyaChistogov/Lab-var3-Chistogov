#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double	e = 0.0001;		//�����������
	double	a = 0.1;		//��������� �
	double	b = 1;		//�������� �
	int		k = 10;			//���������� ���������� �� �
	int		n = 10;			//������������� ����� �������� 
	int		i1, i2, i3;		//���������� ��� ������
	double	h = (b - a) / k;	//��� �� �
	double	x;				//������� �
	double	sn;				//���� ������� ����
	double	S1;				//����� ���� �� n ���������
	double	S2;				//����� ����, ���� ��������� ������� ������ �����������
	double	f;				//������ �������� �������
	for (i1 = 0; i1 <= k; i1++)
	{
		x = a + i1 * h;
		f = sin(x);

		for (S1 = 0, i2 = 1; i2 <= n; i2++)
		{

			S1 += (pow(x, 2 * i1 + 1) / ((2 * i1 + 1))) * pow((-1), i1);
		}
		for (S2 = 0, sn = 1, i3 = 1; fabs(sn) >= e; i3++)
		{

			sn = (pow(x, 2 * i2 + 1) / ((2 * i2 + 1))) * pow((-1), i2);
			S2 += sn;
		}
		printf("x=%.2f SN=%f SE=%f Y=%f\n", x, S1, S2, f);
	}
	return 0;
}