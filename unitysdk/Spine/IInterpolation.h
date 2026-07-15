#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_IINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1C931700)
#define SPINE_IINTERPOLATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9317D0)
#define SPINE_IINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9317C0)

namespace Spine
{
	inline static constexpr unsigned int IInterpolation_TypeDefinitionIndex = 37521;

	class IInterpolation : public ::System::Object
	{
	public:
		static ::Spine::IInterpolation** StaticGet_Pow2Out()
		{
			return (::Spine::IInterpolation**)Il2CppClass::FromTypeDefinitionIndex(IInterpolation_TypeDefinitionIndex)->GetStaticField(0x66F80);
		}
		static ::Spine::IInterpolation** StaticGet_Pow2()
		{
			return (::Spine::IInterpolation**)Il2CppClass::FromTypeDefinitionIndex(IInterpolation_TypeDefinitionIndex)->GetStaticField(0x66F88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IINTERPOLATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_IINTERPOLATION__CCTOR_OFFSET))();
		}

		::System::Single Apply(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_IINTERPOLATION_APPLY_OFFSET))(this, a1, a2, a3);
		}
	};
}
