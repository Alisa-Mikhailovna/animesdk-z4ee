#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkLogger_ErrorLoggerInteropDelegate;
namespace System { class String; }

#define AKLOGGER_ERROR_OFFSET UNITYSDK_OFFSET(0x1D1C9CB0)
#define AKLOGGER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D1C9810)
#define AKLOGGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D1C97E0)
#define AKLOGGER_INIT_OFFSET UNITYSDK_OFFSET(0x1D1C9990)
#define AKLOGGER_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1D1C99D0)
#define AKLOGGER_WARNING_OFFSET UNITYSDK_OFFSET(0x1D1C9B40)
#define AKLOGGER_WWISEINTERNALLOGERROR_OFFSET UNITYSDK_OFFSET(0x1D1C94C0)
#define AKLOGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1C9E20)
#define AKLOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C9630)

inline static constexpr unsigned int AkLogger_TypeDefinitionIndex = 42043;

class AkLogger : public ::System::Object
{
public:
	static ::AkLogger** StaticGet_ms_Instance()
	{
		return (::AkLogger**)Il2CppClass::FromTypeDefinitionIndex(AkLogger_TypeDefinitionIndex)->GetStaticField(0x5CBA0);
	}
	::AkLogger_ErrorLoggerInteropDelegate* errorLoggerDelegate; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLOGGER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKLOGGER__CCTOR_OFFSET))();
	}

	static ::AkLogger* get_Instance()
	{
		return ((::AkLogger*(*)())((::PBYTE)hIl2Cpp + AKLOGGER_GET_INSTANCE_OFFSET))();
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLOGGER_FINALIZE_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLOGGER_INIT_OFFSET))(this);
	}

	static ::System::Void WwiseInternalLogError(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKLOGGER_WWISEINTERNALLOGERROR_OFFSET))(a1);
	}

	static ::System::Void Message(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKLOGGER_MESSAGE_OFFSET))(a1);
	}

	static ::System::Void Warning(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKLOGGER_WARNING_OFFSET))(a1);
	}

	static ::System::Void Error(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKLOGGER_ERROR_OFFSET))(a1);
	}
};
