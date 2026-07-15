#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A8FB7EDAFC5C8F4;
namespace RPG::Client { class PerformanceManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_128F506D49FEB31A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14607930)
#define CLASS_1_128F506D49FEB31A_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x146084A0)
#define CLASS_1_128F506D49FEB31A_METHOD_1_403F9746A5C8AE1C_OFFSET UNITYSDK_OFFSET(0x14607E10)
#define CLASS_1_128F506D49FEB31A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14608170)
#define CLASS_1_128F506D49FEB31A_METHOD_1_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0x146083E0)
#define CLASS_1_128F506D49FEB31A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14608350)
#define CLASS_1_128F506D49FEB31A_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x14607980)
#define CLASS_1_128F506D49FEB31A_METHOD_1_C6A2752B1217BA88_OFFSET UNITYSDK_OFFSET(0x14607CF0)
#define CLASS_1_128F506D49FEB31A_METHOD_1_EC1B27BDAC59929D_OFFSET UNITYSDK_OFFSET(0x14608220)
#define CLASS_1_128F506D49FEB31A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14608490)
#define CLASS_1_128F506D49FEB31A_METHOD_1_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x14607B80)
#define CLASS_1_128F506D49FEB31A_TICK_OFFSET UNITYSDK_OFFSET(0x14607B20)
#define CLASS_1_128F506D49FEB31A__CCTOR_OFFSET UNITYSDK_OFFSET(0x146084B0)
#define CLASS_1_128F506D49FEB31A__CTOR_OFFSET UNITYSDK_OFFSET(0x146078F0)

inline static constexpr unsigned int Class_1_128F506D49FEB31A_TypeDefinitionIndex = 58024;

class Class_1_128F506D49FEB31A : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_128F506D49FEB31A_TypeDefinitionIndex)->GetStaticField(0x83F0);
	}
	::Class_1_7A8FB7EDAFC5C8F4* Field_1_1; // 0x10
	::RPG::Client::PerformanceManager* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_7A8FB7EDAFC5C8F4*>* Field_1_3; // 0x20
	::System::UInt32 Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x2C
	::System::Boolean Field_1_6; // 0x2D
	::System::Single Field_1_7; // 0x30

	::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C6A2752B1217BA88(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_C6A2752B1217BA88_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_403F9746A5C8AE1C(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_403F9746A5C8AE1C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EC1B27BDAC59929D(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_EC1B27BDAC59929D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_FD7514C64FB1B043_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_7223CD34BEFCBF48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}
};
