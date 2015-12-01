//服装店类的定义。
#include"string.h"
#include"ClothClass.h"
#include"iostream"
using namespace std;
class Shop:public WaiYi,public ChenYi,public KuZi,public TaoZhuang
{
public:
	//服装店类构造函数的声明。
	Shop(char *shopname,char *bossname,char *managername,char *passion,
		int waiyicount,int chenyicount,int kuzicount,int taozhuangcount,
		float WaiYi,float ChenYiPrize,float KuZiPrize,float TaoZhuangPrize);
	//服装店类拷贝构造函数的声明。
	Shop(Shop &shop);
	//服装店类析构函数的声明。
	~Shop();
	//获取外衣编号的静态函数的声明。
	static int GetWaiYiNumber();
	//获取外衣数量的函数的声明。
	int GetWaiYiCount();
	//增加外衣数量的函数的声明。
	void IncWaiYiCount(int count);
	//减少外衣数量的函数的声明。
	void DecWaiYiCount(int count);
	//获取衬衣编号的静态函数的声明。
	static int GetChenYiNumber();
	//获取衬衣数量的函数的声明。
	int GetChenYiCount();
	//增加衬衣数量的函数的声明。
	void IncChenYiCount(int count);
	//减少衬衣数量的函数的声明。
	void DecChenYiCount(int count);
	//获取裤子编号的静态函数的声明。
	static int GetKuZiNumber();
	//获取裤子数量的函数的声明。
	int GetKuZiCount();
	//增加裤子数量的函数的声明。
	void IncKuZiCount(int count);
	//减少裤子数量的函数的声明。
	void DecKuZiCount(int count);
	//获取套装编号的静态函数的声明。
	static int GetTaoZhuangNumber();
	//获取套装数量的函数的声明。
	int GetTaoZhuangCount();
	//增加套装数量的函数的声明。
	void IncTaoZhuangCount(int count);
	//减少套装数量的函数的声明。
	void DecTaoZhuangCount(int count);
	//设置服装店名称函数的声明。
	void SetShopName(char *NewShopName);
	//获取服装店名称函数的声明。
	void GetShopName();
	//设置服装店主姓名函数的声明。
	void SetBossName(char *NewBossName);
	//获取服装店主姓名函数的声明。
	void GetBossName();
	//设置服装店库存管理中心管理员名称函数的声明。
	void SetManagerName(char *NewManagerName);
	//获取管理员名称函数的声明。
	void GetManagerName();
	//设置管理员密码函数的声明。
	void SetPassion(char *NewPassion);
	//获取管理员密码函数的声明。
	void GetPassion();
	//验证输入的管理员名称函数的声明。
	int YanZhName(char *name);
	//验证输入的管理员密码函数的声明。
	int YanZhPassion(char *passion);
	//获取目前服装店数量的静态函数的声明。
	static void GetShopNumbers();
private:
	//外衣数量整形数据的声明。
	int WaiYi_Count;
	//外衣编号整形静态数据的声明。
	static int WaiYi_BianHao;
	//衬衣数量整形数据的声明。
	int ChenYi_Count;
	//衬衣编号整形静态数据的声明。
	static int ChenYi_BianHao;
	//裤子数量整形数据的声明。
	int KuZi_Count;
	//裤子编号整形静态数据的声明。
	static int KuZi_BianHao;
	//套装数量整形数据的声明。
	int TaoZhuang_Count;
	//套装编号整形静态数据的声明。
	static int TaoZhuang_BianHao;
	//服装店名字符串的声明。
	char ShopName[30];
	//店主名称字符串的声明。
	char BossName[30];
	//管理员名称字符串的声明。
	char ManagerName[30];
	//管理员密码字符串的声明。
	char Passion[30];
	//服装店数量静态数据的声明。
	static int ShopNumbers;
};
//外衣编号整形静态数据的初始化。
int Shop::WaiYi_BianHao=01;
//衬衣编号整形静态数据的初始化。
int Shop::ChenYi_BianHao=02;
//裤子编号整形静态数据的初始化。
int Shop::KuZi_BianHao=03;
//套装编号整形静态数据的初始化。
int Shop::TaoZhuang_BianHao=04;
//服装店数量静态数据的初始化。
int Shop::ShopNumbers=0;


//服装店类构造函数的定义。
Shop::Shop(char *shopname,char *bossname,char *managername,char *passion,
		   int waiyicount,int chenyicount,int kuzicount,int taozhuangcount,
		   float waiyiprize,float chenyiprize,float kuziprize,float taozhuangprize)
		   :WaiYi(waiyiprize),ChenYi(chenyiprize),KuZi(kuziprize),TaoZhuang(taozhuangprize)
{
	strcpy(ShopName,shopname);
	strcpy(BossName,bossname);
	strcpy(ManagerName,managername);
	strcpy(Passion,passion);
	WaiYi_Count=waiyicount;
	ChenYi_Count=chenyicount;
	KuZi_Count=kuzicount;
	TaoZhuang_Count=taozhuangcount;
	ShopNumbers++;
}
//服装店类拷贝构造函数的定义。
Shop::Shop(Shop &shop):WaiYi(shop),ChenYi(shop),KuZi(shop),TaoZhuang(shop)
{
	strcpy(ShopName,shop.ShopName);
	strcpy(BossName,shop.BossName);
	strcpy(ManagerName,shop.ManagerName);
	strcpy(Passion,shop.Passion);
	WaiYi_Count=shop.WaiYi_Count;
	ChenYi_Count=shop.ChenYi_Count;
	KuZi_Count=shop.KuZi_Count;
	TaoZhuang_Count=shop.TaoZhuang_Count;
	ShopNumbers++;
}
//服装店类析构函数的定义。
Shop::~Shop()
{
	ShopNumbers--;
}
//买进外衣数量的函数的定义。
void Shop::IncWaiYiCount(int count)
{
	WaiYi_Count=count+WaiYi_Count;
	cout<<"外衣数量修改保存成功！"<<endl;
}
//卖出外衣数量的函数的定义。
void Shop::DecWaiYiCount(int count)
{
	if(WaiYi_Count<count)
		cout<<"库存外衣不足！不能完成此次更改！"<<endl;
	else
	{
		WaiYi_Count=WaiYi_Count-count;
		cout<<"更改成功！"<<endl;
	}
}
//获取外衣数量的函数的定义。
int Shop::GetWaiYiCount()
{
	return WaiYi_Count;
}
//获取外衣编号的静态函数的定义。
int Shop::GetWaiYiNumber()
{
	return WaiYi_BianHao;
}
//增加衬衣数量的函数的定义。
void Shop::IncChenYiCount(int count)
{
	ChenYi_Count+=count;
	cout<<"衬衣数量修改保存成功！"<<endl;
}
//减少衬衣数量的函数的定义。
void Shop::DecChenYiCount(int count)
{
	if(ChenYi_Count<count)
		cout<<"库存衬衣不足！不能完成此次更改！"<<endl;
	else
	{
		ChenYi_Count-=count;
		cout<<"更改成功！"<<endl;
	}
}
//获取衬衣数量的函数的定义。
int Shop::GetChenYiCount()
{
	return ChenYi_Count;
}
//获取衬衣编号的静态函数的定义。
int Shop::GetChenYiNumber()
{
	return ChenYi_BianHao;
}
//增加裤子数量的函数的定义。
void Shop::IncKuZiCount(int count)
{
	KuZi_Count+=count;
	cout<<"裤子数量修改保存成功！"<<endl;
}
//减少裤子数量的函数的定义。
void Shop::DecKuZiCount(int count)
{
	if(KuZi_Count<count)
		cout<<"库存裤子不足！不能完成此次更改！"<<endl;
	else
	{
		KuZi_Count-=count;
		cout<<"更改成功！"<<endl;
	}
}
//获取裤子数量的函数的定义。
int Shop::GetKuZiCount()
{
	return KuZi_Count;
}
//获取裤子编号的静态函数的定义。
int Shop::GetKuZiNumber()
{
	return KuZi_BianHao;
}
//增加套装数量的函数的定义。
void Shop::IncTaoZhuangCount(int count)
{
	TaoZhuang_Count+=count;
	cout<<"套装数量修改保存成功！"<<endl;
}
//减少套装数量的函数的定义。
void Shop::DecTaoZhuangCount(int count)
{
	if(TaoZhuang_Count<count)
		cout<<"库存套装不足！不能完成此次更改！"<<endl;
	else
	{
		TaoZhuang_Count-=count;
		cout<<"更改完成！"<<endl;
	}
}
//获取套装数量的函数的定义。
int Shop::GetTaoZhuangCount()
{
	return TaoZhuang_Count;
}
//获取套装编号的函数的定义。
int Shop::GetTaoZhuangNumber()
{
	return TaoZhuang_BianHao;
}
//设置服装店名称函数的定义。
void Shop::SetShopName(char *NewShopName)
{
	strcpy(ShopName,NewShopName);
	cout<<"新服装店名保存成功！"<<endl;
}
//获取服装店名称函数的定义。
void Shop::GetShopName()
{
	cout<<"目前服装店名是:"<<endl;
	puts(ShopName);
	cout<<endl;
}
//设置服装店主姓名函数的定义。
void Shop::SetBossName(char *NewBossName)
{
	strcpy(BossName,NewBossName);
	cout<<"新店主姓名保存成功！"<<endl;
}
//获取服装店主名称函数的定义。
void Shop::GetBossName()
{
	cout<<"目前服装店主的姓名是:"<<endl;
	puts(BossName);
	cout<<endl;
}
//设置服装店库存管理中心管理员名称函数的定义。
void Shop::SetManagerName(char *NewManagerName)
{
	strcpy(ManagerName,NewManagerName);
	cout<<"新管理员名称保存成功！"<<endl;
}
//获取服装店库存管理中心管理员名称函数的定义。
void Shop::GetManagerName()
{
	cout<<"管理员的名称是:"<<endl;
	puts(ManagerName);
	cout<<endl;
}
//设置管理员密码函数的定义。
void Shop::SetPassion(char *NewPassion)
{
	strcpy(Passion,NewPassion);
	cout<<"新管理员密码保存成功！"<<endl;
}
//获取管理员密码函数的定义。
void Shop::GetPassion()
{
	cout<<"管理员密码是:"<<endl;
	puts(Passion);
	cout<<endl;
}
//验证输入的管理员名称函数的定义。
int Shop::YanZhName(char *name)
{
	int i;
	i=strcmp(ManagerName,name);
	return i;
}
//验证输入的管理员密码的函数的定义。
int Shop::YanZhPassion(char *passion)
{
	int i;
	i=strcmp(Passion,passion);
	return i;
}
//获取目前服装点数量的静态函数的定义。
void Shop::GetShopNumbers()
{
	cout<<"目前服装店的数量是:"<<endl;
	cout<<ShopNumbers<<endl;
}