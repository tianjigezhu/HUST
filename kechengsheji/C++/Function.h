//包含所需头文件。
#include"ClothShop.h"
#include"iostream"
using namespace std;
//声明一个Shop对象。
Shop oneshop("太平洋服装城","黄晓明","admin","admin",30,10,20,5,35.0,23.0,19.0,20.0);
//菜单选择函数的实现。
int Menu_Select()
{
	int xuanze;
	cout<<endl;
	cout<<"1.修改库存管理中心管理员名称及密码"<<endl;
	cout<<"2.查看修改服装店主姓名"<<endl;
	cout<<"3.查看修改服装店名"<<endl;
	cout<<"4.查看修改服装库存"<<endl;
	cout<<"5.退出"<<endl;
	cout<<"左边的数字对应功能选择，请选1-5:";	//提示选择功能。
	for(;;)
	{
		cin>>xuanze;
		cout<<endl;
		if(xuanze<1 || xuanze>5)	//如果选择不为1-5中任何一个，则提示错误，再次输入。
			cout<<"输入错误，请重选1-5:"<<endl;
		else
			break;	//如果输入正确则跳出。
	}
	return xuanze;
}
//修改库存管理中心管理员名称及密码
void Change_M_P()
{
	char NewManagerName[30];	//声明新的管理员名称的字符数组。
	char NewPassion[30];		//声明新的管理员密码的字符数组。
	char xuanze;
	cout<<"您是否要修改管理员名称及密码(y/n)？"<<endl;	//提示是否要修改管理员名称及密码。
	for(;;)		//设置无穷循环，如果输入错，提示再次输入，正确则跳出。
	{
		cin>>xuanze;
		if((xuanze!='y')&&(xuanze!='Y')&&(xuanze!='n')&&(xuanze!='N'))
			cout<<"输入错误，请重新输入:"<<endl;
		else 
			break;
	}
	if(xuanze=='y'||xuanze=='Y')	//选择要修改。
	{
		int xuanze;
		cout<<"1.修改库存管理中心管理员名称"<<endl;
		cout<<"2.修改库存管理中心管理员密码"<<endl;
		cout<<"3.同时修改库存管理中心管理员名称及密码"<<endl;
		cout<<"4.退出"<<endl;
		cout<<"左边的数字对应功能选项，请选1-4:"<<endl;
		for(;;)
		{
			cin>>xuanze;
			if(xuanze<1||xuanze>4)
				cout<<"输入错误请重新选择:"<<endl;
			else 
				break;
		}
		switch(xuanze)
		{
		case 1:		//只修改管理员名称。
			{
				char xuanze;
				cout<<"请输入新管理员名称(限定30个字母或数字或者15个汉字)"<<endl;
				cin>>NewManagerName;
				cout<<"名称已经被修改了，您是否想保存？(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if((xuanze!='n')&&(xuanze!='y')&&(xuanze!='Y')&&(xuanze!='N'))
						cout<<"输入错误请重新输入:"<<endl;
					else
						break;
				}
				if((xuanze=='y')||(xuanze=='Y'))
				{
					cout<<"新管理员名称正在保存，请稍候";
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
					cout<<"正在取消，请稍候";
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
					cout<<"新管理员名称未保存。"<<endl;
				}
			}
			break;
		case 2:		//只修改管理员密码。
			{
				char xuanze;
				cout<<"请您输入新管理员密码(限定30个字母或数字或者15个汉字)"<<endl;
				cin>>NewPassion;
				cout<<"管理员密码已经被修改了，您是否想保存？(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if((xuanze!='n')&&(xuanze!='y')&&(xuanze!='Y')&&(xuanze!='N'))
						cout<<"输入错误请重新输入:"<<endl;
					else
						break;
				}
				if((xuanze=='y')||(xuanze=='Y'))
				{
					cout<<"新管理员密码正在保存，请稍候";
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
					cout<<"正在取消，请稍候";
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
					cout<<"新管理员密码未保存。"<<endl;
				}
			}
			break;
		case 3:		//同时修改管理员名称及密码。
			{
				char xuanze;
				cout<<"请输入新管理员名称及密码(限定30个字母或数字或者15个汉字):"<<endl;				
				cin>>NewManagerName>>NewPassion;
				cout<<"管理员名称及密码已被修改，您是否想保存？(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if((xuanze!='n')&&(xuanze!='y')&&(xuanze!='Y')&&(xuanze!='N'))
						cout<<"输入错误请重新输入:"<<endl;
					else 
						break;
				}
				if((xuanze=='y')||(xuanze=='Y'))
				{
					cout<<"新管理员名称正在保存，请稍候";
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
					cout<<"新管理员密码正在保存，请稍候";
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
				cout<<"新管理员名称及密码未保存！"<<endl;
			}
			break;
		case 4:
			cout<<"正在退出，请稍候";
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
			cout<<"退出成功！"<<endl;
			break;
		}
	}
}
//查看及修改服装店主姓名
void FindAndChangeBossName()
{
	int xuanze;
	char YesOrNo;
	char NewBossName[30];
	cout<<"1.查看店主姓名"<<endl;
	cout<<"2.修改店主姓名"<<endl;
	cout<<"3.退出"<<endl;
	cout<<"左边数字代表功能，请选择1-3：";
	for(;;)
	{
		cin>>xuanze;
		if(xuanze<1||xuanze>3)
			cout<<"输入错误请重新选择！"<<endl;
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
			cout<<"请输入新店主姓名："<<endl;
			cin>>NewBossName;
			cout<<"店主姓名已被修改是否要保存？(y/n)"<<endl;
			for(;;)
			{
				cin>>YesOrNo;
				if((YesOrNo!='y')&&(YesOrNo!='Y')&&(YesOrNo!='n')&&(YesOrNo!='N'))
					cout<<"输入错误请重新输入！"<<endl;
				else
					break;
			}
			if((YesOrNo=='y')||(YesOrNo=='Y'))
			{
				cout<<"正在保存请稍候";
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
				cout<<"正在取消，请稍候";
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
				cout<<"未保存！"<<endl;
		}
	}
	if(xuanze==3)
	{
		cout<<"正在退出，请稍候";
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
		cout<<"退出成功！"<<endl;
	}
}
//查看及修改服装店名
void FindAndChangeShopName()
{
	int xuanze;
	char YesOrNo;
	char NewShopName[30];
	cout<<"1.查看服装店名"<<endl;
	cout<<"2.修改服装店名"<<endl;
	cout<<"3.退出"<<endl;
	cout<<"左边数字代表功能，请选1-3："<<endl;
	for(;;)
	{
		cin>>xuanze;
		if(xuanze<1||xuanze>3)
			cout<<"输入错误请重新选择！"<<endl;
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
			cout<<"请输入服装店名："<<endl;
			cin>>NewShopName;
			cout<<"服装店名已被修改是否要保存？(y/n)"<<endl;
			for(;;)
			{
				cin>>YesOrNo;
				if((YesOrNo!='y')&&(YesOrNo!='Y')&&(YesOrNo!='n')&&(YesOrNo!='N'))
					cout<<"输入错误请重新输入！"<<endl;
				else
					break;
			}
			if((YesOrNo=='y')||(YesOrNo=='Y'))
			{
				cout<<"正在保存请稍候";
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
				cout<<"正在取消，请稍候";
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
				cout<<"未保存！"<<endl;
		}
	case 3:
		{
			cout<<"正在退出，请稍候";
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
			cout<<"退出成功！"<<endl;
		}
		break;
	}
}
//查找修改库存的函数的实现。
/*按服装名称检索的函数实现。*/
/*按名称查找修改外衣库存函数的实现*/
void FindAndChangeWaiYiCountOnName(char *name)
{
	char xuanze;
	int choose,choose2;
	int count;
	char WaiYiName[]="外衣";
	if(strcmp(WaiYiName,name)==0)
	{
		cout<<endl;
		cout<<"1.查找外衣库存"<<endl;
		cout<<"2.修改外衣库存"<<endl;
		cout<<"3.退出"<<endl;
		cout<<"左边数字代表功能，请选择1-3："<<endl;
		for(;;)
		{
			cin>>choose;
			if((choose<1)||(choose>3))
				cout<<"输入错误，请重新输入："<<endl;
			else
				break;
		}
		if(choose==1)
		{
			cout<<"正在查找外衣的库存数量，请稍候";
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
			cout<<"外衣的库存数量已查到。"<<endl;
			cout<<"目前服装店外衣库存为："<<endl;
			cout<<oneshop.GetWaiYiCount()<<endl;
			if(oneshop.GetWaiYiCount()==0)
				cout<<"外衣库存严重不足！请及时增加库存！"<<endl;
			else if(oneshop.GetWaiYiCount()>0&&oneshop.GetWaiYiCount()<=10)
				cout<<"外衣库存缺乏！请及时增加库存！"<<endl;
			else if(oneshop.GetWaiYiCount()>10&&oneshop.GetWaiYiCount()<=20)
				cout<<"外衣库存较为充足，暂时无需增加库存。"<<endl;
			else if(oneshop.GetWaiYiCount()>20&&oneshop.GetWaiYiCount()<=30)
				cout<<"外衣库存充足，无需增加库存。"<<endl;
			else
				cout<<"外衣库存过多！请及时分销。以免造成库存积压。"<<endl;
		}	
		else if(choose==2)
		{
			cout<<"1.增加外衣库存"<<endl;
			cout<<"2.减少外衣库存"<<endl;
			cout<<"3.退出"<<endl;
			cout<<"左边数字代表功能，请选1-3："<<endl;
			for(;;)
			{
				cin>>choose2;
				if(choose2>3||choose2<1)
					cout<<"输入错误，请重新输入："<<endl;
				else 
					break;
			}
			switch(choose2)
			{
			case 1:
			{
				cout<<"请输入要增加的外衣数量："<<endl;
				cin>>count;
				cout<<"正在修改，请稍候";
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
				cout<<"修改完成，请问是否要保存？(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"输入错误，请重新输入："<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"正在保存，请稍候";
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
					cout<<"正在退出，请稍候";
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
					cout<<"退出成功！"<<endl;
				}
			}
				break;
			case 2:
			{
				cout<<"请输入要减少的外衣数量："<<endl;
				cin>>count;
				cout<<"正在修改，请稍候";
				for(int i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<"修改完成，请问是否要保存？(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"输入错误，请重新输入："<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"正在保存，请稍候";
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
					cout<<"正在退出，请稍候";
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
					cout<<"退出成功！"<<endl;
				}
			}
				break;
			case 3:
			{
				cout<<"正在退出，请稍候";
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
				cout<<"退出成功！"<<endl;
				break;
			}
			}
		if(choose==3)
		{
			cout<<"正在退出，请稍候";
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
			cout<<"退出成功！"<<endl;
		 }

		}
	}
}
/*按名称查找修改衬衣库存函数的实现*/
void FindAndChangeChenYiCountOnName(char *name)
{
	char xuanze;
	int choose,choose2,i;
	int count;
    char ChenYiName[]="衬衣";
	if(strcmp(ChenYiName,name)==0)
	{
		cout<<endl;
		cout<<"1.查找衬衣库存"<<endl;
		cout<<"2.修改衬衣库存"<<endl;
		cout<<"3.退出"<<endl;
		cout<<"左边数字代表功能，请选择1-3："<<endl;
		for(;;)
		{
			cin>>choose;
			if((choose<1)||(choose>3))
				cout<<"输入错误，请重新输入："<<endl;
			else
				break;
		}
		if(choose==1)
		{
			cout<<"正在查找衬衣的库存数量，请稍候";
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
			cout<<"衬衣的库存数量已查到。"<<endl;
			cout<<"目前服装店衬衣库存为："<<endl;
			cout<<oneshop.GetChenYiCount()<<endl;
			if(oneshop.GetChenYiCount()==0)
				cout<<"衬衣库存严重不足！请及时增加库存！"<<endl;
			else if(oneshop.GetChenYiCount()>0&&oneshop.GetChenYiCount()<=10)
				cout<<"衬衣库存缺乏！请及时增加库存！"<<endl;
			else if(oneshop.GetChenYiCount()>10&&oneshop.GetChenYiCount()<=20)
				cout<<"衬衣库存较为充足，暂时无需增加库存。"<<endl;
			else if(oneshop.GetChenYiCount()>20&&oneshop.GetChenYiCount()<=30)
				cout<<"衬衣库存充足，无需增加库存。"<<endl;
			else
				cout<<"衬衣库存过多！请及时分销。以免造成库存积压。"<<endl;
		}	
		else if(choose==2)
		{
			cout<<"1.增加衬衣库存"<<endl;
			cout<<"2.减少衬衣库存"<<endl;
			cout<<"3.退出"<<endl;
			cout<<"左边数字代表功能，请选1-3："<<endl;
			for(;;)
			{
				cin>>choose2;
				if(choose2>3||choose2<1)
					cout<<"输入错误，请重新输入："<<endl;
				else 
					break;
			}
			switch(choose2)
			{
			case 1:	
				cout<<"请输入要增加的衬衣数量："<<endl;
				cin>>count;
				cout<<"正在修改，请稍候";
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
				cout<<"修改完成，请问是否要保存？(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"输入错误，请重新输入："<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"正在保存，请稍候";
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
					cout<<"正在退出，请稍候";
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
					cout<<"退出成功！"<<endl;
				}
				break;
			case 2:
				{
				cout<<"请输入要减少的衬衣数量："<<endl;
				cin>>count;
				cout<<"正在修改，请稍候";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<"修改完成，请问是否要保存？(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"输入错误，请重新输入："<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"正在保存，请稍候";
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
					cout<<"正在退出，请稍候";
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
					cout<<"退出成功！"<<endl;
				}
				}
				break;
			case 3:
				{
				int i;
				cout<<"正在退出，请稍候";
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
				cout<<"退出成功！"<<endl;
				}
				break;
			}
		}
		else if(choose==3)
		{
			cout<<"正在退出，请稍候";
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
			cout<<"退出成功！"<<endl;
		}
	}	
}
/*按名称查找修改裤子库存函数的实现*/
void FindAndChangeKuZiCountOnName(char *name)
{
	char xuanze;
	int choose,choose2,i;
	int count;
	char KuZiName[]="裤子";
	if(strcmp(KuZiName,name)==0)
	{
		cout<<endl;
		cout<<"1.查找裤子库存"<<endl;	
		cout<<"2.修改裤子库存"<<endl;
		cout<<"3.退出"<<endl;
		cout<<"左边数字代表功能，请选择1-3："<<endl;
		for(;;)
		{
			cin>>choose;
			if((choose<1)||(choose>3))
				cout<<"输入错误，请重新输入："<<endl;
			else
				break;
		}
		if(choose==1)
		{
			cout<<"正在查找裤子的库存数量，请稍候";
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
			cout<<"裤子的库存数量已查到。"<<endl;
			cout<<oneshop.GetKuZiCount()<<endl;
			if(oneshop.GetKuZiCount()==0)
				cout<<"裤子库存严重不足！请及时增加库存！"<<endl;
			else if(oneshop.GetKuZiCount()>0&&oneshop.GetKuZiCount()<=10)
				cout<<"裤子库存缺乏！请及时增加库存！"<<endl;
			else if(oneshop.GetKuZiCount()>10&&oneshop.GetKuZiCount()<=20)
				cout<<"裤子库存较为充足，暂时无需增加库存。"<<endl;
			else if(oneshop.GetKuZiCount()>20&&oneshop.GetKuZiCount()<=30)
				cout<<"裤子库存充足，无需增加库存。"<<endl;
			else
				cout<<"裤子库存过多！请及时分销。以免造成库存积压。"<<endl;
		}	
		else if(choose==2)
		{
			cout<<"1.增加裤子库存"<<endl;
			cout<<"2.减少裤子库存"<<endl;
			cout<<"3.退出"<<endl;
			cout<<"左边数字代表功能，请选1-3："<<endl;
			for(;;)
			{
				cin>>choose2;
				if(choose2>3||choose2<1)
					cout<<"输入错误，请重新输入："<<endl;
				else 
					break;
			}
			switch(choose2)
			{
			case 1:		
				cout<<"请输入要增加的裤子数量："<<endl;
				cin>>count;
				cout<<"正在修改，请稍候";
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
				cout<<"修改完成，请问是否要保存？(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"输入错误，请重新输入："<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"正在保存，请稍候";
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
					cout<<"正在退出，请稍候";
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
					cout<<"退出成功！"<<endl;
				}
				break;
			case 2:
				cout<<"请输入要减少的裤子数量："<<endl;
				cin>>count;
				cout<<"正在修改，请稍候";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<"修改完成，请问是否要保存？(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"输入错误，请重新输入："<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"正在保存，请稍候";
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
					cout<<"正在退出，请稍候";
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
					cout<<"退出成功！"<<endl;
				}
				break;
			case 3:
				cout<<"正在退出，请稍候";
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
				cout<<"退出成功！"<<endl;
				break;
			}
		}
		else if(choose==3)
		{
			cout<<"正在退出，请稍候";
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
			cout<<"退出成功！"<<endl;
		}
	}		
}
/*按名称查找修改套装库存函数的实现*/
void FindAndChangeTaoZhuangCountOnName(char *name)
{
	char xuanze;
	int choose,choose2,i;
	int count;
	char TaoZhuangName[]="套装";
	if(strcmp(TaoZhuangName,name)==0)
	{
		cout<<endl;
		cout<<"1.查找套装库存"<<endl;
		cout<<"2.修改套装库存"<<endl;
		cout<<"3.退出"<<endl;
		cout<<"左边数字代表功能，请选择1-3："<<endl;
		for(;;)
		{
			cin>>choose;
			if((choose<1)||(choose>3))
				cout<<"输入错误，请重新输入："<<endl;
			else
				break;
		}
		if(choose==1)
		{
			cout<<"正在查找套装的库存数量，请稍候";
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
			cout<<"套装的库存数量已查到。"<<endl;
			cout<<oneshop.GetTaoZhuangCount()<<endl;
			if(oneshop.GetTaoZhuangCount()==0)
				cout<<"套装库存严重不足！请及时增加库存！"<<endl;
			else if(oneshop.GetTaoZhuangCount()>0&&oneshop.GetTaoZhuangCount()<=10)
				cout<<"套装库存缺乏！请及时增加库存！"<<endl;
			else if(oneshop.GetTaoZhuangCount()>10&&oneshop.GetTaoZhuangCount()<=20)
				cout<<"套装库存较为充足，暂时无需增加库存。"<<endl;
			else if(oneshop.GetTaoZhuangCount()>20&&oneshop.GetTaoZhuangCount()<=30)
				cout<<"套装库存充足，无需增加库存。"<<endl;
			else
				cout<<"套装库存过多！请及时分销。以免造成库存积压。"<<endl;
		}
		else if(choose==2)
		{
		cout<<"1.增加套装库存"<<endl;
		cout<<"2.减少套装库存"<<endl;
		cout<<"3.退出"<<endl;
		cout<<"左边数字代表功能，请选1-3："<<endl;
		for(;;)
		{
			cin>>choose2;
			if(choose2>3||choose2<1)
				cout<<"输入错误，请重新输入："<<endl;
			else 
				break;
		}
		switch(choose2)
		{
		case 1:		
			cout<<"请输入要增加的套装数量："<<endl;
			cin>>count;
			cout<<"正在修改，请稍候";
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
			cout<<"修改完成，请问是否要保存？(y/n)"<<endl;
			for(;;)
			{
				cin>>xuanze;
				if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
					cout<<"输入错误，请重新输入："<<endl;
				else
					break;
			}
			if(xuanze=='y'&&xuanze=='Y')
			{
				cout<<"正在保存，请稍候";
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
				cout<<"正在退出，请稍候";
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
				cout<<"退出成功！"<<endl;
			}
			break;
		case 2:
			cout<<"请输入要减少的套装数量："<<endl;
			cin>>count;
			cout<<"正在修改，请稍候";
			for(i=0;i<9;i++)
			{
				for(long j=0;j<100000000;j++)
				{
					j+=1;
					j-=1;
				}
				cout<<".";
			}
			cout<<"修改完成，请问是否要保存？(y/n)"<<endl;
			for(;;)
			{
				cin>>xuanze;
				if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
					cout<<"输入错误，请重新输入："<<endl;
				else
					break;
			}
			if(xuanze=='y'&&xuanze=='Y')
			{
				cout<<"正在保存，请稍候";
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
				cout<<"正在退出，请稍候";
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
				cout<<"退出成功！"<<endl;
			}
			break;
		case 3:
			cout<<"正在退出，请稍候";
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
			cout<<"退出成功！"<<endl;
			break;
		}
		}
		else if(choose==3)	
		{
			cout<<"正在退出，请稍候";
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
			cout<<"退出成功！"<<endl;
		}
	}			
}
/*按名称查找修改服装库存主函数的实现*/
void FindAndChangeCountOnName()
{
	char ClothName[10];
	char WaiYiName[]="外衣",ChenYiName[]="衬衣",KuZiName[]="裤子",TaoZhuangName[]="套装";
	cout<<"请输入要查找修改的服装的名称：（外衣、衬衣、裤子、套装）"<<endl;
	for(;;)
	{
		cin>>ClothName;
		if((strcmp(WaiYiName,ClothName)!=0)&&(strcmp(ChenYiName,ClothName)!=0)&&
			(strcmp(KuZiName,ClothName)!=0)&&(strcmp(TaoZhuangName,ClothName)!=0))
			cout<<"目前库存中没有这种服装，请重新输入："<<endl;
		else 
			break;
	}
	FindAndChangeWaiYiCountOnName(ClothName);
	FindAndChangeChenYiCountOnName(ClothName);
	FindAndChangeKuZiCountOnName(ClothName);
	FindAndChangeTaoZhuangCountOnName(ClothName);
}
/*按服装编号检索的函数的实现*/
/*按编号查找修改外衣库存函数的实现*/
void FindAndChangeWaiYiCountOnNumber(int clothnumber)
{
	char xuanze;
	int choose,choose2,i;
	int count;
	if(oneshop.GetWaiYiNumber()==clothnumber)
	{
		cout<<endl;
		cout<<"1.查找外衣库存"<<endl;
		cout<<"2.修改外衣库存"<<endl;
		cout<<"3.退出"<<endl;
		cout<<"左边数字代表功能，请选择1-3："<<endl;
		for(;;)
		{
			cin>>choose;
			if((choose<1)||(choose>3))
				cout<<"输入错误，请重新输入："<<endl;
			else
				break;
		}
		if(choose==1)
		{
			cout<<"正在查找外衣的库存数量，请稍候";
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
			cout<<"外衣的库存数量已查到。"<<endl;
			cout<<"目前服装店外衣库存为："<<endl;
			cout<<oneshop.GetWaiYiCount()<<endl;
			if(oneshop.GetWaiYiCount()==0)
				cout<<"外衣库存严重不足！请及时增加库存！"<<endl;
			else if(oneshop.GetWaiYiCount()>0&&oneshop.GetWaiYiCount()<=10)
				cout<<"外衣库存缺乏！请及时增加库存！"<<endl;
			else if(oneshop.GetWaiYiCount()>10&&oneshop.GetWaiYiCount()<=20)
				cout<<"外衣库存较为充足，暂时无需增加库存。"<<endl;
			else if(oneshop.GetWaiYiCount()>20&&oneshop.GetWaiYiCount()<=30)
				cout<<"外衣库存充足，无需增加库存。"<<endl;
			else
				cout<<"外衣库存过多！请及时分销。以免造成库存积压。"<<endl;
		}	
		else if(choose==2)
		{
			cout<<"1.增加外衣库存"<<endl;
			cout<<"2.减少外衣库存"<<endl;
			cout<<"3.退出"<<endl;
			cout<<"左边数字代表功能，请选1-3："<<endl;
			for(;;)
			{
				cin>>choose2;
				if(choose2>3||choose2<1)
					cout<<"输入错误，请重新输入："<<endl;
				else 
					break;
			}
			switch(choose2)
			{
			case 1:		
				cout<<"请输入要增加的外衣数量："<<endl;
				cin>>count;
				cout<<"正在修改，请稍候";
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
				cout<<"修改完成，请问是否要保存？(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"输入错误，请重新输入："<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"正在保存，请稍候";
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
					cout<<"正在退出，请稍候";
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
					cout<<"退出成功！"<<endl;
				}
				break;
			case 2:
				cout<<"请输入要减少的外衣数量："<<endl;
				cin>>count;
				cout<<"正在修改，请稍候";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<"修改完成，请问是否要保存？(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"输入错误，请重新输入："<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"正在保存，请稍候";
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
					cout<<"正在退出，请稍候";
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
					cout<<"退出成功！"<<endl;
				}
				break;
			case 3:
				cout<<"正在退出，请稍候";
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
				cout<<"退出成功！"<<endl;
				break;
			}
		}
		else if(choose==3)
		{
			cout<<"正在退出，请稍候";
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
			cout<<"退出成功！"<<endl;
		}
	}		
}
/*按编号超找修改衬衣库存函数的实现*/
void FindAndChangeChenYiCountOnNumber(int clothnumber)
{
	char xuanze;
	int choose,choose_2,i;
	int count;
	if(oneshop.GetChenYiNumber()==clothnumber)
	{
		cout<<endl;
		cout<<"1.查找衬衣库存"<<endl;
		cout<<"2.修改衬衣库存"<<endl;
		cout<<"3.退出"<<endl;
		cout<<"左边数字代表功能，请选择1-3："<<endl;
		for(;;)
		{
			cin>>choose;
			if((choose<1)||(choose>3))
				cout<<"输入错误，请重新输入："<<endl;
			else
				break;
		}
		if(choose==1)
		{
			cout<<"正在查找衬衣的库存数量，请稍候";
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
			cout<<"衬衣的库存数量已查到。"<<endl;
			cout<<"目前服装店衬衣库存为："<<endl;
			cout<<oneshop.GetChenYiCount()<<endl;
			if(oneshop.GetChenYiCount()==0)
				cout<<"衬衣库存严重不足！请及时增加库存！"<<endl;
			else if(oneshop.GetChenYiCount()>0&&oneshop.GetChenYiCount()<=10)
				cout<<"衬衣库存缺乏！请及时增加库存！"<<endl;
			else if(oneshop.GetChenYiCount()>10&&oneshop.GetChenYiCount()<=20)
				cout<<"衬衣库存较为充足，暂时无需增加库存。"<<endl;
			else if(oneshop.GetChenYiCount()>20&&oneshop.GetChenYiCount()<=30)
				cout<<"衬衣库存充足，无需增加库存。"<<endl;
			else
				cout<<"衬衣库存过多！请及时分销。以免造成库存积压。"<<endl;
		}	
		else if(choose==2)
		{
			cout<<"1.增加衬衣库存"<<endl;
			cout<<"2.减少衬衣库存"<<endl;
			cout<<"3.退出"<<endl;
			cout<<"左边数字代表功能，请选1-3："<<endl;
			for(;;)
			{
				cin>>choose_2;
				if(choose_2>3||choose_2<1)
					cout<<"输入错误，请重新输入："<<endl;
				else 
					break;
			}
			switch(choose_2)
			{
			case 1:		
				cout<<"请输入要增加的衬衣数量："<<endl;
				cin>>count;
				cout<<"正在修改，请稍候";
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
				cout<<"修改完成，请问是否要保存？(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"输入错误，请重新输入："<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"正在保存，请稍候";
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
					cout<<"正在退出，请稍候";
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
					cout<<"退出成功！"<<endl;
				}
				break;
			case 2:
				cout<<"请输入要减少的衬衣数量："<<endl;
				cin>>count;
				cout<<"正在修改，请稍候";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<"修改完成，请问是否要保存？(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"输入错误，请重新输入："<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"正在保存，请稍候";
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
					cout<<"正在退出，请稍候";
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
					cout<<"退出成功！"<<endl;
				}
				break;
			case 3:
				cout<<"正在退出，请稍候";
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
				cout<<"退出成功！"<<endl;
				break;
			}
		}
		else if(choose==3)
		{
			cout<<"正在退出，请稍候";
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
			cout<<"退出成功！"<<endl;
		}		
	}
}
/*按编号查找修改裤子库存函数的实现*/
void FindAndChangeKuZiCountOnNumber(int clothnumber)
{
	char xuanze;
	int choose,choose2,i;
	int count;
	if(oneshop.GetKuZiNumber()==clothnumber)
	{
		cout<<endl;
		cout<<"1.查找裤子库存"<<endl;
		cout<<"2.修改裤子库存"<<endl;
		cout<<"3.退出"<<endl;
		cout<<"左边数字代表功能，请选择1-3："<<endl;
		for(;;)
		{
			cin>>choose;
			if((choose<1)||(choose>3))
				cout<<"输入错误，请重新输入："<<endl;
			else
				break;
		}
		if(choose==1)
		{
			cout<<"正在查找裤子的库存数量，请稍候";
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
			cout<<"裤子的库存数量已查到。"<<endl;
			cout<<oneshop.GetKuZiCount()<<endl;
			if(oneshop.GetKuZiCount()==0)
				cout<<"裤子库存严重不足！请及时增加库存！"<<endl;
			else if(oneshop.GetKuZiCount()>0&&oneshop.GetKuZiCount()<=10)
				cout<<"裤子库存缺乏！请及时增加库存！"<<endl;
			else if(oneshop.GetKuZiCount()>10&&oneshop.GetKuZiCount()<=20)
				cout<<"裤子库存较为充足，暂时无需增加库存。"<<endl;
			else if(oneshop.GetKuZiCount()>20&&oneshop.GetKuZiCount()<=30)
				cout<<"裤子库存充足，无需增加库存。"<<endl;
			else
				cout<<"裤子库存过多！请及时分销。以免造成库存积压。"<<endl;
		}	
		else if(choose==2)
		{
			cout<<"1.增加裤子库存"<<endl;
			cout<<"2.减少裤子库存"<<endl;
			cout<<"3.退出"<<endl;
			cout<<"左边数字代表功能，请选1-3："<<endl;
			for(;;)
			{
				cin>>choose2;
				if(choose2>3||choose2<1)
					cout<<"输入错误，请重新输入："<<endl;
				else 
					break;
			}
			switch(choose2)
			{
			case 1:		
				cout<<"请输入要增加的裤子数量："<<endl;
				cin>>count;
				cout<<"正在修改，请稍候";
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
				cout<<"修改完成，请问是否要保存？(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"输入错误，请重新输入："<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"正在保存，请稍候";
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
					cout<<"正在退出，请稍候";
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
					cout<<"退出成功！"<<endl;
				}
				break;
			case 2:
				cout<<"请输入要减少的裤子数量："<<endl;
				cin>>count;
				cout<<"正在修改，请稍候";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<"修改完成，请问是否要保存？(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"输入错误，请重新输入："<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"正在保存，请稍候";
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
					cout<<"正在退出，请稍候";
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
					cout<<"退出成功！"<<endl;
				}
				break;
			case 3:
				cout<<"正在退出，请稍候";
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
				cout<<"退出成功！"<<endl;
				break;
			}
		}
		else if(choose==3)
		{
			cout<<"正在退出，请稍候";
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
			cout<<"退出成功！"<<endl;
		}		
	}
}
/*按编号查找修改套装库存函数的实现*/
void FindAndChangeTaoZhuangCountOnNumber(int clothnumber)
{
	char xuanze;
	int choose,choose2,i;
	int count;	
	if(oneshop.GetTaoZhuangNumber()==clothnumber)
	{
		cout<<endl;
		cout<<"1.查找套装库存"<<endl;
		cout<<"2.修改套装库存"<<endl;
		cout<<"3.退出"<<endl;
		cout<<"左边数字代表功能，请选择1-3："<<endl;
		for(;;)
		{
			cin>>choose;
			if((choose<1)||(choose>3))
				cout<<"输入错误，请重新输入："<<endl;
			else
				break;
		}
		if(choose==1)
		{
			cout<<"正在查找套装的库存数量，请稍候";
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
			cout<<"套装的库存数量已查到。"<<endl;
			cout<<oneshop.GetTaoZhuangCount()<<endl;
			if(oneshop.GetTaoZhuangCount()==0)
				cout<<"套装库存严重不足！请及时增加库存！"<<endl;
			else if(oneshop.GetTaoZhuangCount()>0&&oneshop.GetTaoZhuangCount()<=10)
				cout<<"套装库存缺乏！请及时增加库存！"<<endl;
			else if(oneshop.GetTaoZhuangCount()>10&&oneshop.GetTaoZhuangCount()<=20)
				cout<<"套装库存较为充足，暂时无需增加库存。"<<endl;
			else if(oneshop.GetTaoZhuangCount()>20&&oneshop.GetTaoZhuangCount()<=30)
				cout<<"套装库存充足，无需增加库存。"<<endl;
			else
				cout<<"套装库存过多！请及时分销。以免造成库存积压。"<<endl;
		}	
		else if(choose==2)
		{
			cout<<"1.增加套装库存"<<endl;
			cout<<"2.减少套装库存"<<endl;
			cout<<"3.退出"<<endl;
			cout<<"左边数字代表功能，请选1-3："<<endl;
			for(;;)
			{
				cin>>choose2;
				if(choose2>3||choose2<1)
					cout<<"输入错误，请重新输入："<<endl;
				else 
					break;
			}
			switch(choose2)
			{
			case 1:		
				cout<<"请输入要增加的套装数量："<<endl;
				cin>>count;
				cout<<"正在修改，请稍候";
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
				cout<<"修改完成，请问是否要保存？(y/n)"<<endl;
				for(;;)
				{
					cout<<"";
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"输入错误，请重新输入："<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"正在保存，请稍候";
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
					cout<<"正在退出，请稍候";
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
					cout<<"退出成功！"<<endl;
				}
				break;
			case 2:
				cout<<"请输入要减少的套装数量："<<endl;
				cin>>count;
				cout<<"正在修改，请稍候";
				for(i=0;i<9;i++)
				{
					for(long j=0;j<100000000;j++)
					{
						j+=1;
						j-=1;
					}
					cout<<".";
				}
				cout<<"修改完成，请问是否要保存？(y/n)"<<endl;
				for(;;)
				{
					cin>>xuanze;
					if(xuanze!='y'&&xuanze!='Y'&&xuanze!='n'&&xuanze!='N')
						cout<<"输入错误，请重新输入："<<endl;
					else
						break;
				}
				if(xuanze=='y'&&xuanze=='Y')
				{
					cout<<"正在保存，请稍候";
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
					cout<<"正在退出，请稍候";
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
					cout<<"退出成功！"<<endl;
				}
				break;
			case 3:
				cout<<"正在退出，请稍候";
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
				cout<<"退出成功！"<<endl;
				break;
			}
		}
		else if(choose==3)
		{
			cout<<"正在退出，请稍候";
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
			cout<<"退出成功！"<<endl;
		}
	}		
}
/*按编号查找修改库存主函数的实现*/
void FindAndChangeCountOnNumber()
{
	int ClothNumber;
	cout<<"请输入要查找修改的服装的编号：(01、02、03、04)"<<endl;
	for(;;)
	{
		cin>>ClothNumber;
		if((ClothNumber!=01)&&(ClothNumber!=02)&&(ClothNumber!=03)&&(ClothNumber!=04))
			cout<<"目前此服装编号在库存中不存在，请重新输入："<<endl;
		else 
			break;
	}
	FindAndChangeWaiYiCountOnNumber(ClothNumber);
	FindAndChangeChenYiCountOnNumber(ClothNumber);
	FindAndChangeKuZiCountOnNumber(ClothNumber);
	FindAndChangeTaoZhuangCountOnNumber(ClothNumber);
}
/*查找库存的主函数体的实现*/
void FindAndChangeCount()
{
	char YesOrNo;
	int xuanze;
	cout<<"您是否想要查找修改库存？(y/n)"<<endl;	//询问是否要查找修改库存
	for(;;)										//如果因为按错而进入此，可以选择退出。
	{
		cin>>YesOrNo;
		if((YesOrNo!='y')&&(YesOrNo!='Y')&&(YesOrNo!='n')&&(YesOrNo!='N'))
			cout<<"输入错误，请重新输入："<<endl;
		else
			break;
	}
	if((YesOrNo=='y')||(YesOrNo=='Y'))		//如果选择y或者Y，表示要查找库存。
	{
		cout<<endl;
		cout<<"1.按服装名称检索"<<endl;
		cout<<"2.按服装编号检索"<<endl;
		cout<<"左边数字代表功能，请选1-2：";	//提示选择何种检索方式。
		for(;;)		//设置循环如果输入错误，提示再次输入，正确则退出。
		{
			cin>>xuanze;
			if((xuanze<1)||(xuanze>2))
				cout<<"输入错误，请重新输入："<<endl;
			else 
				break;
		}
		switch(xuanze)	//用switch语句中的case分句代表检索方式。
		{
		case 1:
			FindAndChangeCountOnName();
			break;
		case 2:
			FindAndChangeCountOnNumber();
			break;
		}
	}
	else		//如果选择n或者N，表示要退出。
	{
		cout<<"正在退出，请稍候";
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
		cout<<"退出成功！"<<endl;
	}
}
//菜单处理函数的实现。
void Handle_Menu()
{
	for(;;)
	{
		switch(Menu_Select())
		{
		case 1:
			//如果选择1，则跳到修改管理员名称及密码子程序段。
			Change_M_P();	//修改管理员名称及密码的函数。
			break;
		case 2:
			//如果选择2，则跳到查找及修改店主名称的子程序段。
			FindAndChangeBossName();	//查找及修改店主名称的函数。
		case 3:	
			//如果选择3，则跳到查找及修改服装店名称的子程序段。
			FindAndChangeShopName();	//查找及修改服装店名称的函数。
		case 4:	
			//如果选择4，则跳到查找修改库存的子程序段。
			FindAndChangeCount();	//查找修改库存的函数。
			break;
		case 5:		//如果选择6，则跳到退出的子程序段
			{
				cout<<"正在退出，请稍候";
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
				cout<<"退出成功！"<<endl;
				exit(0);
			}
		}
	}
}
//登录函数的实现
void DengLu()
{	
	int m,n;
	int DengLuNumbers=3;	//声明登录次数
	char managername[30],passion[30];
	char xuanze;
	cout<<"您是否要登录库存管理中心?(y/n)"<<endl;	//提示是否要登录。
	for(;;)
	{
		cin>>xuanze;	//输入选择。
		if((xuanze!='y')&&(xuanze!='Y')&&(xuanze!='n')&&(xuanze!='N'))		//如果输入不为y.n.N.Y中任何一个，则提示输入错误，再次输入。
			cout<<"输入错误请重新输入!"<<endl;
		else 
			break;
	}	
	if((xuanze=='Y')||(xuanze=='y'))     //如果选择Y或者y则登录库存管理中心。
	{

		cout<<"欢迎登陆库存管理中心!"<<endl;
		cout<<"请您输入管理员名称及密码"<<endl;
		for(DengLuNumbers=0;DengLuNumbers<3;DengLuNumbers++)  //设置登录次数。
		{
			cin>>managername;   
			cin>>passion;		//输入管理员名称及密码。
			DengLuNumbers--;	//登录次数自增1.
			m=oneshop.YanZhName(managername);	
			n=oneshop.YanZhPassion(passion);	//验证输入的管理员名称及密码，结果以返回值为证。
			if((n>0||n<0)||(m>0||m<0))			//如果返回值为正或者负，则输入错误提示再次输入。
			{
				cout<<"错误！"<<endl;
				cout<<"请重新输入！"<<endl;
			}
			else 
				break;
			if(DengLuNumbers==0)		//如果登录超过三次而管理员名称及密码不符合，就自动退出。
			{
				cout<<"您已经登录三次！"<<endl;
				cout<<"正在退出";
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
		if(m==0&&n==0)		//如果管理员名称及密码验证返回值都为0则提示输入正确，进行登录。
		{
			cout<<"管理员名称及密码正确。"<<endl;
			cout<<"正在登陆,请稍候";
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
			cout<<"登陆成功。"<<endl;			
			Handle_Menu();    //管理员名称及密码符合后，用菜单处理函数进行处理。
		}
	}
	else if((xuanze=='n')||(xuanze=='N'))    //当选择n或者N后，从登录界面退出。
	{
		cout<<"正在退出，请稍候";
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
		cout<<"退出成功！"<<endl;
	}
}
