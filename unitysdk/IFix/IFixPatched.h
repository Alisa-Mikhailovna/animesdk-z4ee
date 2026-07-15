#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x14CC70F0)
#define IFIX_IFIXPATCHED_SETPATCH_OFFSET UNITYSDK_OFFSET(0x14D03420)
#define IFIX_IFIXPATCHED__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D03410)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_TypeDefinitionIndex = 76912;

	class IFixPatched : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_SETPATCH_OFFSET))(a1);
		}

		static ::System::Boolean IsPatched(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_ISPATCHED_OFFSET))(a1);
		}
	};
}
