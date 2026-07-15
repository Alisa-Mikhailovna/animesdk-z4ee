#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_IO_TEXTWRITER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A15E9D0)
#define SYSTEM_IO_TEXTWRITER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A15EA00)
#define SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1A15EA10)
#define SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_1_OFFSET UNITYSDK_OFFSET(0x1A15EB10)
#define SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_2_OFFSET UNITYSDK_OFFSET(0x1A15EC10)
#define SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_3_OFFSET UNITYSDK_OFFSET(0x1A15ED30)
#define SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_4_OFFSET UNITYSDK_OFFSET(0x1A15EE30)
#define SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_5_OFFSET UNITYSDK_OFFSET(0x1A15EF30)
#define SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_6_OFFSET UNITYSDK_OFFSET(0x1A15F050)

namespace System::IO
{
	inline static constexpr unsigned int TextWriter___c_TypeDefinitionIndex = 701;

	class TextWriter___c : public ::System::Object
	{
	public:
		static ::System::IO::TextWriter___c** StaticGet___9()
		{
			return (::System::IO::TextWriter___c**)Il2CppClass::FromTypeDefinitionIndex(TextWriter___c_TypeDefinitionIndex)->GetStaticField(0xDBC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__73_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_0_OFFSET))(this, a1);
		}

		::System::Void __cctor_b__73_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_1_OFFSET))(this, a1);
		}

		::System::Void __cctor_b__73_2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_2_OFFSET))(this, a1);
		}

		::System::Void __cctor_b__73_3(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_3_OFFSET))(this, a1);
		}

		::System::Void __cctor_b__73_4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_4_OFFSET))(this, a1);
		}

		::System::Void __cctor_b__73_5(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_5_OFFSET))(this, a1);
		}

		::System::Void __cctor_b__73_6(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTWRITER___C___CCTOR_B__73_6_OFFSET))(this, a1);
		}
	};
}
