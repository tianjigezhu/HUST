#include"iostream"
using namespace std;
//���������ࡣ
class WaiYi
{
public:
	//���캯����������	
	WaiYi(float Prize=30);		
	//�������캯����������
	WaiYi(WaiYi &waiyi);
	//����������������
	~WaiYi();
	//�������¼۸�ĺ�����������
	void SetPrize(float NewPrize);
	//��ȡ���¼۸�ĺ�����������
	void GetPrize();
private:
	//�������¼۸�
	float WaiYi_Prize;
};

//��������ࡣ
class ChenYi
{
public:
	//������Ĺ��캯����������
	ChenYi(float prize=30);
	//������Ŀ������캯����������
	ChenYi(ChenYi &chenyi);
	//�����������������������
	~ChenYi();
	//���ó��¼۸�ĺ�����������
	void SetPrize(float NewPrize);
	//��ȡ���¼۸�ĺ�����������
	void GetPrize();
private:
	//���¼۸��������
	float ChenYi_Prize;
};

//������Ķ��塣
class KuZi
{
public:
	//������Ĺ��캯����������
	KuZi(float prize=30);
	//������Ŀ������캯����������
	KuZi(KuZi &kuzi);
	//�����������������������
	~KuZi();
	//���ÿ��Ӽ۸�ĺ�����������
	void SetPrize(float NewPrize);
	//��ȡ���Ӽ۸�ĺ�����������
	void GetPrize();
private:
	//���Ӽ۸��������
	float KuZi_Prize;
};

//��װ��Ķ��塣
class TaoZhuang
{
public:
	//��װ��Ĺ��캯����������
	TaoZhuang(float prize=30);
	//��װ��Ŀ������캯����������
	TaoZhuang(TaoZhuang &taozhuang);
	//��װ�������������������
	~TaoZhuang();
	//������װ�۸�ĺ�����������
	void SetPrize(float NewPrize);
	//��ȡ��װ�۸�ĺ�����������
	void GetPrize();
private:
	//��װ�۸��������
	float TaoZhuang_Prize;
};

//��װ���ʵ��
//�������ʵ�֡�
//�����๹�캯���Ķ��塣
WaiYi::WaiYi(float Prize)
{
	WaiYi_Prize=Prize;
}
//�����࿽�����캯���Ķ��塣
WaiYi::WaiYi(WaiYi &waiyi)
{
	WaiYi_Prize=waiyi.WaiYi_Prize;
}
//���������������Ķ��塣
WaiYi::~WaiYi()
{
}
//�������¼۸�ĺ����Ķ��塣
void WaiYi::SetPrize(float NewPrize)
{
	WaiYi_Prize=NewPrize;
}
//��ȡ���¼۸�ĺ����Ķ��塣
void WaiYi::GetPrize()
{
	cout<<"���µļ۸���:"<<endl;
	cout<<WaiYi_Prize<<endl;
}

//�������ʵ�֡�
//���캯����ʵ�֡�
ChenYi::ChenYi(float prize)
{
	ChenYi_Prize=prize;
}
//�������캯����ʵ�֡�
ChenYi::ChenYi(ChenYi &chenyi)
{
	ChenYi_Prize=chenyi.ChenYi_Prize;
}
//����������ʵ�֡�
ChenYi::~ChenYi()
{
}
//���ó��¼۸����Ķ��塣
void ChenYi::SetPrize(float NewPrize)
{
	ChenYi_Prize=NewPrize;
	cout<<"���µļ۸��Ѿ����޸��ˣ�"<<endl;
}
//��ȡ���¼۸����Ķ��塣
void ChenYi::GetPrize()
{
	cout<<"���µļ۸���:"<<endl;
	cout<<ChenYi_Prize<<endl;
}

//�������ʵ�֡�
//������Ĺ��캯���Ķ��塣
KuZi::KuZi(float prize)
{
	KuZi_Prize=prize;
}
//������Ŀ������캯���Ķ��塣
KuZi::KuZi(KuZi &kuzi)
{
	KuZi_Prize=kuzi.KuZi_Prize;
}
//����������������Ķ��塣
KuZi::~KuZi()
{
}
//���ÿ��Ӽ۸�ĺ����Ķ��塣
void KuZi::SetPrize(float NewPrize)
{
	KuZi_Prize=NewPrize;
	cout<<"���Ӽ۸��Ѿ����޸���!"<<endl;
}
//��ȡ���Ӽ۸�ĺ����Ķ��塣
void KuZi::GetPrize()
{
	cout<<"���Ӽ۸���:"<<endl;
	cout<<KuZi_Prize<<endl;
}

//��װ���ʵ�֡�
//��װ��Ĺ��캯���Ķ��塣
TaoZhuang::TaoZhuang(float prize)
{
	TaoZhuang_Prize=prize;
}
//��װ��Ŀ������캯���Ķ��塣
TaoZhuang::TaoZhuang(TaoZhuang &taozhuang)
{
	TaoZhuang_Prize=taozhuang.TaoZhuang_Prize;
}
//��װ������������Ķ��塣
TaoZhuang::~TaoZhuang()
{}
//������װ�۸�ĺ����Ķ��塣
void TaoZhuang::SetPrize(float prize)
{
	TaoZhuang_Prize=prize;
	cout<<"��װ�۸��Ѿ����޸���!"<<endl;
}
//��ȡ��װ�۸�ĺ����Ķ��塣
void TaoZhuang::GetPrize()
{
	cout<<"��װ�ļ۸���:"<<endl;
	cout<<TaoZhuang_Prize<<endl;
}