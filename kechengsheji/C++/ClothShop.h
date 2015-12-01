//��װ����Ķ��塣
#include"string.h"
#include"ClothClass.h"
#include"iostream"
using namespace std;
class Shop:public WaiYi,public ChenYi,public KuZi,public TaoZhuang
{
public:
	//��װ���๹�캯����������
	Shop(char *shopname,char *bossname,char *managername,char *passion,
		int waiyicount,int chenyicount,int kuzicount,int taozhuangcount,
		float WaiYi,float ChenYiPrize,float KuZiPrize,float TaoZhuangPrize);
	//��װ���࿽�����캯����������
	Shop(Shop &shop);
	//��װ��������������������
	~Shop();
	//��ȡ���±�ŵľ�̬������������
	static int GetWaiYiNumber();
	//��ȡ���������ĺ�����������
	int GetWaiYiCount();
	//�������������ĺ�����������
	void IncWaiYiCount(int count);
	//�������������ĺ�����������
	void DecWaiYiCount(int count);
	//��ȡ���±�ŵľ�̬������������
	static int GetChenYiNumber();
	//��ȡ���������ĺ�����������
	int GetChenYiCount();
	//���ӳ��������ĺ�����������
	void IncChenYiCount(int count);
	//���ٳ��������ĺ�����������
	void DecChenYiCount(int count);
	//��ȡ���ӱ�ŵľ�̬������������
	static int GetKuZiNumber();
	//��ȡ���������ĺ�����������
	int GetKuZiCount();
	//���ӿ��������ĺ�����������
	void IncKuZiCount(int count);
	//���ٿ��������ĺ�����������
	void DecKuZiCount(int count);
	//��ȡ��װ��ŵľ�̬������������
	static int GetTaoZhuangNumber();
	//��ȡ��װ�����ĺ�����������
	int GetTaoZhuangCount();
	//������װ�����ĺ�����������
	void IncTaoZhuangCount(int count);
	//������װ�����ĺ�����������
	void DecTaoZhuangCount(int count);
	//���÷�װ�����ƺ�����������
	void SetShopName(char *NewShopName);
	//��ȡ��װ�����ƺ�����������
	void GetShopName();
	//���÷�װ��������������������
	void SetBossName(char *NewBossName);
	//��ȡ��װ��������������������
	void GetBossName();
	//���÷�װ����������Ĺ���Ա���ƺ�����������
	void SetManagerName(char *NewManagerName);
	//��ȡ����Ա���ƺ�����������
	void GetManagerName();
	//���ù���Ա���뺯����������
	void SetPassion(char *NewPassion);
	//��ȡ����Ա���뺯����������
	void GetPassion();
	//��֤����Ĺ���Ա���ƺ�����������
	int YanZhName(char *name);
	//��֤����Ĺ���Ա���뺯����������
	int YanZhPassion(char *passion);
	//��ȡĿǰ��װ�������ľ�̬������������
	static void GetShopNumbers();
private:
	//���������������ݵ�������
	int WaiYi_Count;
	//���±�����ξ�̬���ݵ�������
	static int WaiYi_BianHao;
	//���������������ݵ�������
	int ChenYi_Count;
	//���±�����ξ�̬���ݵ�������
	static int ChenYi_BianHao;
	//���������������ݵ�������
	int KuZi_Count;
	//���ӱ�����ξ�̬���ݵ�������
	static int KuZi_BianHao;
	//��װ�����������ݵ�������
	int TaoZhuang_Count;
	//��װ������ξ�̬���ݵ�������
	static int TaoZhuang_BianHao;
	//��װ�����ַ�����������
	char ShopName[30];
	//���������ַ�����������
	char BossName[30];
	//����Ա�����ַ�����������
	char ManagerName[30];
	//����Ա�����ַ�����������
	char Passion[30];
	//��װ��������̬���ݵ�������
	static int ShopNumbers;
};
//���±�����ξ�̬���ݵĳ�ʼ����
int Shop::WaiYi_BianHao=01;
//���±�����ξ�̬���ݵĳ�ʼ����
int Shop::ChenYi_BianHao=02;
//���ӱ�����ξ�̬���ݵĳ�ʼ����
int Shop::KuZi_BianHao=03;
//��װ������ξ�̬���ݵĳ�ʼ����
int Shop::TaoZhuang_BianHao=04;
//��װ��������̬���ݵĳ�ʼ����
int Shop::ShopNumbers=0;


//��װ���๹�캯���Ķ��塣
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
//��װ���࿽�����캯���Ķ��塣
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
//��װ�������������Ķ��塣
Shop::~Shop()
{
	ShopNumbers--;
}
//������������ĺ����Ķ��塣
void Shop::IncWaiYiCount(int count)
{
	WaiYi_Count=count+WaiYi_Count;
	cout<<"���������޸ı���ɹ���"<<endl;
}
//�������������ĺ����Ķ��塣
void Shop::DecWaiYiCount(int count)
{
	if(WaiYi_Count<count)
		cout<<"������²��㣡������ɴ˴θ��ģ�"<<endl;
	else
	{
		WaiYi_Count=WaiYi_Count-count;
		cout<<"���ĳɹ���"<<endl;
	}
}
//��ȡ���������ĺ����Ķ��塣
int Shop::GetWaiYiCount()
{
	return WaiYi_Count;
}
//��ȡ���±�ŵľ�̬�����Ķ��塣
int Shop::GetWaiYiNumber()
{
	return WaiYi_BianHao;
}
//���ӳ��������ĺ����Ķ��塣
void Shop::IncChenYiCount(int count)
{
	ChenYi_Count+=count;
	cout<<"���������޸ı���ɹ���"<<endl;
}
//���ٳ��������ĺ����Ķ��塣
void Shop::DecChenYiCount(int count)
{
	if(ChenYi_Count<count)
		cout<<"�����²��㣡������ɴ˴θ��ģ�"<<endl;
	else
	{
		ChenYi_Count-=count;
		cout<<"���ĳɹ���"<<endl;
	}
}
//��ȡ���������ĺ����Ķ��塣
int Shop::GetChenYiCount()
{
	return ChenYi_Count;
}
//��ȡ���±�ŵľ�̬�����Ķ��塣
int Shop::GetChenYiNumber()
{
	return ChenYi_BianHao;
}
//���ӿ��������ĺ����Ķ��塣
void Shop::IncKuZiCount(int count)
{
	KuZi_Count+=count;
	cout<<"���������޸ı���ɹ���"<<endl;
}
//���ٿ��������ĺ����Ķ��塣
void Shop::DecKuZiCount(int count)
{
	if(KuZi_Count<count)
		cout<<"�����Ӳ��㣡������ɴ˴θ��ģ�"<<endl;
	else
	{
		KuZi_Count-=count;
		cout<<"���ĳɹ���"<<endl;
	}
}
//��ȡ���������ĺ����Ķ��塣
int Shop::GetKuZiCount()
{
	return KuZi_Count;
}
//��ȡ���ӱ�ŵľ�̬�����Ķ��塣
int Shop::GetKuZiNumber()
{
	return KuZi_BianHao;
}
//������װ�����ĺ����Ķ��塣
void Shop::IncTaoZhuangCount(int count)
{
	TaoZhuang_Count+=count;
	cout<<"��װ�����޸ı���ɹ���"<<endl;
}
//������װ�����ĺ����Ķ��塣
void Shop::DecTaoZhuangCount(int count)
{
	if(TaoZhuang_Count<count)
		cout<<"�����װ���㣡������ɴ˴θ��ģ�"<<endl;
	else
	{
		TaoZhuang_Count-=count;
		cout<<"������ɣ�"<<endl;
	}
}
//��ȡ��װ�����ĺ����Ķ��塣
int Shop::GetTaoZhuangCount()
{
	return TaoZhuang_Count;
}
//��ȡ��װ��ŵĺ����Ķ��塣
int Shop::GetTaoZhuangNumber()
{
	return TaoZhuang_BianHao;
}
//���÷�װ�����ƺ����Ķ��塣
void Shop::SetShopName(char *NewShopName)
{
	strcpy(ShopName,NewShopName);
	cout<<"�·�װ��������ɹ���"<<endl;
}
//��ȡ��װ�����ƺ����Ķ��塣
void Shop::GetShopName()
{
	cout<<"Ŀǰ��װ������:"<<endl;
	puts(ShopName);
	cout<<endl;
}
//���÷�װ�������������Ķ��塣
void Shop::SetBossName(char *NewBossName)
{
	strcpy(BossName,NewBossName);
	cout<<"�µ�����������ɹ���"<<endl;
}
//��ȡ��װ�������ƺ����Ķ��塣
void Shop::GetBossName()
{
	cout<<"Ŀǰ��װ������������:"<<endl;
	puts(BossName);
	cout<<endl;
}
//���÷�װ����������Ĺ���Ա���ƺ����Ķ��塣
void Shop::SetManagerName(char *NewManagerName)
{
	strcpy(ManagerName,NewManagerName);
	cout<<"�¹���Ա���Ʊ���ɹ���"<<endl;
}
//��ȡ��װ����������Ĺ���Ա���ƺ����Ķ��塣
void Shop::GetManagerName()
{
	cout<<"����Ա��������:"<<endl;
	puts(ManagerName);
	cout<<endl;
}
//���ù���Ա���뺯���Ķ��塣
void Shop::SetPassion(char *NewPassion)
{
	strcpy(Passion,NewPassion);
	cout<<"�¹���Ա���뱣��ɹ���"<<endl;
}
//��ȡ����Ա���뺯���Ķ��塣
void Shop::GetPassion()
{
	cout<<"����Ա������:"<<endl;
	puts(Passion);
	cout<<endl;
}
//��֤����Ĺ���Ա���ƺ����Ķ��塣
int Shop::YanZhName(char *name)
{
	int i;
	i=strcmp(ManagerName,name);
	return i;
}
//��֤����Ĺ���Ա����ĺ����Ķ��塣
int Shop::YanZhPassion(char *passion)
{
	int i;
	i=strcmp(Passion,passion);
	return i;
}
//��ȡĿǰ��װ�������ľ�̬�����Ķ��塣
void Shop::GetShopNumbers()
{
	cout<<"Ŀǰ��װ���������:"<<endl;
	cout<<ShopNumbers<<endl;
}