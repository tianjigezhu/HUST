//��������ͷ�ļ���
#include"ClothShop.h"
#include"iostream"
using namespace std;
//����һ��Shop����
Shop oneshop("̫ƽ���װ��","������","admin","admin",30,10,20,5,35.0,23.0,19.0,20.0);
//�˵�ѡ������ʵ�֡�
int Menu_Select()
{
	int xuanze;
	cout<<endl;
	cout<<"1.�޸Ŀ��������Ĺ���Ա���Ƽ�����"<<endl;
	cout<<"2.�鿴�޸ķ�װ��������"<<endl;
	cout<<"3.�鿴�޸ķ�װ����"<<endl;
	cout<<"4.�鿴�޸ķ�װ���"<<endl;
	cout<<"5.�˳�"<<endl;
	cout<<"��ߵ����ֶ�Ӧ����ѡ����ѡ1-5:";	//��ʾѡ���ܡ�
	for(;;)
	{
		cin>>xuanze;
		cout<<endl;
		if(xuanze<1 || xuanze>5)	//���ѡ��Ϊ1-5���κ�һ��������ʾ�����ٴ����롣
			cout<<"�����������ѡ1-5:"<<endl;
		else
			break;	//���������ȷ��������
	}
	return xuanze;
}
//�޸Ŀ��������Ĺ���Ա���Ƽ�����
void Change_M_P()
{
	char NewManagerName[30];	//�����µĹ���Ա���Ƶ��ַ����顣
	char NewPassion[30];		//�����µĹ���Ա������ַ����顣
	char xuanze;
	cout<<"���Ƿ�Ҫ�޸Ĺ���Ա���Ƽ�����(y/n)��"<<endl;	//��ʾ�Ƿ�Ҫ�޸Ĺ���Ա���Ƽ����롣
	for(;;)		//��������ѭ��������������ʾ�ٴ����룬��ȷ��������
	{
		cin>>xuanze;
		if((xuanze!='y')&&(xuanze!='Y')&&(xuanze!='n')&&(xuanze!='N'))
			cout<<"�����������������:"<<endl;
		else 
			break;
	}
	if(xuanze=='y'||xuanze=='Y')	//ѡ��Ҫ�޸ġ�
	{
		int xuanze;
		cout<<"1.�޸Ŀ��������Ĺ���Ա����"<<endl;
		cout<<"2.�޸Ŀ��������Ĺ���Ա����"<<endl;
		cout<<"3.ͬʱ�޸Ŀ��������Ĺ���Ա���Ƽ�����"<<endl;
		cout<<"4.�˳�"<<endl;
		cout<<"��ߵ����ֶ�Ӧ����ѡ���ѡ1-4:"<<endl;
		for(;;)
		{
			cin>>xuanze;
			if(xuanze<1||xuanze>4)
				cout<<"�������������ѡ��:"<<endl;
			else 
				break;
		}
		switch(xuanze)
		{
		case 1:		//ֻ�޸Ĺ���Ա���ơ�
			{
				char xuanze;
				cout<<"�������¹���Ա����(�޶�30����ĸ�����ֻ���15������)"<<endl;
				cin>>NewManagerName;
				cout<<"�����Ѿ����޸��ˣ����Ƿ��뱣�棿(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if((xuanze!='n')&&(xuanze!='y')&&(xuanze!='Y')&&(xuanze!='N'))
						cout<<"�����������������:"<<endl;
					else
						break;
				}
				if((xuanze=='y')||(xuanze=='Y'))
				{
					cout<<"�¹���Ա�������ڱ��棬���Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j=j+1;
							j=j-1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.SetManagerName(NewManagerName);
				}
				else 
				{
					cout<<"����ȡ�������Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j=j+1;
							j=j-1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�¹���Ա����δ���档"<<endl;
				}
			}
			break;
		case 2:		//ֻ�޸Ĺ���Ա���롣
			{
				char xuanze;
				cout<<"���������¹���Ա����(�޶�30����ĸ�����ֻ���15������)"<<endl;
				cin>>NewPassion;
				cout<<"����Ա�����Ѿ����޸��ˣ����Ƿ��뱣�棿(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if((xuanze!='n')&&(xuanze!='y')&&(xuanze!='Y')&&(xuanze!='N'))
						cout<<"�����������������:"<<endl;
					else
						break;
				}
				if((xuanze=='y')||(xuanze=='Y'))
				{
					cout<<"�¹���Ա�������ڱ��棬���Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j=j+1;
							j=j-1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.SetPassion(NewPassion);
				}
				else 
				{
					cout<<"����ȡ�������Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j=j+1;
							j=j-1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�¹���Ա����δ���档"<<endl;
				}
			}
			break;
		case 3:		//ͬʱ�޸Ĺ���Ա���Ƽ����롣
			{
				char xuanze;
				cout<<"�������¹���Ա���Ƽ�����(�޶�30����ĸ�����ֻ���15������):"<<endl;				
				cin>>NewManagerName>>NewPassion;
				cout<<"����Ա���Ƽ������ѱ��޸ģ����Ƿ��뱣�棿(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if((xuanze!='n')&&(xuanze!='y')&&(xuanze!='Y')&&(xuanze!='N'))
						cout<<"�����������������:"<<endl;
					else 
						break;
				}
				if((xuanze=='y')||(xuanze=='Y'))
				{
					cout<<"�¹���Ա�������ڱ��棬���Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j=j+1;
							j=j-1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�¹���Ա�������ڱ��棬���Ժ�";
					for(i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j=j+1;
							j=j-1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.SetPassion(NewPassion);
				}
				else
				cout<<"�¹���Ա���Ƽ�����δ���棡"<<endl;
			}
			break;
		case 4:
			cout<<"�����˳������Ժ�";
			for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j=j+1;
						j=j-1;
					}
					cout<<".";
				}
			cout<<endl;
			cout<<"�˳��ɹ���"<<endl;
			break;
		}
	}
}
//�鿴���޸ķ�װ��������
void FindAndChangeBossName()
{
	int xuanze;
	char YesOrNo;
	char NewBossName[30];
	cout<<"1.�鿴��������"<<endl;
	cout<<"2.�޸ĵ�������"<<endl;
	cout<<"3.�˳�"<<endl;
	cout<<"������ִ����ܣ���ѡ��1-3��";
	for(;;)
	{
		cin>>xuanze;
		if(xuanze<1||xuanze>3)
			cout<<"�������������ѡ��"<<endl;
		else
		break;
	}
	switch(xuanze)
	{
	case 1:
		oneshop.GetBossName();
		break;
	case 2:
		{
			cout<<"�������µ���������"<<endl;
			cin>>NewBossName;
			cout<<"���������ѱ��޸��Ƿ�Ҫ���棿(y/n)"<<endl;
			for(;;)
			{
				cin>>YesOrNo;
				if((YesOrNo!='y')&&(YesOrNo!='Y')&&(YesOrNo!='n')&&(YesOrNo!='N'))
					cout<<"����������������룡"<<endl;
				else
					break;
			}
			if((YesOrNo=='y')||(YesOrNo=='Y'))
			{
				cout<<"���ڱ������Ժ�";
				for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j=j+1;
						j=j-1;
					}
					cout<<".";
				}
				cout<<endl;
				oneshop.SetBossName(NewBossName);
			}
			else
				cout<<"����ȡ�������Ժ�";
				for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j=j+1;
						j=j-1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"δ���棡"<<endl;
		}
	}
	if(xuanze==3)
	{
		cout<<"�����˳������Ժ�";
		for(int i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j=j+1;
					j=j-1;
				}
				cout<<".";
			}
		cout<<endl;
		cout<<"�˳��ɹ���"<<endl;
	}
}
//�鿴���޸ķ�װ����
void FindAndChangeShopName()
{
	int xuanze;
	char YesOrNo;
	char NewShopName[30];
	cout<<"1.�鿴��װ����"<<endl;
	cout<<"2.�޸ķ�װ����"<<endl;
	cout<<"3.�˳�"<<endl;
	cout<<"������ִ����ܣ���ѡ1-3��"<<endl;
	for(;;)
	{
		cin>>xuanze;
		if(xuanze<1||xuanze>3)
			cout<<"�������������ѡ��"<<endl;
		else
			break;
	}
	switch(xuanze)
	{
	case 1:
		oneshop.GetShopName();
		break;
	case 2:
		{
			cout<<"�������װ������"<<endl;
			cin>>NewShopName;
			cout<<"��װ�����ѱ��޸��Ƿ�Ҫ���棿(y/n)"<<endl;
			for(;;)
			{
				cin>>YesOrNo;
				if((YesOrNo!='y')&&(YesOrNo!='Y')&&(YesOrNo!='n')&&(YesOrNo!='N'))
					cout<<"����������������룡"<<endl;
				else
					break;
			}
			if((YesOrNo=='y')||(YesOrNo=='Y'))
			{
				cout<<"���ڱ������Ժ�";
				for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j=j+1;
						j=j-1;
					}
					cout<<".";
				}
				cout<<endl;
				oneshop.SetShopName(NewShopName);
			}
			else
				cout<<"����ȡ�������Ժ�";
				for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j=j+1;
						j=j-1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"δ���棡"<<endl;
		}
	case 3:
		{
			cout<<"�����˳������Ժ�";
			for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j=j+1;
						j=j-1;
					}
					cout<<".";
				}
			cout<<endl;
			cout<<"�˳��ɹ���"<<endl;
		}
		break;
	}
}
//�����޸Ŀ��ĺ�����ʵ�֡�
/*����װ���Ƽ����ĺ���ʵ�֡�*/
/*�����Ʋ����޸����¿�溯����ʵ��*/
void FindAndChangeWaiYiCountOnName(char *name)
{
	char xuanze;
	int choose,choose2;
	int count;
	char WaiYiName[]="����";
	if(strcmp(WaiYiName,name)==0)
	{
		cout<<endl;
		cout<<"1.�������¿��"<<endl;
		cout<<"2.�޸����¿��"<<endl;
		cout<<"3.�˳�"<<endl;
		cout<<"������ִ����ܣ���ѡ��1-3��"<<endl;
		for(;;)
		{
			cin>>choose;
			if((choose<1)||(choose>3))
				cout<<"����������������룺"<<endl;
			else
				break;
		}
		if(choose==1)
		{
			cout<<"���ڲ������µĿ�����������Ժ�";
			for(int i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"���µĿ�������Ѳ鵽��"<<endl;
			cout<<"Ŀǰ��װ�����¿��Ϊ��"<<endl;
			cout<<oneshop.GetWaiYiCount()<<endl;
			if(oneshop.GetWaiYiCount()==0)
				cout<<"���¿�����ز��㣡�뼰ʱ���ӿ�棡"<<endl;
			else if(oneshop.GetWaiYiCount()>0&&oneshop.GetWaiYiCount()<=10)
				cout<<"���¿��ȱ�����뼰ʱ���ӿ�棡"<<endl;
			else if(oneshop.GetWaiYiCount()>10&&oneshop.GetWaiYiCount()<=20)
				cout<<"���¿���Ϊ���㣬��ʱ�������ӿ�档"<<endl;
			else if(oneshop.GetWaiYiCount()>20&&oneshop.GetWaiYiCount()<=30)
				cout<<"���¿����㣬�������ӿ�档"<<endl;
			else
				cout<<"���¿����࣡�뼰ʱ������������ɿ���ѹ��"<<endl;
		}	
		else if(choose==2)
		{
			cout<<"1.�������¿��"<<endl;
			cout<<"2.�������¿��"<<endl;
			cout<<"3.�˳�"<<endl;
			cout<<"������ִ����ܣ���ѡ1-3��"<<endl;
			for(;;)
			{
				cin>>choose2;
				if(choose2>3||choose2<1)
					cout<<"����������������룺"<<endl;
				else 
					break;
			}
			switch(choose2)
			{
			case 1:
			{
				cout<<"������Ҫ���ӵ�����������"<<endl;
				cin>>count;
				cout<<"�����޸ģ����Ժ�";
				for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�޸���ɣ������Ƿ�Ҫ���棿(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"����������������룺"<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"���ڱ��棬���Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.IncWaiYiCount(count);
				}
				else if(xuanze=='n'||xuanze=='N')
				{
					cout<<"�����˳������Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�˳��ɹ���"<<endl;
				}
			}
				break;
			case 2:
			{
				cout<<"������Ҫ���ٵ�����������"<<endl;
				cin>>count;
				cout<<"�����޸ģ����Ժ�";
				for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<"�޸���ɣ������Ƿ�Ҫ���棿(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"����������������룺"<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"���ڱ��棬���Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.DecWaiYiCount(count);
				}
				else if(xuanze=='n'||xuanze=='N')
				{
					cout<<"�����˳������Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�˳��ɹ���"<<endl;
				}
			}
				break;
			case 3:
			{
				cout<<"�����˳������Ժ�";
				for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�˳��ɹ���"<<endl;
				break;
			}
			}
		if(choose==3)
		{
			cout<<"�����˳������Ժ�";
			for(int i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"�˳��ɹ���"<<endl;
		 }

		}
	}
}
/*�����Ʋ����޸ĳ��¿�溯����ʵ��*/
void FindAndChangeChenYiCountOnName(char *name)
{
	char xuanze;
	int choose,choose2,i;
	int count;
    char ChenYiName[]="����";
	if(strcmp(ChenYiName,name)==0)
	{
		cout<<endl;
		cout<<"1.���ҳ��¿��"<<endl;
		cout<<"2.�޸ĳ��¿��"<<endl;
		cout<<"3.�˳�"<<endl;
		cout<<"������ִ����ܣ���ѡ��1-3��"<<endl;
		for(;;)
		{
			cin>>choose;
			if((choose<1)||(choose>3))
				cout<<"����������������룺"<<endl;
			else
				break;
		}
		if(choose==1)
		{
			cout<<"���ڲ��ҳ��µĿ�����������Ժ�";
			for(i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"���µĿ�������Ѳ鵽��"<<endl;
			cout<<"Ŀǰ��װ����¿��Ϊ��"<<endl;
			cout<<oneshop.GetChenYiCount()<<endl;
			if(oneshop.GetChenYiCount()==0)
				cout<<"���¿�����ز��㣡�뼰ʱ���ӿ�棡"<<endl;
			else if(oneshop.GetChenYiCount()>0&&oneshop.GetChenYiCount()<=10)
				cout<<"���¿��ȱ�����뼰ʱ���ӿ�棡"<<endl;
			else if(oneshop.GetChenYiCount()>10&&oneshop.GetChenYiCount()<=20)
				cout<<"���¿���Ϊ���㣬��ʱ�������ӿ�档"<<endl;
			else if(oneshop.GetChenYiCount()>20&&oneshop.GetChenYiCount()<=30)
				cout<<"���¿����㣬�������ӿ�档"<<endl;
			else
				cout<<"���¿����࣡�뼰ʱ������������ɿ���ѹ��"<<endl;
		}	
		else if(choose==2)
		{
			cout<<"1.���ӳ��¿��"<<endl;
			cout<<"2.���ٳ��¿��"<<endl;
			cout<<"3.�˳�"<<endl;
			cout<<"������ִ����ܣ���ѡ1-3��"<<endl;
			for(;;)
			{
				cin>>choose2;
				if(choose2>3||choose2<1)
					cout<<"����������������룺"<<endl;
				else 
					break;
			}
			switch(choose2)
			{
			case 1:	
				cout<<"������Ҫ���ӵĳ���������"<<endl;
				cin>>count;
				cout<<"�����޸ģ����Ժ�";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�޸���ɣ������Ƿ�Ҫ���棿(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"����������������룺"<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"���ڱ��棬���Ժ�";
					for(int i=0;i<9;i++)
					{
					for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.IncChenYiCount(count);
				}
				else if(xuanze=='n'||xuanze=='N')
				{
					cout<<"�����˳������Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�˳��ɹ���"<<endl;
				}
				break;
			case 2:
				{
				cout<<"������Ҫ���ٵĳ���������"<<endl;
				cin>>count;
				cout<<"�����޸ģ����Ժ�";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<"�޸���ɣ������Ƿ�Ҫ���棿(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"����������������룺"<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"���ڱ��棬���Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.DecChenYiCount(count);
				}
				else if(xuanze=='n'||xuanze=='N')
				{
					cout<<"�����˳������Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�˳��ɹ���"<<endl;
				}
				}
				break;
			case 3:
				{
				int i;
				cout<<"�����˳������Ժ�";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�˳��ɹ���"<<endl;
				}
				break;
			}
		}
		else if(choose==3)
		{
			cout<<"�����˳������Ժ�";
			for(int i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"�˳��ɹ���"<<endl;
		}
	}	
}
/*�����Ʋ����޸Ŀ��ӿ�溯����ʵ��*/
void FindAndChangeKuZiCountOnName(char *name)
{
	char xuanze;
	int choose,choose2,i;
	int count;
	char KuZiName[]="����";
	if(strcmp(KuZiName,name)==0)
	{
		cout<<endl;
		cout<<"1.���ҿ��ӿ��"<<endl;	
		cout<<"2.�޸Ŀ��ӿ��"<<endl;
		cout<<"3.�˳�"<<endl;
		cout<<"������ִ����ܣ���ѡ��1-3��"<<endl;
		for(;;)
		{
			cin>>choose;
			if((choose<1)||(choose>3))
				cout<<"����������������룺"<<endl;
			else
				break;
		}
		if(choose==1)
		{
			cout<<"���ڲ��ҿ��ӵĿ�����������Ժ�";
			for(int i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"���ӵĿ�������Ѳ鵽��"<<endl;
			cout<<oneshop.GetKuZiCount()<<endl;
			if(oneshop.GetKuZiCount()==0)
				cout<<"���ӿ�����ز��㣡�뼰ʱ���ӿ�棡"<<endl;
			else if(oneshop.GetKuZiCount()>0&&oneshop.GetKuZiCount()<=10)
				cout<<"���ӿ��ȱ�����뼰ʱ���ӿ�棡"<<endl;
			else if(oneshop.GetKuZiCount()>10&&oneshop.GetKuZiCount()<=20)
				cout<<"���ӿ���Ϊ���㣬��ʱ�������ӿ�档"<<endl;
			else if(oneshop.GetKuZiCount()>20&&oneshop.GetKuZiCount()<=30)
				cout<<"���ӿ����㣬�������ӿ�档"<<endl;
			else
				cout<<"���ӿ����࣡�뼰ʱ������������ɿ���ѹ��"<<endl;
		}	
		else if(choose==2)
		{
			cout<<"1.���ӿ��ӿ��"<<endl;
			cout<<"2.���ٿ��ӿ��"<<endl;
			cout<<"3.�˳�"<<endl;
			cout<<"������ִ����ܣ���ѡ1-3��"<<endl;
			for(;;)
			{
				cin>>choose2;
				if(choose2>3||choose2<1)
					cout<<"����������������룺"<<endl;
				else 
					break;
			}
			switch(choose2)
			{
			case 1:		
				cout<<"������Ҫ���ӵĿ���������"<<endl;
				cin>>count;
				cout<<"�����޸ģ����Ժ�";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�޸���ɣ������Ƿ�Ҫ���棿(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"����������������룺"<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"���ڱ��棬���Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.IncKuZiCount(count);
				}
				else if(xuanze=='n'||xuanze=='N')
				{
					cout<<"�����˳������Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�˳��ɹ���"<<endl;
				}
				break;
			case 2:
				cout<<"������Ҫ���ٵĿ���������"<<endl;
				cin>>count;
				cout<<"�����޸ģ����Ժ�";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<"�޸���ɣ������Ƿ�Ҫ���棿(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"����������������룺"<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"���ڱ��棬���Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.DecKuZiCount(count);
				}
				else if(xuanze=='n'||xuanze=='N')
				{
					cout<<"�����˳������Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�˳��ɹ���"<<endl;
				}
				break;
			case 3:
				cout<<"�����˳������Ժ�";
				for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�˳��ɹ���"<<endl;
				break;
			}
		}
		else if(choose==3)
		{
			cout<<"�����˳������Ժ�";
			for(int i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"�˳��ɹ���"<<endl;
		}
	}		
}
/*�����Ʋ����޸���װ��溯����ʵ��*/
void FindAndChangeTaoZhuangCountOnName(char *name)
{
	char xuanze;
	int choose,choose2,i;
	int count;
	char TaoZhuangName[]="��װ";
	if(strcmp(TaoZhuangName,name)==0)
	{
		cout<<endl;
		cout<<"1.������װ���"<<endl;
		cout<<"2.�޸���װ���"<<endl;
		cout<<"3.�˳�"<<endl;
		cout<<"������ִ����ܣ���ѡ��1-3��"<<endl;
		for(;;)
		{
			cin>>choose;
			if((choose<1)||(choose>3))
				cout<<"����������������룺"<<endl;
			else
				break;
		}
		if(choose==1)
		{
			cout<<"���ڲ�����װ�Ŀ�����������Ժ�";
			for(int i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"��װ�Ŀ�������Ѳ鵽��"<<endl;
			cout<<oneshop.GetTaoZhuangCount()<<endl;
			if(oneshop.GetTaoZhuangCount()==0)
				cout<<"��װ������ز��㣡�뼰ʱ���ӿ�棡"<<endl;
			else if(oneshop.GetTaoZhuangCount()>0&&oneshop.GetTaoZhuangCount()<=10)
				cout<<"��װ���ȱ�����뼰ʱ���ӿ�棡"<<endl;
			else if(oneshop.GetTaoZhuangCount()>10&&oneshop.GetTaoZhuangCount()<=20)
				cout<<"��װ����Ϊ���㣬��ʱ�������ӿ�档"<<endl;
			else if(oneshop.GetTaoZhuangCount()>20&&oneshop.GetTaoZhuangCount()<=30)
				cout<<"��װ�����㣬�������ӿ�档"<<endl;
			else
				cout<<"��װ�����࣡�뼰ʱ������������ɿ���ѹ��"<<endl;
		}
		else if(choose==2)
		{
		cout<<"1.������װ���"<<endl;
		cout<<"2.������װ���"<<endl;
		cout<<"3.�˳�"<<endl;
		cout<<"������ִ����ܣ���ѡ1-3��"<<endl;
		for(;;)
		{
			cin>>choose2;
			if(choose2>3||choose2<1)
				cout<<"����������������룺"<<endl;
			else 
				break;
		}
		switch(choose2)
		{
		case 1:		
			cout<<"������Ҫ���ӵ���װ������"<<endl;
			cin>>count;
			cout<<"�����޸ģ����Ժ�";
			for(i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"�޸���ɣ������Ƿ�Ҫ���棿(y/n)"<<endl;
			for(;;)
			{
				cin>>xuanze;
				if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
					cout<<"����������������룺"<<endl;
				else
					break;
			}
			if(xuanze=='y'&&xuanze=='Y')
			{
				cout<<"���ڱ��棬���Ժ�";
				for(int i=0;i<9;i++)
				{	
				for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				oneshop.IncTaoZhuangCount(count);
			}
			else if(xuanze=='n'||xuanze=='N')
			{
				cout<<"�����˳������Ժ�";
				for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�˳��ɹ���"<<endl;
			}
			break;
		case 2:
			cout<<"������Ҫ���ٵ���װ������"<<endl;
			cin>>count;
			cout<<"�����޸ģ����Ժ�";
			for(i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<"�޸���ɣ������Ƿ�Ҫ���棿(y/n)"<<endl;
			for(;;)
			{
				cin>>xuanze;
				if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
					cout<<"����������������룺"<<endl;
				else
					break;
			}
			if(xuanze=='y'&&xuanze=='Y')
			{
				cout<<"���ڱ��棬���Ժ�";
				for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				oneshop.DecTaoZhuangCount(count);
			}
			else if(xuanze=='n'||xuanze=='N')
			{
				cout<<"�����˳������Ժ�";
				for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�˳��ɹ���"<<endl;
			}
			break;
		case 3:
			cout<<"�����˳������Ժ�";
			for(int i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"�˳��ɹ���"<<endl;
			break;
		}
		}
		else if(choose==3)	
		{
			cout<<"�����˳������Ժ�";
			for(int i=0;i<9;i++)
			{
			for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"�˳��ɹ���"<<endl;
		}
	}			
}
/*�����Ʋ����޸ķ�װ�����������ʵ��*/
void FindAndChangeCountOnName()
{
	char ClothName[10];
	char WaiYiName[]="����",ChenYiName[]="����",KuZiName[]="����",TaoZhuangName[]="��װ";
	cout<<"������Ҫ�����޸ĵķ�װ�����ƣ������¡����¡����ӡ���װ��"<<endl;
	for(;;)
	{
		cin>>ClothName;
		if((strcmp(WaiYiName,ClothName)!=0)&&(strcmp(ChenYiName,ClothName)!=0)&&
			(strcmp(KuZiName,ClothName)!=0)&&(strcmp(TaoZhuangName,ClothName)!=0))
			cout<<"Ŀǰ�����û�����ַ�װ�����������룺"<<endl;
		else 
			break;
	}
	FindAndChangeWaiYiCountOnName(ClothName);
	FindAndChangeChenYiCountOnName(ClothName);
	FindAndChangeKuZiCountOnName(ClothName);
	FindAndChangeTaoZhuangCountOnName(ClothName);
}
/*����װ��ż����ĺ�����ʵ��*/
/*����Ų����޸����¿�溯����ʵ��*/
void FindAndChangeWaiYiCountOnNumber(int clothnumber)
{
	char xuanze;
	int choose,choose2,i;
	int count;
	if(oneshop.GetWaiYiNumber()==clothnumber)
	{
		cout<<endl;
		cout<<"1.�������¿��"<<endl;
		cout<<"2.�޸����¿��"<<endl;
		cout<<"3.�˳�"<<endl;
		cout<<"������ִ����ܣ���ѡ��1-3��"<<endl;
		for(;;)
		{
			cin>>choose;
			if((choose<1)||(choose>3))
				cout<<"����������������룺"<<endl;
			else
				break;
		}
		if(choose==1)
		{
			cout<<"���ڲ������µĿ�����������Ժ�";
			for(int i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"���µĿ�������Ѳ鵽��"<<endl;
			cout<<"Ŀǰ��װ�����¿��Ϊ��"<<endl;
			cout<<oneshop.GetWaiYiCount()<<endl;
			if(oneshop.GetWaiYiCount()==0)
				cout<<"���¿�����ز��㣡�뼰ʱ���ӿ�棡"<<endl;
			else if(oneshop.GetWaiYiCount()>0&&oneshop.GetWaiYiCount()<=10)
				cout<<"���¿��ȱ�����뼰ʱ���ӿ�棡"<<endl;
			else if(oneshop.GetWaiYiCount()>10&&oneshop.GetWaiYiCount()<=20)
				cout<<"���¿���Ϊ���㣬��ʱ�������ӿ�档"<<endl;
			else if(oneshop.GetWaiYiCount()>20&&oneshop.GetWaiYiCount()<=30)
				cout<<"���¿����㣬�������ӿ�档"<<endl;
			else
				cout<<"���¿����࣡�뼰ʱ������������ɿ���ѹ��"<<endl;
		}	
		else if(choose==2)
		{
			cout<<"1.�������¿��"<<endl;
			cout<<"2.�������¿��"<<endl;
			cout<<"3.�˳�"<<endl;
			cout<<"������ִ����ܣ���ѡ1-3��"<<endl;
			for(;;)
			{
				cin>>choose2;
				if(choose2>3||choose2<1)
					cout<<"����������������룺"<<endl;
				else 
					break;
			}
			switch(choose2)
			{
			case 1:		
				cout<<"������Ҫ���ӵ�����������"<<endl;
				cin>>count;
				cout<<"�����޸ģ����Ժ�";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�޸���ɣ������Ƿ�Ҫ���棿(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"����������������룺"<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"���ڱ��棬���Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.IncWaiYiCount(count);
				}
				else if(xuanze=='n'||xuanze=='N')
				{
					cout<<"�����˳������Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�˳��ɹ���"<<endl;
				}
				break;
			case 2:
				cout<<"������Ҫ���ٵ�����������"<<endl;
				cin>>count;
				cout<<"�����޸ģ����Ժ�";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<"�޸���ɣ������Ƿ�Ҫ���棿(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"����������������룺"<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"���ڱ��棬���Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.DecWaiYiCount(count);
				}
				else if(xuanze=='n'||xuanze=='N')
				{
					cout<<"�����˳������Ժ�";
					for(int i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�˳��ɹ���"<<endl;
				}
				break;
			case 3:
				cout<<"�����˳������Ժ�";
				for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�˳��ɹ���"<<endl;
				break;
			}
		}
		else if(choose==3)
		{
			cout<<"�����˳������Ժ�";
			for(int i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"�˳��ɹ���"<<endl;
		}
	}		
}
/*����ų����޸ĳ��¿�溯����ʵ��*/
void FindAndChangeChenYiCountOnNumber(int clothnumber)
{
	char xuanze;
	int choose,choose_2,i;
	int count;
	if(oneshop.GetChenYiNumber()==clothnumber)
	{
		cout<<endl;
		cout<<"1.���ҳ��¿��"<<endl;
		cout<<"2.�޸ĳ��¿��"<<endl;
		cout<<"3.�˳�"<<endl;
		cout<<"������ִ����ܣ���ѡ��1-3��"<<endl;
		for(;;)
		{
			cin>>choose;
			if((choose<1)||(choose>3))
				cout<<"����������������룺"<<endl;
			else
				break;
		}
		if(choose==1)
		{
			cout<<"���ڲ��ҳ��µĿ�����������Ժ�";
			for(i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"���µĿ�������Ѳ鵽��"<<endl;
			cout<<"Ŀǰ��װ����¿��Ϊ��"<<endl;
			cout<<oneshop.GetChenYiCount()<<endl;
			if(oneshop.GetChenYiCount()==0)
				cout<<"���¿�����ز��㣡�뼰ʱ���ӿ�棡"<<endl;
			else if(oneshop.GetChenYiCount()>0&&oneshop.GetChenYiCount()<=10)
				cout<<"���¿��ȱ�����뼰ʱ���ӿ�棡"<<endl;
			else if(oneshop.GetChenYiCount()>10&&oneshop.GetChenYiCount()<=20)
				cout<<"���¿���Ϊ���㣬��ʱ�������ӿ�档"<<endl;
			else if(oneshop.GetChenYiCount()>20&&oneshop.GetChenYiCount()<=30)
				cout<<"���¿����㣬�������ӿ�档"<<endl;
			else
				cout<<"���¿����࣡�뼰ʱ������������ɿ���ѹ��"<<endl;
		}	
		else if(choose==2)
		{
			cout<<"1.���ӳ��¿��"<<endl;
			cout<<"2.���ٳ��¿��"<<endl;
			cout<<"3.�˳�"<<endl;
			cout<<"������ִ����ܣ���ѡ1-3��"<<endl;
			for(;;)
			{
				cin>>choose_2;
				if(choose_2>3||choose_2<1)
					cout<<"����������������룺"<<endl;
				else 
					break;
			}
			switch(choose_2)
			{
			case 1:		
				cout<<"������Ҫ���ӵĳ���������"<<endl;
				cin>>count;
				cout<<"�����޸ģ����Ժ�";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�޸���ɣ������Ƿ�Ҫ���棿(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"����������������룺"<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"���ڱ��棬���Ժ�";
					for(i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.IncChenYiCount(count);
				}
				else if(xuanze=='n'||xuanze=='N')
				{
					cout<<"�����˳������Ժ�";
					for(i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�˳��ɹ���"<<endl;
				}
				break;
			case 2:
				cout<<"������Ҫ���ٵĳ���������"<<endl;
				cin>>count;
				cout<<"�����޸ģ����Ժ�";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<"�޸���ɣ������Ƿ�Ҫ���棿(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"����������������룺"<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"���ڱ��棬���Ժ�";
					for(i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;				
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.DecChenYiCount(count);
				}
				else if(xuanze=='n'||xuanze=='N')
				{
					cout<<"�����˳������Ժ�";
					for(i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�˳��ɹ���"<<endl;
				}
				break;
			case 3:
				cout<<"�����˳������Ժ�";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�˳��ɹ���"<<endl;
				break;
			}
		}
		else if(choose==3)
		{
			cout<<"�����˳������Ժ�";
			for(i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"�˳��ɹ���"<<endl;
		}		
	}
}
/*����Ų����޸Ŀ��ӿ�溯����ʵ��*/
void FindAndChangeKuZiCountOnNumber(int clothnumber)
{
	char xuanze;
	int choose,choose2,i;
	int count;
	if(oneshop.GetKuZiNumber()==clothnumber)
	{
		cout<<endl;
		cout<<"1.���ҿ��ӿ��"<<endl;
		cout<<"2.�޸Ŀ��ӿ��"<<endl;
		cout<<"3.�˳�"<<endl;
		cout<<"������ִ����ܣ���ѡ��1-3��"<<endl;
		for(;;)
		{
			cin>>choose;
			if((choose<1)||(choose>3))
				cout<<"����������������룺"<<endl;
			else
				break;
		}
		if(choose==1)
		{
			cout<<"���ڲ��ҿ��ӵĿ�����������Ժ�";
			for(i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"���ӵĿ�������Ѳ鵽��"<<endl;
			cout<<oneshop.GetKuZiCount()<<endl;
			if(oneshop.GetKuZiCount()==0)
				cout<<"���ӿ�����ز��㣡�뼰ʱ���ӿ�棡"<<endl;
			else if(oneshop.GetKuZiCount()>0&&oneshop.GetKuZiCount()<=10)
				cout<<"���ӿ��ȱ�����뼰ʱ���ӿ�棡"<<endl;
			else if(oneshop.GetKuZiCount()>10&&oneshop.GetKuZiCount()<=20)
				cout<<"���ӿ���Ϊ���㣬��ʱ�������ӿ�档"<<endl;
			else if(oneshop.GetKuZiCount()>20&&oneshop.GetKuZiCount()<=30)
				cout<<"���ӿ����㣬�������ӿ�档"<<endl;
			else
				cout<<"���ӿ����࣡�뼰ʱ������������ɿ���ѹ��"<<endl;
		}	
		else if(choose==2)
		{
			cout<<"1.���ӿ��ӿ��"<<endl;
			cout<<"2.���ٿ��ӿ��"<<endl;
			cout<<"3.�˳�"<<endl;
			cout<<"������ִ����ܣ���ѡ1-3��"<<endl;
			for(;;)
			{
				cin>>choose2;
				if(choose2>3||choose2<1)
					cout<<"����������������룺"<<endl;
				else 
					break;
			}
			switch(choose2)
			{
			case 1:		
				cout<<"������Ҫ���ӵĿ���������"<<endl;
				cin>>count;
				cout<<"�����޸ģ����Ժ�";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�޸���ɣ������Ƿ�Ҫ���棿(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"����������������룺"<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"���ڱ��棬���Ժ�";
					for(i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.IncKuZiCount(count);
				}
				else if(xuanze=='n'||xuanze=='N')
				{
					cout<<"�����˳������Ժ�";
					for(i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�˳��ɹ���"<<endl;
				}
				break;
			case 2:
				cout<<"������Ҫ���ٵĿ���������"<<endl;
				cin>>count;
				cout<<"�����޸ģ����Ժ�";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<"�޸���ɣ������Ƿ�Ҫ���棿(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"����������������룺"<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"���ڱ��棬���Ժ�";
					for(i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.DecKuZiCount(count);
				}
				else if(xuanze=='n'||xuanze=='N')
				{
					cout<<"�����˳������Ժ�";
					for(i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�˳��ɹ���"<<endl;
				}
				break;
			case 3:
				cout<<"�����˳������Ժ�";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�˳��ɹ���"<<endl;
				break;
			}
		}
		else if(choose==3)
		{
			cout<<"�����˳������Ժ�";
			for(i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"�˳��ɹ���"<<endl;
		}		
	}
}
/*����Ų����޸���װ��溯����ʵ��*/
void FindAndChangeTaoZhuangCountOnNumber(int clothnumber)
{
	char xuanze;
	int choose,choose2,i;
	int count;	
	if(oneshop.GetTaoZhuangNumber()==clothnumber)
	{
		cout<<endl;
		cout<<"1.������װ���"<<endl;
		cout<<"2.�޸���װ���"<<endl;
		cout<<"3.�˳�"<<endl;
		cout<<"������ִ����ܣ���ѡ��1-3��"<<endl;
		for(;;)
		{
			cin>>choose;
			if((choose<1)||(choose>3))
				cout<<"����������������룺"<<endl;
			else
				break;
		}
		if(choose==1)
		{
			cout<<"���ڲ�����װ�Ŀ�����������Ժ�";
			for(i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"��װ�Ŀ�������Ѳ鵽��"<<endl;
			cout<<oneshop.GetTaoZhuangCount()<<endl;
			if(oneshop.GetTaoZhuangCount()==0)
				cout<<"��װ������ز��㣡�뼰ʱ���ӿ�棡"<<endl;
			else if(oneshop.GetTaoZhuangCount()>0&&oneshop.GetTaoZhuangCount()<=10)
				cout<<"��װ���ȱ�����뼰ʱ���ӿ�棡"<<endl;
			else if(oneshop.GetTaoZhuangCount()>10&&oneshop.GetTaoZhuangCount()<=20)
				cout<<"��װ����Ϊ���㣬��ʱ�������ӿ�档"<<endl;
			else if(oneshop.GetTaoZhuangCount()>20&&oneshop.GetTaoZhuangCount()<=30)
				cout<<"��װ�����㣬�������ӿ�档"<<endl;
			else
				cout<<"��װ�����࣡�뼰ʱ������������ɿ���ѹ��"<<endl;
		}	
		else if(choose==2)
		{
			cout<<"1.������װ���"<<endl;
			cout<<"2.������װ���"<<endl;
			cout<<"3.�˳�"<<endl;
			cout<<"������ִ����ܣ���ѡ1-3��"<<endl;
			for(;;)
			{
				cin>>choose2;
				if(choose2>3||choose2<1)
					cout<<"����������������룺"<<endl;
				else 
					break;
			}
			switch(choose2)
			{
			case 1:		
				cout<<"������Ҫ���ӵ���װ������"<<endl;
				cin>>count;
				cout<<"�����޸ģ����Ժ�";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�޸���ɣ������Ƿ�Ҫ���棿(y/n)"<<endl;
				for(;;)
				{
					cout<<"";
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"����������������룺"<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"���ڱ��棬���Ժ�";
					for(i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.IncTaoZhuangCount(count);
				}
				else if(xuanze=='n'||xuanze=='N')
				{
					cout<<"�����˳������Ժ�";
					for(i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�˳��ɹ���"<<endl;
				}
				break;
			case 2:
				cout<<"������Ҫ���ٵ���װ������"<<endl;
				cin>>count;
				cout<<"�����޸ģ����Ժ�";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<"�޸���ɣ������Ƿ�Ҫ���棿(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"����������������룺"<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"���ڱ��棬���Ժ�";
					for(i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					oneshop.DecTaoZhuangCount(count);
				}
				else if(xuanze=='n'||xuanze=='N')
				{
					cout<<"�����˳������Ժ�";
					for(i=0;i<9;i++)
					{
						for(long j=0;j<100000000;j++)
						{
							j+=1;
							j-=1;
						}
						cout<<".";
					}
					cout<<endl;
					cout<<"�˳��ɹ���"<<endl;
				}
				break;
			case 3:
				cout<<"�����˳������Ժ�";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�˳��ɹ���"<<endl;
				break;
			}
		}
		else if(choose==3)
		{
			cout<<"�����˳������Ժ�";
			for(i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"�˳��ɹ���"<<endl;
		}
	}		
}
/*����Ų����޸Ŀ����������ʵ��*/
void FindAndChangeCountOnNumber()
{
	int ClothNumber;
	cout<<"������Ҫ�����޸ĵķ�װ�ı�ţ�(01��02��03��04)"<<endl;
	for(;;)
	{
		cin>>ClothNumber;
		if((ClothNumber!=01)&&(ClothNumber!=02)&&(ClothNumber!=03)&&(ClothNumber!=04))
			cout<<"Ŀǰ�˷�װ����ڿ���в����ڣ����������룺"<<endl;
		else 
			break;
	}
	FindAndChangeWaiYiCountOnNumber(ClothNumber);
	FindAndChangeChenYiCountOnNumber(ClothNumber);
	FindAndChangeKuZiCountOnNumber(ClothNumber);
	FindAndChangeTaoZhuangCountOnNumber(ClothNumber);
}
/*���ҿ������������ʵ��*/
void FindAndChangeCount()
{
	char YesOrNo;
	int xuanze;
	cout<<"���Ƿ���Ҫ�����޸Ŀ�棿(y/n)"<<endl;	//ѯ���Ƿ�Ҫ�����޸Ŀ��
	for(;;)										//�����Ϊ���������ˣ�����ѡ���˳���
	{
		cin>>YesOrNo;
		if((YesOrNo!='y')&&(YesOrNo!='Y')&&(YesOrNo!='n')&&(YesOrNo!='N'))
			cout<<"����������������룺"<<endl;
		else
			break;
	}
	if((YesOrNo=='y')||(YesOrNo=='Y'))		//���ѡ��y����Y����ʾҪ���ҿ�档
	{
		cout<<endl;
		cout<<"1.����װ���Ƽ���"<<endl;
		cout<<"2.����װ��ż���"<<endl;
		cout<<"������ִ����ܣ���ѡ1-2��";	//��ʾѡ����ּ�����ʽ��
		for(;;)		//����ѭ��������������ʾ�ٴ����룬��ȷ���˳���
		{
			cin>>xuanze;
			if((xuanze<1)||(xuanze>2))
				cout<<"����������������룺"<<endl;
			else 
				break;
		}
		switch(xuanze)	//��switch����е�case�־���������ʽ��
		{
		case 1:
			FindAndChangeCountOnName();
			break;
		case 2:
			FindAndChangeCountOnNumber();
			break;
		}
	}
	else		//���ѡ��n����N����ʾҪ�˳���
	{
		cout<<"�����˳������Ժ�";
		for(int i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
					{
						j=j+1;
						j=j-1;
					}
					cout<<".";
			}
		cout<<endl;
		cout<<"�˳��ɹ���"<<endl;
	}
}
//�˵���������ʵ�֡�
void Handle_Menu()
{
	for(;;)
	{
		switch(Menu_Select())
		{
		case 1:
			//���ѡ��1���������޸Ĺ���Ա���Ƽ������ӳ���Ρ�
			Change_M_P();	//�޸Ĺ���Ա���Ƽ�����ĺ�����
			break;
		case 2:
			//���ѡ��2�����������Ҽ��޸ĵ������Ƶ��ӳ���Ρ�
			FindAndChangeBossName();	//���Ҽ��޸ĵ������Ƶĺ�����
		case 3:	
			//���ѡ��3�����������Ҽ��޸ķ�װ�����Ƶ��ӳ���Ρ�
			FindAndChangeShopName();	//���Ҽ��޸ķ�װ�����Ƶĺ�����
		case 4:	
			//���ѡ��4�������������޸Ŀ����ӳ���Ρ�
			FindAndChangeCount();	//�����޸Ŀ��ĺ�����
			break;
		case 5:		//���ѡ��6���������˳����ӳ����
			{
				cout<<"�����˳������Ժ�";
				for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j=j+1;
						j=j-1;
					}
					cout<<".";
				}
				cout<<endl;
				cout<<"�˳��ɹ���"<<endl;
				exit(0);
			}
		}
	}
}
//��¼������ʵ��
void DengLu()
{	
	int m,n;
	int DengLuNumbers=3;	//������¼����
	char managername[30],passion[30];
	char xuanze;
	cout<<"���Ƿ�Ҫ��¼����������?(y/n)"<<endl;	//��ʾ�Ƿ�Ҫ��¼��
	for(;;)
	{
		cin>>xuanze;	//����ѡ��
		if((xuanze!='y')&&(xuanze!='Y')&&(xuanze!='n')&&(xuanze!='N'))		//������벻Ϊy.n.N.Y���κ�һ��������ʾ��������ٴ����롣
			cout<<"�����������������!"<<endl;
		else 
			break;
	}	
	if((xuanze=='Y')||(xuanze=='y'))     //���ѡ��Y����y���¼���������ġ�
	{

		cout<<"��ӭ��½����������!"<<endl;
		cout<<"�����������Ա���Ƽ�����"<<endl;
		for(DengLuNumbers=0;DengLuNumbers<3;DengLuNumbers++)  //���õ�¼������
		{
			cin>>managername;   
			cin>>passion;		//�������Ա���Ƽ����롣
			DengLuNumbers--;	//��¼��������1.
			m=oneshop.YanZhName(managername);	
			n=oneshop.YanZhPassion(passion);	//��֤����Ĺ���Ա���Ƽ����룬����Է���ֵΪ֤��
			if((n>0||n<0)||(m>0||m<0))			//�������ֵΪ�����߸��������������ʾ�ٴ����롣
			{
				cout<<"����"<<endl;
				cout<<"���������룡"<<endl;
			}
			else 
				break;
			if(DengLuNumbers==0)		//�����¼�������ζ�����Ա���Ƽ����벻���ϣ����Զ��˳���
			{
				cout<<"���Ѿ���¼���Σ�"<<endl;
				cout<<"�����˳�";
				for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j=j+1;
						j=j-1;
					}
					cout<<".";
				}
				cout<<endl;
			}
		}
		if(m==0&&n==0)		//�������Ա���Ƽ�������֤����ֵ��Ϊ0����ʾ������ȷ�����е�¼��
		{
			cout<<"����Ա���Ƽ�������ȷ��"<<endl;
			cout<<"���ڵ�½,���Ժ�";
			for(int i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<endl;
			cout<<"��½�ɹ���"<<endl;			
			Handle_Menu();    //����Ա���Ƽ�������Ϻ��ò˵����������д���
		}
	}
	else if((xuanze=='n')||(xuanze=='N'))    //��ѡ��n����N�󣬴ӵ�¼�����˳���
	{
		cout<<"�����˳������Ժ�";
		for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j=j+1;
						j=j-1;
					}
					cout<<".";
				}
		cout<<endl;
		cout<<"�˳��ɹ���"<<endl;
	}
}
