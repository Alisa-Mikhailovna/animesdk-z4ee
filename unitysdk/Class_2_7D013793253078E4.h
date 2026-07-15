#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityLoadState.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_2DE6E652B33A5FF1;
class Class_1_4A90D78D94DB1347;
class Class_1_78FBE34BADCAF595;
class Class_1_B68CA618BEA3A2C8;
class Class_2_7CF36DB1DCE43BAF;
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client { class NpcMonoLod; }
namespace RPG::GameCore { class EntityLodLoadingData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCStillConfigData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorOverrideController; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7D013793253078E4_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x15425EA0)
#define CLASS_2_7D013793253078E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15425FE0)
#define CLASS_2_7D013793253078E4_GETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x154288A0)
#define CLASS_2_7D013793253078E4_GETMODELART_OFFSET UNITYSDK_OFFSET(0x15428550)
#define CLASS_2_7D013793253078E4_GETMODELGO_OFFSET UNITYSDK_OFFSET(0x154252C0)
#define CLASS_2_7D013793253078E4_GET_ISPOLYMER_OFFSET UNITYSDK_OFFSET(0x154289D0)
#define CLASS_2_7D013793253078E4_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0x154289F0)
#define CLASS_2_7D013793253078E4_GET_MATERIALGROUPCONTAINERINSTANCE_OFFSET UNITYSDK_OFFSET(0x15428890)
#define CLASS_2_7D013793253078E4_GET_MOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0x15428880)
#define CLASS_2_7D013793253078E4_GET_SCENEOBJHANDLER_OFFSET UNITYSDK_OFFSET(0x154289E0)
#define CLASS_2_7D013793253078E4_METHOD_2_0D1FE04D54BD7FF2_OFFSET UNITYSDK_OFFSET(0x15424C40)
#define CLASS_2_7D013793253078E4_METHOD_2_0F3D3A5ABDA9779E_OFFSET UNITYSDK_OFFSET(0x15426C20)
#define CLASS_2_7D013793253078E4_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x154275A0)
#define CLASS_2_7D013793253078E4_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15425490)
#define CLASS_2_7D013793253078E4_METHOD_2_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x154271E0)
#define CLASS_2_7D013793253078E4_METHOD_2_2EC08A3DF3EE073C_OFFSET UNITYSDK_OFFSET(0x15426460)
#define CLASS_2_7D013793253078E4_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x154257B0)
#define CLASS_2_7D013793253078E4_METHOD_2_311DDAC730F6D367_OFFSET UNITYSDK_OFFSET(0x154287D0)
#define CLASS_2_7D013793253078E4_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x154253D0)
#define CLASS_2_7D013793253078E4_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15425320)
#define CLASS_2_7D013793253078E4_METHOD_2_3B22B00E8CF644F6_OFFSET UNITYSDK_OFFSET(0x154269E0)
#define CLASS_2_7D013793253078E4_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x15426CC0)
#define CLASS_2_7D013793253078E4_METHOD_2_3CD824698B7B427A_OFFSET UNITYSDK_OFFSET(0x154255D0)
#define CLASS_2_7D013793253078E4_METHOD_2_3F07804D8892197E_OFFSET UNITYSDK_OFFSET(0x15424E90)
#define CLASS_2_7D013793253078E4_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x154278F0)
#define CLASS_2_7D013793253078E4_METHOD_2_43A20E51EFDACFFD_1_OFFSET UNITYSDK_OFFSET(0x15425D80)
#define CLASS_2_7D013793253078E4_METHOD_2_43A20E51EFDACFFD_OFFSET UNITYSDK_OFFSET(0x15425C60)
#define CLASS_2_7D013793253078E4_METHOD_2_4679E7840A7526E1_1_OFFSET UNITYSDK_OFFSET(0x15427980)
#define CLASS_2_7D013793253078E4_METHOD_2_4679E7840A7526E1_2_OFFSET UNITYSDK_OFFSET(0x15428290)
#define CLASS_2_7D013793253078E4_METHOD_2_4679E7840A7526E1_3_OFFSET UNITYSDK_OFFSET(0x15427C50)
#define CLASS_2_7D013793253078E4_METHOD_2_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0x15427FD0)
#define CLASS_2_7D013793253078E4_METHOD_2_5170CCD80718D189_OFFSET UNITYSDK_OFFSET(0x154278A0)
#define CLASS_2_7D013793253078E4_METHOD_2_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x15427F20)
#define CLASS_2_7D013793253078E4_METHOD_2_6DA2A24A9445E424_1_OFFSET UNITYSDK_OFFSET(0x15425E20)
#define CLASS_2_7D013793253078E4_METHOD_2_6DA2A24A9445E424_OFFSET UNITYSDK_OFFSET(0x15425D00)
#define CLASS_2_7D013793253078E4_METHOD_2_6F3ED48AF05D074C_OFFSET UNITYSDK_OFFSET(0x154265B0)
#define CLASS_2_7D013793253078E4_METHOD_2_762A9412773049BE_OFFSET UNITYSDK_OFFSET(0x15425080)
#define CLASS_2_7D013793253078E4_METHOD_2_7CB9C71E2C2A0739_OFFSET UNITYSDK_OFFSET(0x15425580)
#define CLASS_2_7D013793253078E4_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x15427810)
#define CLASS_2_7D013793253078E4_METHOD_2_901579330F4433BA_OFFSET UNITYSDK_OFFSET(0x15424DE0)
#define CLASS_2_7D013793253078E4_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x15427530)
#define CLASS_2_7D013793253078E4_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x154268C0)
#define CLASS_2_7D013793253078E4_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x15424F40)
#define CLASS_2_7D013793253078E4_METHOD_2_B237442E2D59342B_OFFSET UNITYSDK_OFFSET(0x15426940)
#define CLASS_2_7D013793253078E4_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x15426120)
#define CLASS_2_7D013793253078E4_METHOD_2_B8A8F4F120B2F6D5_OFFSET UNITYSDK_OFFSET(0x154259A0)
#define CLASS_2_7D013793253078E4_METHOD_2_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x15427080)
#define CLASS_2_7D013793253078E4_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x15425F50)
#define CLASS_2_7D013793253078E4_METHOD_2_DD152A1A30757DCD_OFFSET UNITYSDK_OFFSET(0x154258A0)
#define CLASS_2_7D013793253078E4_METHOD_2_E0A096FC69F007A0_OFFSET UNITYSDK_OFFSET(0x15428A00)
#define CLASS_2_7D013793253078E4_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x154262D0)
#define CLASS_2_7D013793253078E4_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x15425190)
#define CLASS_2_7D013793253078E4_REFRESHADDCOLLIDERSENABLE_OFFSET UNITYSDK_OFFSET(0x15428990)
#define CLASS_2_7D013793253078E4_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x15428A10)
#define CLASS_2_7D013793253078E4_SETSCENEOBJVISIBLE_OFFSET UNITYSDK_OFFSET(0x154288F0)
#define CLASS_2_7D013793253078E4_TRYHIDEACTOR_OFFSET UNITYSDK_OFFSET(0x15428940)
#define CLASS_2_7D013793253078E4__CTOR_OFFSET UNITYSDK_OFFSET(0x15428B50)

inline static constexpr unsigned int Class_2_7D013793253078E4_TypeDefinitionIndex = 54875;

class Class_2_7D013793253078E4 : public ::RPG::GameCore::GameComponentBase
{
public:
	::UnityEngine::Collider* Field_2_0; // 0x18
	::UnityEngine::RuntimeAnimatorController* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::System::Action_1<::UnityEngine::GameObject*>* Field_2_3; // 0x30
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_4; // 0x38
	::Class_1_78FBE34BADCAF595* Field_2_5; // 0x40
	::System::String* Field_2_6; // 0x48
	::RPG::GameCore::LevelNPCStillConfigData* Field_2_7; // 0x50
	::Class_1_4A90D78D94DB1347* Field_2_8; // 0x58
	::System::String* Field_2_9; // 0x60
	::RPG::Client::CharacterShaderPropertyTransition* Field_2_10; // 0x68
	::RPG::GameCore::EntityLodLoadingData* Field_2_11; // 0x70
	::Class_1_2DE6E652B33A5FF1* Field_2_12; // 0x78
	::System::String* Field_2_13; // 0x80
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_14; // 0x88
	::UnityEngine::AnimatorOverrideController* Field_2_15; // 0x90
	::System::String* Field_2_16; // 0x98
	::UnityEngine::Animator* Field_2_17; // 0xA0
	::RPG::Client::NpcMonoLod* Field_2_18; // 0xA8
	::System::String* Field_2_19; // 0xB0
	::RPG::Client::MockAnimator* Field_2_20; // 0xB8
	::UnityEngine::GameObject* Field_2_21; // 0xC0
	::RPG::GameCore::EntityLoadState Field_2_22; // 0xC8
	::System::Boolean Field_2_23; // 0xCC
	::System::Boolean Field_2_24; // 0xCD
	::System::Boolean Field_2_25; // 0xCE
	::System::Boolean Field_2_26; // 0xCF

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0D1FE04D54BD7FF2(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_0D1FE04D54BD7FF2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_2_901579330F4433BA(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_901579330F4433BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3F07804D8892197E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_3F07804D8892197E_OFFSET))(this, a1);
	}

	::System::Void Method_2_762A9412773049BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_762A9412773049BE_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::RPG::GameCore::EntityLodTemplateName Method_2_7CB9C71E2C2A0739()
	{
		return ((::RPG::GameCore::EntityLodTemplateName(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_7CB9C71E2C2A0739_OFFSET))(this);
	}

	::System::Void Method_2_3CD824698B7B427A(::System::String* a1, ::RPG::GameCore::LevelNPCStillConfigData* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::LevelNPCStillConfigData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_3CD824698B7B427A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DD152A1A30757DCD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_DD152A1A30757DCD_OFFSET))(this, a1);
	}

	::System::Void Method_2_43A20E51EFDACFFD(::System::Action_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_43A20E51EFDACFFD_OFFSET))(this, a1);
	}

	::System::Void Method_2_6DA2A24A9445E424(::System::Action_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_6DA2A24A9445E424_OFFSET))(this, a1);
	}

	::System::Void Method_2_43A20E51EFDACFFD_1(::System::Action_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_43A20E51EFDACFFD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_6DA2A24A9445E424_1(::System::Action_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_6DA2A24A9445E424_1_OFFSET))(this, a1);
	}

	::System::Void BeforeDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_BEFOREDISPOSE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_B8A8F4F120B2F6D5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_B8A8F4F120B2F6D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_6F3ED48AF05D074C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_6F3ED48AF05D074C_OFFSET))(this, a1);
	}

	::System::Void Method_2_B237442E2D59342B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_B237442E2D59342B_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B22B00E8CF644F6(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_3B22B00E8CF644F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_0F3D3A5ABDA9779E(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_0F3D3A5ABDA9779E_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_5170CCD80718D189(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_5170CCD80718D189_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_4679E7840A7526E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_4679E7840A7526E1_OFFSET))(this);
	}

	::System::Void Method_2_4679E7840A7526E1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_4679E7840A7526E1_1_OFFSET))(this);
	}

	::System::Void Method_2_4679E7840A7526E1_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_4679E7840A7526E1_2_OFFSET))(this);
	}

	::System::Void Method_2_4679E7840A7526E1_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_4679E7840A7526E1_3_OFFSET))(this);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Void Method_2_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_2BC55A66CB2B0118_OFFSET))(this);
	}

	::System::Void Method_2_2EC08A3DF3EE073C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_2EC08A3DF3EE073C_OFFSET))(this, a1);
	}

	::System::Void Method_2_311DDAC730F6D367(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_311DDAC730F6D367_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_62167C28EC14CC63_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetModelGO()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_GETMODELGO_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetModelArt()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_GETMODELART_OFFSET))(this);
	}

	::RPG::Client::MockAnimator* get_MockAnimator()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_GET_MOCKANIMATOR_OFFSET))(this);
	}

	::Class_1_B68CA618BEA3A2C8* get_MaterialGroupContainerInstance()
	{
		return ((::Class_1_B68CA618BEA3A2C8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_GET_MATERIALGROUPCONTAINERINSTANCE_OFFSET))(this);
	}

	::UnityEngine::Transform* GetAttachPoint(::System::String* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_GETATTACHPOINT_OFFSET))(this, a1, a2);
	}

	::System::Void SetSceneObjVisible(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_SETSCENEOBJVISIBLE_OFFSET))(this, a1);
	}

	::System::Void TryHideActor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_TRYHIDEACTOR_OFFSET))(this, a1);
	}

	::System::Void RefreshAddCollidersEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_REFRESHADDCOLLIDERSENABLE_OFFSET))(this);
	}

	::System::Boolean get_IsPolymer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_GET_ISPOLYMER_OFFSET))(this);
	}

	::Class_2_7CF36DB1DCE43BAF* get_SceneObjHandler()
	{
		return ((::Class_2_7CF36DB1DCE43BAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_GET_SCENEOBJHANDLER_OFFSET))(this);
	}

	::RPG::GameCore::EntityLoadState get_LoadState()
	{
		return ((::RPG::GameCore::EntityLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_GET_LOADSTATE_OFFSET))(this);
	}

	::System::Void Method_2_E0A096FC69F007A0(::RPG::GameCore::EntityLoadState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLoadState))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_METHOD_2_E0A096FC69F007A0_OFFSET))(this, a1);
	}

	::System::Void ResetToDefault()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D013793253078E4_RESETTODEFAULT_OFFSET))(this);
	}
};
