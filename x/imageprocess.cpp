
//���漸��ͷ�ļ�ʹ�ø��ļ���imageprocess�����Կ�Խ��Ƭ���͵��ԣ�����ճ���󼴿������ڵ�Ƭ����
//���ڵ�Ƭ���͵����ϱ�д��ͬ��"environment.h"��"extVarContainer.h"
#include <stdint.h>		
#include "environment.h"		//ָʾ�˵�ǰ�Ļ���
#include "extVarContainer.h"	//����˵�Ƭ����һЩ����ת�Ƶ��ⲿ����������extern float speed;��������ĳ���



int imageProcessOnChipAndOnVS(uint8_t (*img)[CAMERA_COLS])
{

	for (int i = 10; i < CAMERA_ROWS - 10; i++)//���ԣ���ͼ���л�һ������
	{
		for (int j = 10; j < CAMERA_COLS - 10; j++)
		{
			if (j == 40)
			{
				img[i][j] = 125-j;
			}
		}
	}
	return 0;
}

