#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C082E983A335230D.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_360;
class Class_0_16E4307DCC419505_363;
class Class_1_303D5A33D1401D59;
class Class_1_65F0290E6742FF82;
class Class_1_AD0A0FF0019FC986;
class Class_1_EAF7984A8FAD6BE4;
class Class_2_409B0D1663D08CF3;
class SceneLightVolume;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_3_6C792A3AC4426A91_METHOD_3_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xB9D1690)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_06F38768260E973C_OFFSET UNITYSDK_OFFSET(0xB9D1B90)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0xB9D2980)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_08050F273ECE8F2E_OFFSET UNITYSDK_OFFSET(0xB9D5460)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_0DADE3B3287D4AF2_OFFSET UNITYSDK_OFFSET(0xB9D31F0)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_0FA10C440E223B93_OFFSET UNITYSDK_OFFSET(0xB9D72E0)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_11D5322717FDFD9D_OFFSET UNITYSDK_OFFSET(0xB9D14B0)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_18B8AEE25F6CAF09_OFFSET UNITYSDK_OFFSET(0xB9D7710)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0xB9D1D40)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_2D9618686C564C11_OFFSET UNITYSDK_OFFSET(0xB9D71D0)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_3456633D994FB6C5_OFFSET UNITYSDK_OFFSET(0xB9D5620)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_35B4BF96BDBEF3C6_1_OFFSET UNITYSDK_OFFSET(0xB9D7EF0)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_35B4BF96BDBEF3C6_OFFSET UNITYSDK_OFFSET(0xB9D7900)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_40FB5B24E17C98D3_1_OFFSET UNITYSDK_OFFSET(0xB9D8230)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_40FB5B24E17C98D3_OFFSET UNITYSDK_OFFSET(0xB9D7C40)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_413351932F8E5F3D_OFFSET UNITYSDK_OFFSET(0xB9D1820)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_41CF9B9431532A25_OFFSET UNITYSDK_OFFSET(0xB9D5C70)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB9D1220)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_52C18C0DA8AC23E5_OFFSET UNITYSDK_OFFSET(0xB9D5DE0)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_5BA9DFC86912A0F5_OFFSET UNITYSDK_OFFSET(0xB9D6580)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0xB9D5780)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_6AFC1FCAF7BE171C_OFFSET UNITYSDK_OFFSET(0xB9D7370)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_753EACA03E43D4D1_OFFSET UNITYSDK_OFFSET(0xB9D5340)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xB9D1180)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_7867A310A78F0DC0_OFFSET UNITYSDK_OFFSET(0xB9D48D0)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_7B7EB00643F88B24_OFFSET UNITYSDK_OFFSET(0xB9D6D90)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_7CCF811DCEC67CCF_OFFSET UNITYSDK_OFFSET(0xB9D3350)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0xB9D3300)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_8E9E88960606FB6F_OFFSET UNITYSDK_OFFSET(0xB9D5CC0)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_92AEC39E9C630109_OFFSET UNITYSDK_OFFSET(0xB9D58E0)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_973CE2F826C01158_OFFSET UNITYSDK_OFFSET(0xB9D4F70)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_97B44ED90A2DE2AB_OFFSET UNITYSDK_OFFSET(0xB9D2F80)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xB9D16E0)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_A1168610D32C43E0_OFFSET UNITYSDK_OFFSET(0xB9D32B0)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB9D77B0)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_A41DCE32DA5A80B1_OFFSET UNITYSDK_OFFSET(0xB9D64D0)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_B7CCB99AAB7A4C8B_OFFSET UNITYSDK_OFFSET(0xB9D3240)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_BD604646FC359218_OFFSET UNITYSDK_OFFSET(0xB9D7860)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_C7191F67D0355BCC_OFFSET UNITYSDK_OFFSET(0xB9D56F0)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9D5890)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0xB9D2860)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xB9D5830)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0xB9D4490)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xB9D6380)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_D1E92C7899FA570C_1_OFFSET UNITYSDK_OFFSET(0xB9D8060)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_D1E92C7899FA570C_OFFSET UNITYSDK_OFFSET(0xB9D7A70)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_D7189F5A6E4F45D2_OFFSET UNITYSDK_OFFSET(0xB9D12F0)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0xB9D1EA0)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xB9D2790)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_EE5D8FB9728A3656_OFFSET UNITYSDK_OFFSET(0xB9D6660)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_FC68D51F0DB2D39B_OFFSET UNITYSDK_OFFSET(0xB9D4660)
#define CLASS_3_6C792A3AC4426A91_METHOD_3_FE268EA0D7E91617_OFFSET UNITYSDK_OFFSET(0xB9D59F0)
#define CLASS_3_6C792A3AC4426A91__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9D86E0)
#define CLASS_3_6C792A3AC4426A91__CTOR_OFFSET UNITYSDK_OFFSET(0xB9D84E0)
#define CLASS_3_6C792A3AC4426A91__POSTINIT_B__18_0_OFFSET UNITYSDK_OFFSET(0xB9D8720)

inline static constexpr unsigned int Class_3_6C792A3AC4426A91_TypeDefinitionIndex = 47488;

class Class_3_6C792A3AC4426A91 : public ::Class_2_C082E983A335230D
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6C792A3AC4426A91_TypeDefinitionIndex)->GetStaticField(0x2C500);
	}
	// static const ::System::Int32 Field_3_1 = 0x5; // 0x0
	::System::Collections::Generic::List_1<::SceneLightVolume*>* Field_3_2; // 0x58
	::SceneLightVolume* Field_3_3; // 0x60
	::System::String* Field_3_4; // 0x68
	::System::String* Field_3_5; // 0x70
	::System::Collections::Generic::Dictionary_2<::Class_1_303D5A33D1401D59*, ::Class_1_AD0A0FF0019FC986*>* Field_3_6; // 0x78
	::System::Collections::Generic::List_1<::SceneLightVolume*>* Field_3_7; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_AD0A0FF0019FC986*>* Field_3_8; // 0x88
	::Class_2_409B0D1663D08CF3* Field_3_9; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::OpenWorld::StreamingLightEnum>* Field_3_10; // 0x98
	::SceneLightVolume* Field_3_11; // 0xA0
	::System::Int32 Field_3_12; // 0xA8
	::System::Single Field_3_13; // 0xAC
	::EnviromentSystemV2Space::OutputType Field_3_14; // 0xB0
	::System::Int32 Field_3_15; // 0xB4
	::UnityEngine::Vector3 Field_3_16; // 0xB8
	::System::Boolean Field_3_17; // 0xC4
	::System::Boolean Field_3_18; // 0xC5
	::System::Boolean Field_3_19; // 0xC6
	::System::Boolean Field_3_20; // 0xC7
	::System::Int32 Field_3_21; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91__CCTOR_OFFSET))();
	}

	::System::Void Method_3_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_11D5322717FDFD9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_11D5322717FDFD9D_OFFSET))(this);
	}

	::System::Void Method_3_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_3_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_3_06F38768260E973C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_06F38768260E973C_OFFSET))(this);
	}

	::System::Void Method_3_25CD86BF8626C8D9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_25CD86BF8626C8D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_97B44ED90A2DE2AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_97B44ED90A2DE2AB_OFFSET))(this);
	}

	::System::Void Method_3_0DADE3B3287D4AF2(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_0DADE3B3287D4AF2_OFFSET))(this, a1);
	}

	::System::Void Method_3_B7CCB99AAB7A4C8B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_B7CCB99AAB7A4C8B_OFFSET))(this);
	}

	::System::Void Method_3_A1168610D32C43E0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_A1168610D32C43E0_OFFSET))(this, a1);
	}

	::System::Void Method_3_D7189F5A6E4F45D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_D7189F5A6E4F45D2_OFFSET))(this);
	}

	::System::Void Method_3_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_3_7CCF811DCEC67CCF(::System::Boolean a1, ::System::Boolean a2, ::EnviromentSystemV2Space::OutputType a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::EnviromentSystemV2Space::OutputType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_7CCF811DCEC67CCF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_973CE2F826C01158(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_973CE2F826C01158_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FC68D51F0DB2D39B(::Class_0_16E4307DCC419505_363* a1, ::EnviromentSystemV2Space::OutputType a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_363*, ::EnviromentSystemV2Space::OutputType, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_FC68D51F0DB2D39B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_753EACA03E43D4D1(::Class_0_16E4307DCC419505_363* a1, ::EnviromentSystemV2Space::OutputType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_363*, ::EnviromentSystemV2Space::OutputType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_753EACA03E43D4D1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_08050F273ECE8F2E(::EnviromentSystemV2Space::OutputType a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_08050F273ECE8F2E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_413351932F8E5F3D(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_413351932F8E5F3D_OFFSET))(this, a1);
	}

	::System::Void Method_3_3456633D994FB6C5(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_3456633D994FB6C5_OFFSET))(this, a1);
	}

	::SceneLightVolume* Method_3_C7191F67D0355BCC()
	{
		return ((::SceneLightVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_C7191F67D0355BCC_OFFSET))(this);
	}

	::System::Void Method_3_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_3_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_92AEC39E9C630109(::EnviromentSystemV2Space::OutputType a1, ::Class_0_16E4307DCC419505_360* a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::Class_0_16E4307DCC419505_360*))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_92AEC39E9C630109_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FE268EA0D7E91617()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_FE268EA0D7E91617_OFFSET))(this);
	}

	::System::Void Method_3_41CF9B9431532A25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_41CF9B9431532A25_OFFSET))(this);
	}

	::System::Void Method_3_8E9E88960606FB6F(::EnviromentSystemV2Space::OutputType a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::OutputType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_8E9E88960606FB6F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_3_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_07280B24DFAC0CA9_OFFSET))(this);
	}

	::System::Void Method_3_5BA9DFC86912A0F5(::Class_1_65F0290E6742FF82* a1, ::RPG::Client::OpenWorld::StreamingLightEnum& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_65F0290E6742FF82*, ::RPG::Client::OpenWorld::StreamingLightEnum&))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_5BA9DFC86912A0F5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_EE5D8FB9728A3656(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_EE5D8FB9728A3656_OFFSET))(this, a1);
	}

	::System::Void Method_3_D0ACB47B641DF879()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_D0ACB47B641DF879_OFFSET))(this);
	}

	::System::Void Method_3_A41DCE32DA5A80B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_A41DCE32DA5A80B1_OFFSET))(this);
	}

	::System::Void Method_3_2D9618686C564C11(::SceneLightVolume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_2D9618686C564C11_OFFSET))(this, a1);
	}

	::System::Void Method_3_0FA10C440E223B93(::SceneLightVolume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_0FA10C440E223B93_OFFSET))(this, a1);
	}

	::System::Void Method_3_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_E876C8B6D3B840A6_OFFSET))(this);
	}

	::SceneLightVolume* Method_3_6AFC1FCAF7BE171C(::UnityEngine::Vector3 a1)
	{
		return ((::SceneLightVolume*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_6AFC1FCAF7BE171C_OFFSET))(this, a1);
	}

	::SceneLightVolume* Method_3_7B7EB00643F88B24(::UnityEngine::Vector3 a1)
	{
		return ((::SceneLightVolume*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_7B7EB00643F88B24_OFFSET))(this, a1);
	}

	::SceneLightVolume* Method_3_7867A310A78F0DC0(::System::Boolean a1)
	{
		return ((::SceneLightVolume*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_7867A310A78F0DC0_OFFSET))(this, a1);
	}

	::System::Void Method_3_52C18C0DA8AC23E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_52C18C0DA8AC23E5_OFFSET))(this);
	}

	::System::Void Method_3_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_A239DF324AF4215D_OFFSET))(this);
	}

	::RPG::Client::OpenWorld::StreamingLightEnum Method_3_BD604646FC359218(::UnityEngine::Vector3 a1, ::System::String* a2)
	{
		return ((::RPG::Client::OpenWorld::StreamingLightEnum(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_BD604646FC359218_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Light* Method_3_35B4BF96BDBEF3C6(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_35B4BF96BDBEF3C6_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_3_D1E92C7899FA570C(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_D1E92C7899FA570C_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_3_35B4BF96BDBEF3C6_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_35B4BF96BDBEF3C6_1_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_3_D1E92C7899FA570C_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_D1E92C7899FA570C_1_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_3_40FB5B24E17C98D3(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_40FB5B24E17C98D3_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Light* Method_3_40FB5B24E17C98D3_1(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_40FB5B24E17C98D3_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_18B8AEE25F6CAF09(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91_METHOD_3_18B8AEE25F6CAF09_OFFSET))(this, a1, a2);
	}

	::System::Void _PostInit_b__18_0(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_3_6C792A3AC4426A91__POSTINIT_B__18_0_OFFSET))(this, a1);
	}
};
