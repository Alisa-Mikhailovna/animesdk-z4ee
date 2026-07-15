#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StuffStats.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MuseumAreaData; }
namespace RPG::Client { class MuseumData; }
namespace RPG::Client { class MuseumPropertyData; }
namespace RPG::Client { class MuseumStaffData; }
namespace RPG::Client { class MuseumTurnResult; }
namespace RPG::GameCore { class MuseumAreaRow; }
namespace RPG::GameCore { class MuseumPhaseUpgradeRow; }
namespace RPG::GameCore { class MuseumStatsRow; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_75BD6C658F5DF31B_METHOD_1_1082D2D113071CEB_OFFSET UNITYSDK_OFFSET(0x14AE64F0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x14AE5F60)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_155651379BE41165_OFFSET UNITYSDK_OFFSET(0x14AE4980)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_1873E3CF907D5F2A_OFFSET UNITYSDK_OFFSET(0x14AE6740)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_206C2AACE45DF946_OFFSET UNITYSDK_OFFSET(0x14AE6FD0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_31970F582DB3F255_OFFSET UNITYSDK_OFFSET(0x14AE6A80)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14AE62C0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_4D0FAC922B0FFED2_1_OFFSET UNITYSDK_OFFSET(0x14AE6BC0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_4D0FAC922B0FFED2_OFFSET UNITYSDK_OFFSET(0x14AE6380)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_569BD2B566FA5DC0_OFFSET UNITYSDK_OFFSET(0x14AE4390)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x14AE7840)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x14AE7580)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_6683386A865D418B_OFFSET UNITYSDK_OFFSET(0x14AE3A40)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_768AB00547A927B4_OFFSET UNITYSDK_OFFSET(0x14AE5050)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_7966B11DBD07BB00_OFFSET UNITYSDK_OFFSET(0x14AE3F40)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_8517AA51C6B2FA2C_OFFSET UNITYSDK_OFFSET(0x14AE4F90)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_8C5002599077063C_OFFSET UNITYSDK_OFFSET(0x14AE4210)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_9117DD66F254E7D3_OFFSET UNITYSDK_OFFSET(0x14AE4730)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x14AE6060)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_9560DA8C58540838_OFFSET UNITYSDK_OFFSET(0x14AE4DD0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14AE5C40)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_97BC274A877BBBA5_OFFSET UNITYSDK_OFFSET(0x14AE4110)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x14AE7780)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_A19A868E7AA78FFD_OFFSET UNITYSDK_OFFSET(0x14AE73A0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_A5544268D28E0A8E_OFFSET UNITYSDK_OFFSET(0x14AE7600)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_A7FA672A371B6F14_OFFSET UNITYSDK_OFFSET(0x14AE7270)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_A893DCD4D746C9DB_OFFSET UNITYSDK_OFFSET(0x14AE6B10)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_A8ECB8D8D263B39F_OFFSET UNITYSDK_OFFSET(0x14AE4AC0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_AEAB9A941BD9F3DA_OFFSET UNITYSDK_OFFSET(0x14AE4400)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x14AE5840)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_B47799517FBFCC30_OFFSET UNITYSDK_OFFSET(0x14AE5B90)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_BA19167BCC7AA499_OFFSET UNITYSDK_OFFSET(0x14AE5250)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_C784934903D1CFFC_OFFSET UNITYSDK_OFFSET(0x14AE7690)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_C91F1BFDC776F4F2_OFFSET UNITYSDK_OFFSET(0x14AE3D40)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_C982712826B94B43_OFFSET UNITYSDK_OFFSET(0x14AE5990)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_CE7E3A8528AB0BA1_OFFSET UNITYSDK_OFFSET(0x14AE3FF0)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_E3165986E296864D_1_OFFSET UNITYSDK_OFFSET(0x14AE6D30)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_E3165986E296864D_OFFSET UNITYSDK_OFFSET(0x14AE6E80)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_E4D662FED5D9440A_OFFSET UNITYSDK_OFFSET(0x14AE6800)
#define CLASS_1_75BD6C658F5DF31B_METHOD_1_EDB5FF454C9FADAA_OFFSET UNITYSDK_OFFSET(0x14AE5480)
#define CLASS_1_75BD6C658F5DF31B__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AE7880)

inline static constexpr unsigned int Class_1_75BD6C658F5DF31B_TypeDefinitionIndex = 63384;

class Class_1_75BD6C658F5DF31B : public ::System::Object
{
public:
	static ::RPG::Client::MuseumPropertyData** StaticGet_Field_1_0()
	{
		return (::RPG::Client::MuseumPropertyData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x5C700);
	}
	static ::RPG::GameCore::MuseumStatsRow** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::MuseumStatsRow**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x5C708);
	}
	static ::System::Text::StringBuilder** StaticGet_Field_1_2()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x5C710);
	}
	static ::RPG::Client::MuseumData** StaticGet_Field_1_3()
	{
		return (::RPG::Client::MuseumData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x5C718);
	}
	static ::RPG::Client::MuseumAreaData** StaticGet_Field_1_4()
	{
		return (::RPG::Client::MuseumAreaData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x5C720);
	}
	static ::RPG::GameCore::MuseumAreaRow** StaticGet_Field_1_5()
	{
		return (::RPG::GameCore::MuseumAreaRow**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x5C728);
	}
	static ::RPG::GameCore::MuseumPhaseUpgradeRow** StaticGet_Field_1_6()
	{
		return (::RPG::GameCore::MuseumPhaseUpgradeRow**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x5C730);
	}
	static ::Il2CppArray<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x5C738);
	}
	static ::System::UInt32* StaticGet_Field_1_8()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_75BD6C658F5DF31B_TypeDefinitionIndex)->GetStaticField(0x10210);
	}
	// static const ::System::Int32 Field_1_9 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x64; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::String* Field_1_13; // 0x0
	// static const ::System::String* Field_1_14; // 0x0
	// static const ::System::String* Field_1_15; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_6683386A865D418B(::RPG::Client::MuseumAreaData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_6683386A865D418B_OFFSET))(a1);
	}

	static ::System::Void Method_1_8C5002599077063C(::RPG::Client::MuseumData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumData*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_8C5002599077063C_OFFSET))(a1);
	}

	static ::System::Void Method_1_9117DD66F254E7D3(::RPG::Client::MuseumAreaData* a1, ::RPG::GameCore::StuffStats a2)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumAreaData*, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_9117DD66F254E7D3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8ECB8D8D263B39F(::RPG::Client::MuseumAreaData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_A8ECB8D8D263B39F_OFFSET))(a1);
	}

	static ::System::Void Method_1_9560DA8C58540838(::RPG::Client::MuseumAreaData* a1, ::RPG::Client::MuseumStaffData* a2)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumAreaData*, ::RPG::Client::MuseumStaffData*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_9560DA8C58540838_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_768AB00547A927B4(::RPG::Client::MuseumAreaData* a1, ::RPG::GameCore::StuffStats a2)
	{
		return ((::System::UInt32(*)(::RPG::Client::MuseumAreaData*, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_768AB00547A927B4_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_BA19167BCC7AA499(::RPG::Client::MuseumAreaData* a1)
	{
		return ((::System::UInt32(*)(::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_BA19167BCC7AA499_OFFSET))(a1);
	}

	static ::System::Void Method_1_EDB5FF454C9FADAA(::RPG::Client::MuseumData* a1, ::RPG::Client::MuseumTurnResult* a2)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumData*, ::RPG::Client::MuseumTurnResult*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_EDB5FF454C9FADAA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_9681042564541CD6_OFFSET))();
	}

	static ::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_B1936CE4DA97AA45_OFFSET))();
	}

	static ::System::Void Method_1_C91F1BFDC776F4F2(::RPG::Client::MuseumAreaData* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumAreaData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_C91F1BFDC776F4F2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7966B11DBD07BB00(::RPG::Client::MuseumAreaData* a1, ::System::UInt32 a2, ::RPG::GameCore::StuffStats a3)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumAreaData*, ::System::UInt32, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_7966B11DBD07BB00_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_569BD2B566FA5DC0(::RPG::Client::MuseumData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumData*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_569BD2B566FA5DC0_OFFSET))(a1);
	}

	static ::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_1290EA767C459179_OFFSET))();
	}

	static ::System::Void Method_1_AEAB9A941BD9F3DA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_AEAB9A941BD9F3DA_OFFSET))(a1);
	}

	static ::System::Void Method_1_97BC274A877BBBA5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_97BC274A877BBBA5_OFFSET))(a1);
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_33ACA6CB2ABC73F7_OFFSET))();
	}

	static ::System::Void Method_1_4D0FAC922B0FFED2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_4D0FAC922B0FFED2_OFFSET))();
	}

	static ::System::Void Method_1_CE7E3A8528AB0BA1(::System::UInt32 a1, ::RPG::GameCore::StuffStats a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_CE7E3A8528AB0BA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_31970F582DB3F255(::RPG::GameCore::StuffStats a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_31970F582DB3F255_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_206C2AACE45DF946(::System::UInt32 a1, ::RPG::GameCore::StuffStats a2)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_206C2AACE45DF946_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A893DCD4D746C9DB(::RPG::GameCore::StuffStats a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_A893DCD4D746C9DB_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_A19A868E7AA78FFD(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_A19A868E7AA78FFD_OFFSET))(a1);
	}

	static ::System::Void Method_1_155651379BE41165(::RPG::Client::MuseumPropertyData* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MuseumPropertyData*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_155651379BE41165_OFFSET))(a1);
	}

	static ::System::Void Method_1_4D0FAC922B0FFED2_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_4D0FAC922B0FFED2_1_OFFSET))();
	}

	static ::System::UInt32 Method_1_E3165986E296864D(::RPG::GameCore::StuffStats a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_E3165986E296864D_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_E3165986E296864D_1(::RPG::GameCore::StuffStats a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_E3165986E296864D_1_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_A7FA672A371B6F14(::RPG::GameCore::StuffStats a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_A7FA672A371B6F14_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_8517AA51C6B2FA2C(::RPG::Client::MuseumStaffData* a1, ::RPG::GameCore::StuffStats a2)
	{
		return ((::System::UInt32(*)(::RPG::Client::MuseumStaffData*, ::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_8517AA51C6B2FA2C_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_1082D2D113071CEB()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_1082D2D113071CEB_OFFSET))();
	}

	static ::System::Boolean Method_1_1873E3CF907D5F2A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_1873E3CF907D5F2A_OFFSET))(a1);
	}

	static ::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_937F8473216A3162_OFFSET))();
	}

	static ::System::Void Method_1_E4D662FED5D9440A(::RPG::GameCore::StuffStats a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::StuffStats))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_E4D662FED5D9440A_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_B47799517FBFCC30(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_B47799517FBFCC30_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_C982712826B94B43()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_C982712826B94B43_OFFSET))();
	}

	static ::System::Void Method_1_61929A3103595552()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_61929A3103595552_OFFSET))();
	}

	static ::System::Void Method_1_A5544268D28E0A8E(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_A5544268D28E0A8E_OFFSET))(a1);
	}

	static ::System::Void Method_1_C784934903D1CFFC(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_C784934903D1CFFC_OFFSET))(a1);
	}

	static ::System::Void Method_1_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_9FA85F81BF5EE3CA_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75BD6C658F5DF31B_METHOD_1_5790A55946AA509D_OFFSET))();
	}
};
