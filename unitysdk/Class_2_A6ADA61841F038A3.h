#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_A6ADA61841F038A3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x14C5E630)
#define CLASS_2_A6ADA61841F038A3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x14C5E7B0)
#define CLASS_2_A6ADA61841F038A3_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x14C5D120)
#define CLASS_2_A6ADA61841F038A3_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x14C5D140)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x14C5D180)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x14C5DA70)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_24B2CA816EFA1FA5_OFFSET UNITYSDK_OFFSET(0x14C5D6B0)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x14C5D3D0)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_3FF9C4D9874672D5_OFFSET UNITYSDK_OFFSET(0x14C5DF60)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x14C5D910)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14C5D850)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x14C5E290)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_71915706CE77067A_OFFSET UNITYSDK_OFFSET(0x14C5D9A0)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_926A87EF7B2C87F9_OFFSET UNITYSDK_OFFSET(0x14C5E310)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x14C5E090)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x14C5DDF0)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14C5D370)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_EEB7AD9AD74B5FBF_OFFSET UNITYSDK_OFFSET(0x14C5DCA0)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x14C5E520)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x14C5E460)
#define CLASS_2_A6ADA61841F038A3_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x14C5D130)
#define CLASS_2_A6ADA61841F038A3__CTOR_OFFSET UNITYSDK_OFFSET(0x14C5E910)
#define CLASS_2_A6ADA61841F038A3__ONBIND_OFFSET UNITYSDK_OFFSET(0x14C5CEE0)
#define CLASS_2_A6ADA61841F038A3__ONTICK_OFFSET UNITYSDK_OFFSET(0x14C5DFE0)

inline static constexpr unsigned int Class_2_A6ADA61841F038A3_TypeDefinitionIndex = 68839;

class Class_2_A6ADA61841F038A3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	::UnityEngine::Transform* Field_2_3; // 0x60
	::UnityEngine::UI::Image* Field_2_4; // 0x68
	::RPG::GameCore::LevelDataComponent* Field_2_5; // 0x70
	::UnityEngine::Animation* Field_2_6; // 0x78
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_7; // 0x80
	::RPG::GameCore::LevelUIComponent* Field_2_8; // 0x88
	::UnityEngine::Transform* Field_2_9; // 0x90
	::RPG::Client::LocalizedText* Field_2_10; // 0x98
	::UnityEngine::RectTransform* Field_2_11; // 0xA0
	::System::UInt32 Field_2_12; // 0xA8
	::System::Single Field_2_13; // 0xAC
	::System::Single Field_2_14; // 0xB0
	::System::Single Field_2_15; // 0xB4
	::System::Single Field_2_16; // 0xB8
	::System::Int32 _Index_k__BackingField; // 0xBC
	::System::Boolean Field_2_18; // 0xC0
	::System::Boolean Field_2_19; // 0xC1
	::System::Boolean Field_2_20; // 0xC2
	::System::Single Field_2_21; // 0xC4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_71915706CE77067A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_71915706CE77067A_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Void Method_2_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_2_EEB7AD9AD74B5FBF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_EEB7AD9AD74B5FBF_OFFSET))(this, a1);
	}

	::System::Void Method_2_3FF9C4D9874672D5(::RPG::GameCore::LevelEntityEscape* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_3FF9C4D9874672D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_24B2CA816EFA1FA5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_24B2CA816EFA1FA5_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_926A87EF7B2C87F9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_926A87EF7B2C87F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
