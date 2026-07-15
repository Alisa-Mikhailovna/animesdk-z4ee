#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define PACKAGENAMERECORD_METHOD_5_6A7CEF06F8896271_OFFSET UNITYSDK_OFFSET(0xBA73A00)
#define PACKAGENAMERECORD_METHOD_5_B8FAD8726C647FA2_OFFSET UNITYSDK_OFFSET(0xBA73AA0)
#define PACKAGENAMERECORD_WRITEANDUPLOADBRANCHDATA_OFFSET UNITYSDK_OFFSET(0xBA73400)
#define PACKAGENAMERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0xBA73B40)

inline static constexpr unsigned int PackageNameRecord_TypeDefinitionIndex = 45788;

class PackageNameRecord : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::String* Field_5_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACKAGENAMERECORD__CTOR_OFFSET))(this);
	}

	static ::System::Void WriteAndUploadBranchData()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PACKAGENAMERECORD_WRITEANDUPLOADBRANCHDATA_OFFSET))();
	}

	static ::System::Void Method_5_6A7CEF06F8896271(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PACKAGENAMERECORD_METHOD_5_6A7CEF06F8896271_OFFSET))(a1, a2);
	}

	static ::System::Collections::IEnumerator* Method_5_B8FAD8726C647FA2(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PACKAGENAMERECORD_METHOD_5_B8FAD8726C647FA2_OFFSET))(a1, a2);
	}
};
