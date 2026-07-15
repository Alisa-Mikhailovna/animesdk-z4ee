#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_BA11F281BD100FCC.h"

class Class_0_16E4307DCC419505_525;

#define CLASS_2_1A657922DF2D2760_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB5566B0)
#define CLASS_2_1A657922DF2D2760_GET_NEXT_OFFSET UNITYSDK_OFFSET(0xB556610)
#define CLASS_2_1A657922DF2D2760_GET_PREV_OFFSET UNITYSDK_OFFSET(0xB5565F0)
#define CLASS_2_1A657922DF2D2760_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB556630)
#define CLASS_2_1A657922DF2D2760_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0xB556650)
#define CLASS_2_1A657922DF2D2760_SET_NEXT_OFFSET UNITYSDK_OFFSET(0xB556620)
#define CLASS_2_1A657922DF2D2760_SET_PREV_OFFSET UNITYSDK_OFFSET(0xB556600)
#define CLASS_2_1A657922DF2D2760_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB556640)
#define CLASS_2_1A657922DF2D2760__CTOR_OFFSET UNITYSDK_OFFSET(0xB556950)

inline static constexpr unsigned int Class_2_1A657922DF2D2760_TypeDefinitionIndex = 53687;

class Class_2_1A657922DF2D2760 : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_525*>
{
public:
	::Class_0_16E4307DCC419505_525* _Next_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_525* _Prev_k__BackingField; // 0x30
	::System::Int32 _Priority_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A657922DF2D2760__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_525* get_Prev()
	{
		return ((::Class_0_16E4307DCC419505_525*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A657922DF2D2760_GET_PREV_OFFSET))(this);
	}

	::System::Void set_Prev(::Class_0_16E4307DCC419505_525* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_525*))((::PBYTE)hIl2Cpp + CLASS_2_1A657922DF2D2760_SET_PREV_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_525* get_Next()
	{
		return ((::Class_0_16E4307DCC419505_525*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A657922DF2D2760_GET_NEXT_OFFSET))(this);
	}

	::System::Void set_Next(::Class_0_16E4307DCC419505_525* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_525*))((::PBYTE)hIl2Cpp + CLASS_2_1A657922DF2D2760_SET_NEXT_OFFSET))(this, a1);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A657922DF2D2760_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void set_Priority(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1A657922DF2D2760_SET_PRIORITY_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A657922DF2D2760_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Void Execute(::Struct_2_BA11F281BD100FCC& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BA11F281BD100FCC&))((::PBYTE)hIl2Cpp + CLASS_2_1A657922DF2D2760_EXECUTE_OFFSET))(this, a1);
	}
};
