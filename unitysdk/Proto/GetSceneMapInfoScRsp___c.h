#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class GetSceneMapInfoScRsp; }

#define PROTO_GETSCENEMAPINFOSCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC744C0)
#define PROTO_GETSCENEMAPINFOSCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC744F0)
#define PROTO_GETSCENEMAPINFOSCRSP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1BC74500)

namespace Proto
{
	inline static constexpr unsigned int GetSceneMapInfoScRsp___c_TypeDefinitionIndex = 32682;

	class GetSceneMapInfoScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::GetSceneMapInfoScRsp___c** StaticGet___9()
		{
			return (::Proto::GetSceneMapInfoScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(GetSceneMapInfoScRsp___c_TypeDefinitionIndex)->GetStaticField(0x3D760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::GetSceneMapInfoScRsp* __cctor_b__28_0()
		{
			return ((::Proto::GetSceneMapInfoScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
