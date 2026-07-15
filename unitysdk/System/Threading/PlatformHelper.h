#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_PLATFORMHELPER_GET_ISSINGLEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1A0351C0)
#define SYSTEM_THREADING_PLATFORMHELPER_GET_PROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x1A031F30)

namespace System::Threading
{
	inline static constexpr unsigned int PlatformHelper_TypeDefinitionIndex = 811;

	class PlatformHelper : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_processorCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PlatformHelper_TypeDefinitionIndex)->GetStaticField(0x6780);
		}
		static ::System::Int32* StaticGet_s_lastProcessorCountRefreshTicks()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PlatformHelper_TypeDefinitionIndex)->GetStaticField(0x6784);
		}

		static ::System::Int32 get_ProcessorCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_PLATFORMHELPER_GET_PROCESSORCOUNT_OFFSET))();
		}

		static ::System::Boolean get_IsSingleProcessor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_PLATFORMHELPER_GET_ISSINGLEPROCESSOR_OFFSET))();
		}
	};
}
