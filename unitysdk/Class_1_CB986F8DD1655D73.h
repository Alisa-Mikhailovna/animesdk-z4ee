#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicTypeExtra.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CB986F8DD1655D73_GET_ANIMATORSTATEHASH_OFFSET UNITYSDK_OFFSET(0xBFD6300)
#define CLASS_1_CB986F8DD1655D73_GET_ISFIXEDTRANSITION_OFFSET UNITYSDK_OFFSET(0xBFD62E0)
#define CLASS_1_CB986F8DD1655D73_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xBFD6090)
#define CLASS_1_CB986F8DD1655D73_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xBFD6130)
#define CLASS_1_CB986F8DD1655D73_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0xBFD6280)
#define CLASS_1_CB986F8DD1655D73_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xBFD6210)
#define CLASS_1_CB986F8DD1655D73_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0xBFD6270)
#define CLASS_1_CB986F8DD1655D73_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xBFD6200)
#define CLASS_1_CB986F8DD1655D73_METHOD_1_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0xBFD6140)
#define CLASS_1_CB986F8DD1655D73_SET_ANIMATORSTATEHASH_OFFSET UNITYSDK_OFFSET(0xBFD6310)
#define CLASS_1_CB986F8DD1655D73_SET_ISFIXEDTRANSITION_OFFSET UNITYSDK_OFFSET(0xBFD62F0)
#define CLASS_1_CB986F8DD1655D73__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD6320)

inline static constexpr unsigned int Class_1_CB986F8DD1655D73_TypeDefinitionIndex = 53414;

class Class_1_CB986F8DD1655D73 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::AnimStateLogicTypeExtra>* Field_1_1; // 0x18
	::RPG::GameCore::AnimStateLogicType Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28
	::System::Int32 _AnimatorStateHash_k__BackingField; // 0x2C
	::System::Single Field_1_6; // 0x30
	::System::UInt32 Field_1_7; // 0x34
	::System::Single Field_1_8; // 0x38
	::System::Single Field_1_9; // 0x3C
	::System::Boolean Field_1_10; // 0x40
	::System::Boolean _IsFixedTransition_k__BackingField; // 0x41
	::RPG::GameCore::AnimStateLogicTypeExtra Field_1_12; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_CB986F8DD1655D73* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB986F8DD1655D73*))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_METHOD_1_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFixedTransition()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_GET_ISFIXEDTRANSITION_OFFSET))(this);
	}

	::System::Void set_IsFixedTransition(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_SET_ISFIXEDTRANSITION_OFFSET))(this, a1);
	}

	::System::Int32 get_AnimatorStateHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_GET_ANIMATORSTATEHASH_OFFSET))(this);
	}

	::System::Void set_AnimatorStateHash(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_SET_ANIMATORSTATEHASH_OFFSET))(this, a1);
	}
};
