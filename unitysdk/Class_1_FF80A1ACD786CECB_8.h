#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_8_GET_CURWAVE_OFFSET UNITYSDK_OFFSET(0xBA17A90)
#define CLASS_1_FF80A1ACD786CECB_8_GET_MAXWAVE_OFFSET UNITYSDK_OFFSET(0xBA17AB0)
#define CLASS_1_FF80A1ACD786CECB_8_SET_CURWAVE_OFFSET UNITYSDK_OFFSET(0xBA17AA0)
#define CLASS_1_FF80A1ACD786CECB_8_SET_MAXWAVE_OFFSET UNITYSDK_OFFSET(0xBA17AC0)
#define CLASS_1_FF80A1ACD786CECB_8__CTOR_OFFSET UNITYSDK_OFFSET(0xBA17AD0)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_8_TypeDefinitionIndex = 75862;

class Class_1_FF80A1ACD786CECB_8 : public ::System::Object
{
public:
	::System::Int32 _MaxWave_k__BackingField; // 0x10
	::System::Int32 _CurWave_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_8__CTOR_OFFSET))(this);
	}

	::System::Int32 get_CurWave()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_8_GET_CURWAVE_OFFSET))(this);
	}

	::System::Void set_CurWave(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_8_SET_CURWAVE_OFFSET))(this, a1);
	}

	::System::Int32 get_MaxWave()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_8_GET_MAXWAVE_OFFSET))(this);
	}

	::System::Void set_MaxWave(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_8_SET_MAXWAVE_OFFSET))(this, a1);
	}
};
