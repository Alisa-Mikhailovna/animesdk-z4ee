#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0251F68C7A9C91EA;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class EmoPlayableGraphConfig; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class BattlePerformConfig; }
namespace RPG::GameCore { class BattlePerformCreateActor; }
namespace RPG::GameCore { class BattlePerformInit; }
namespace RPG::GameCore { class BattlePerformStageConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FEC0278FE3DEA4E2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADAF710)
#define CLASS_2_FEC0278FE3DEA4E2_GET_WORKFINISH_OFFSET UNITYSDK_OFFSET(0xADB3BF0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xADAF8F0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_18D64D8FCCC1D09F_1_OFFSET UNITYSDK_OFFSET(0xADB3160)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_18D64D8FCCC1D09F_OFFSET UNITYSDK_OFFSET(0xADB2300)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_1B59235A910528B9_OFFSET UNITYSDK_OFFSET(0xADB2AC0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_261C2B64774FC8E4_OFFSET UNITYSDK_OFFSET(0xADB3A40)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_27C87B63AFD1A352_OFFSET UNITYSDK_OFFSET(0xADB3240)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_2E6FB1478A87D6D2_OFFSET UNITYSDK_OFFSET(0xADB07E0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_2F820B7CD0C616C8_OFFSET UNITYSDK_OFFSET(0xADB2D20)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xADB3C10)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_41A074549EF25F63_1_OFFSET UNITYSDK_OFFSET(0xADAFA90)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xADAF990)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_435C766C09C307BB_OFFSET UNITYSDK_OFFSET(0xADB2140)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_4D048E895C608EDE_OFFSET UNITYSDK_OFFSET(0xADB38E0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_62882324FFF46D85_OFFSET UNITYSDK_OFFSET(0xADB2380)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_651156E1722E01FB_OFFSET UNITYSDK_OFFSET(0xADB2FB0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_698AEA6086494C95_OFFSET UNITYSDK_OFFSET(0xADB1A00)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_91B479DECE7491D8_OFFSET UNITYSDK_OFFSET(0xADB21B0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_A07C2061B55C1547_OFFSET UNITYSDK_OFFSET(0xADAFDE0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xADAF760)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xADB39F0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_AF35526B98502BDF_OFFSET UNITYSDK_OFFSET(0xADAFFC0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_AFA731718AC5CCC0_OFFSET UNITYSDK_OFFSET(0xADB26E0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_B0E5A94005A811FC_OFFSET UNITYSDK_OFFSET(0xADB2DA0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xADB0A10)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0xADB1AB0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C0D4F45F16A4FB85_OFFSET UNITYSDK_OFFSET(0xADB1EE0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C4AFE676986D96B9_OFFSET UNITYSDK_OFFSET(0xADB1880)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0xADB05F0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xADB39A0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xADB0790)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_D34432C0B65E6441_OFFSET UNITYSDK_OFFSET(0xADB31E0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_DEEED0A71E3D5E35_OFFSET UNITYSDK_OFFSET(0xADB1740)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_EB522918F22FFA3B_OFFSET UNITYSDK_OFFSET(0xADAFD10)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_EB8DB967ADFFC4B2_OFFSET UNITYSDK_OFFSET(0xADB2E60)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_F89C48EE20723849_OFFSET UNITYSDK_OFFSET(0xADB01E0)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_F961DEE8E8B179B4_OFFSET UNITYSDK_OFFSET(0xADB1600)
#define CLASS_2_FEC0278FE3DEA4E2_METHOD_2_FA4A64C9A59CC8E0_OFFSET UNITYSDK_OFFSET(0xADAFB90)
#define CLASS_2_FEC0278FE3DEA4E2_SET_WORKFINISH_OFFSET UNITYSDK_OFFSET(0xADB3C00)
#define CLASS_2_FEC0278FE3DEA4E2_TICK_OFFSET UNITYSDK_OFFSET(0xADAF870)
#define CLASS_2_FEC0278FE3DEA4E2__CCTOR_OFFSET UNITYSDK_OFFSET(0xADB3CB0)
#define CLASS_2_FEC0278FE3DEA4E2__CTOR_OFFSET UNITYSDK_OFFSET(0xADB3C70)

inline static constexpr unsigned int Class_2_FEC0278FE3DEA4E2_TypeDefinitionIndex = 54785;

class Class_2_FEC0278FE3DEA4E2 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FEC0278FE3DEA4E2_TypeDefinitionIndex)->GetStaticField(0x4E5B0);
	}
	// static const ::System::String* Field_2_1; // 0x0
	::RPG::GameCore::BattlePerformConfig* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_4; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0x30
	::RPG::Client::EmoPlayableGraphConfig* Field_2_6; // 0x38
	::RPG::GameCore::LevelGraphComponent* Field_2_7; // 0x40
	::RPG::GameCore::BattlePerformInit* Field_2_8; // 0x48
	::RPG::Client::Promises::Promise* Field_2_9; // 0x50
	::Class_1_0251F68C7A9C91EA* Field_2_10; // 0x58
	::RPG::Client::Promises::Promise* Field_2_11; // 0x60
	::RPG::GameCore::GameWorld* Field_2_12; // 0x68
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::GameCore::BattlePerformCreateActor*, ::RPG::GameCore::GameEntity*>>* Field_2_13; // 0x70
	::System::String* Field_2_14; // 0x78
	::RPG::GameCore::BattlePerformStageConfig* Field_2_15; // 0x80
	::RPG::Client::Promises::Promise* Field_2_16; // 0x88
	::System::Exception* Field_2_17; // 0x90
	::Class_3_07C3C4D2990C49EE* Field_2_18; // 0x98
	::Class_1_0251F68C7A9C91EA* Field_2_19; // 0xA0
	::System::Int32 Field_2_20; // 0xA8
	::System::Boolean _WorkFinish_k__BackingField; // 0xAC
	::System::Boolean Field_2_22; // 0xAD

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_AF35526B98502BDF(::RPG::GameCore::BattlePerformInit* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::RPG::GameCore::BattlePerformInit*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_AF35526B98502BDF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_2_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_2_DEEED0A71E3D5E35(::RPG::GameCore::BattlePerformCreateActor* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCreateActor*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_DEEED0A71E3D5E35_OFFSET))(this, a1);
	}

	::System::Void Method_2_F961DEE8E8B179B4(::RPG::GameCore::BattlePerformCaptureActor* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_F961DEE8E8B179B4_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD658202BB4C4431()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_BD658202BB4C4431_OFFSET))(this);
	}

	::System::Int32 Method_2_435C766C09C307BB(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::BattlePerformCaptureActor* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_435C766C09C307BB_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_2_91B479DECE7491D8(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_91B479DECE7491D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B59235A910528B9(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_1B59235A910528B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B0E5A94005A811FC(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_B0E5A94005A811FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EB8DB967ADFFC4B2(::RPG::GameCore::BattlePerformCaptureActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_EB8DB967ADFFC4B2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_18D64D8FCCC1D09F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_18D64D8FCCC1D09F_OFFSET))(this, a1);
	}

	::System::Void Method_2_18D64D8FCCC1D09F_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_18D64D8FCCC1D09F_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_651156E1722E01FB(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_651156E1722E01FB_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_2_C4AFE676986D96B9(::RPG::GameCore::BattlePerformCreateActor* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattlePerformCreateActor*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C4AFE676986D96B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C0D4F45F16A4FB85(::RPG::GameCore::BattlePerformCreateActor* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCreateActor*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_C0D4F45F16A4FB85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2F820B7CD0C616C8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_2F820B7CD0C616C8_OFFSET))(this, a1);
	}

	::System::Void Method_2_62882324FFF46D85(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_62882324FFF46D85_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_698AEA6086494C95(::RPG::GameCore::BattlePerformCaptureActor* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_698AEA6086494C95_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFA731718AC5CCC0(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_AFA731718AC5CCC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FA4A64C9A59CC8E0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_FA4A64C9A59CC8E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_A07C2061B55C1547()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_A07C2061B55C1547_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_41A074549EF25F63_1_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_2E6FB1478A87D6D2()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_2E6FB1478A87D6D2_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_F89C48EE20723849()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_F89C48EE20723849_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_27C87B63AFD1A352()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_27C87B63AFD1A352_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D048E895C608EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_4D048E895C608EDE_OFFSET))(this);
	}

	::System::Void Method_2_EB522918F22FFA3B(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_EB522918F22FFA3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D34432C0B65E6441(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_D34432C0B65E6441_OFFSET))(this, a1);
	}

	::System::Void Method_2_261C2B64774FC8E4(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_261C2B64774FC8E4_OFFSET))(this, a1);
	}

	::System::Boolean get_WorkFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_GET_WORKFINISH_OFFSET))(this);
	}

	::System::Void set_WorkFinish(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_SET_WORKFINISH_OFFSET))(this, a1);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC0278FE3DEA4E2_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
