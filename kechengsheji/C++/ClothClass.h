#include"iostream"
using namespace std;
//定义外衣类。
class WaiYi
{
public:
	//构造函数的声明。	
	WaiYi(float Prize=30);		
	//拷贝构造函数的声明。
	WaiYi(WaiYi &waiyi);
	//析构函数的声明。
	~WaiYi();
	//设置外衣价格的函数的声明。
	void SetPrize(float NewPrize);
	//获取外衣价格的函数的声明。
	void GetPrize();
private:
	//声明外衣价格。
	float WaiYi_Prize;
};

//定义衬衣类。
class ChenYi
{
public:
	//衬衣类的构造函数的声明。
	ChenYi(float prize=30);
	//衬衣类的拷贝构造函数的声明。
	ChenYi(ChenYi &chenyi);
	//衬衣类的析构函数的声明。
	~ChenYi();
	//设置衬衣价格的函数的声明。
	void SetPrize(float NewPrize);
	//获取衬衣价格的函数的声明。
	void GetPrize();
private:
	//衬衣价格的声明。
	float ChenYi_Prize;
};

//裤子类的定义。
class KuZi
{
public:
	//裤子类的构造函数的声明。
	KuZi(float prize=30);
	//裤子类的拷贝构造函数的声明。
	KuZi(KuZi &kuzi);
	//裤子类的析构函数的声明。
	~KuZi();
	//设置裤子价格的函数的声明。
	void SetPrize(float NewPrize);
	//获取裤子价格的函数的声明。
	void GetPrize();
private:
	//裤子价格的声明。
	float KuZi_Prize;
};

//套装类的定义。
class TaoZhuang
{
public:
	//套装类的构造函数的声明。
	TaoZhuang(float prize=30);
	//套装类的拷贝构造函数的声明。
	TaoZhuang(TaoZhuang &taozhuang);
	//套装类的析构函数的声明。
	~TaoZhuang();
	//设置套装价格的函数的声明。
	void SetPrize(float NewPrize);
	//获取套装价格的函数的声明。
	void GetPrize();
private:
	//套装价格的声明。
	float TaoZhuang_Prize;
};

//服装类的实现
//外衣类的实现。
//外衣类构造函数的定义。
WaiYi::WaiYi(float Prize)
{
	WaiYi_Prize=Prize;
}
//外衣类拷贝构造函数的定义。
WaiYi::WaiYi(WaiYi &waiyi)
{
	WaiYi_Prize=waiyi.WaiYi_Prize;
}
//外衣类析构函数的定义。
WaiYi::~WaiYi()
{
}
//设置外衣价格的函数的定义。
void WaiYi::SetPrize(float NewPrize)
{
	WaiYi_Prize=NewPrize;
}
//获取外衣价格的函数的定义。
void WaiYi::GetPrize()
{
	cout<<"外衣的价格是:"<<endl;
	cout<<WaiYi_Prize<<endl;
}

//衬衣类的实现。
//构造函数的实现。
ChenYi::ChenYi(float prize)
{
	ChenYi_Prize=prize;
}
//拷贝构造函数的实现。
ChenYi::ChenYi(ChenYi &chenyi)
{
	ChenYi_Prize=chenyi.ChenYi_Prize;
}
//析构函数的实现。
ChenYi::~ChenYi()
{
}
//设置衬衣价格函数的定义。
void ChenYi::SetPrize(float NewPrize)
{
	ChenYi_Prize=NewPrize;
	cout<<"衬衣的价格已经被修改了！"<<endl;
}
//获取衬衣价格函数的定义。
void ChenYi::GetPrize()
{
	cout<<"衬衣的价格是:"<<endl;
	cout<<ChenYi_Prize<<endl;
}

//裤子类的实现。
//裤子类的构造函数的定义。
KuZi::KuZi(float prize)
{
	KuZi_Prize=prize;
}
//裤子类的拷贝构造函数的定义。
KuZi::KuZi(KuZi &kuzi)
{
	KuZi_Prize=kuzi.KuZi_Prize;
}
//裤子类的析构函数的定义。
KuZi::~KuZi()
{
}
//设置裤子价格的函数的定义。
void KuZi::SetPrize(float NewPrize)
{
	KuZi_Prize=NewPrize;
	cout<<"裤子价格已经被修改了!"<<endl;
}
//获取裤子价格的函数的定义。
void KuZi::GetPrize()
{
	cout<<"裤子价格是:"<<endl;
	cout<<KuZi_Prize<<endl;
}

//套装类的实现。
//套装类的构造函数的定义。
TaoZhuang::TaoZhuang(float prize)
{
	TaoZhuang_Prize=prize;
}
//套装类的拷贝构造函数的定义。
TaoZhuang::TaoZhuang(TaoZhuang &taozhuang)
{
	TaoZhuang_Prize=taozhuang.TaoZhuang_Prize;
}
//套装类的析构函数的定义。
TaoZhuang::~TaoZhuang()
{}
//设置套装价格的函数的定义。
void TaoZhuang::SetPrize(float prize)
{
	TaoZhuang_Prize=prize;
	cout<<"套装价格已经被修改了!"<<endl;
}
//获取套装价格的函数的定义。
void TaoZhuang::GetPrize()
{
	cout<<"套装的价格是:"<<endl;
	cout<<TaoZhuang_Prize<<endl;
}