#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/Struct_2_E31305FAF4D542A3.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class GrassData; }
namespace RPG::GameCore { class LodTemplate; }
namespace System { class String; }

#define CLASS_2_BEEE2DF546917092_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0xAE35420)
#define CLASS_2_BEEE2DF546917092_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0xAE352C0)
#define CLASS_2_BEEE2DF546917092_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0xAE35340)
#define CLASS_2_BEEE2DF546917092_GETPERSISTENTASSETPATH_OFFSET UNITYSDK_OFFSET(0xAE355C0)
#define CLASS_2_BEEE2DF546917092_GETRECT_OFFSET UNITYSDK_OFFSET(0xAE353C0)
#define CLASS_2_BEEE2DF546917092_METHOD_2_18193BE05A4121FF_OFFSET UNITYSDK_OFFSET(0xAE35250)
#define CLASS_2_BEEE2DF546917092_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAE35580)
#define CLASS_2_BEEE2DF546917092__CTOR_OFFSET UNITYSDK_OFFSET(0xAE34B60)

inline static constexpr unsigned int Class_2_BEEE2DF546917092_TypeDefinitionIndex = 70411;

class Class_2_BEEE2DF546917092 : public ::RPG::Client::OpenWorld::StreamingItemData
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_BEEE2DF546917092_TypeDefinitionIndex)->GetStaticField(0x8DE0);
	}
	::RPG::GameCore::GrassData* Field_2_1; // 0xB8
	::Class_1_303D5A33D1401D59* Field_2_2; // 0xC0
	::System::Single Field_2_3; // 0xC8
	::System::Boolean Field_2_4; // 0xCC
	::System::Byte Field_2_5; // 0xCD
	::System::Single Field_2_6; // 0xD0
	::System::Single Field_2_7; // 0xD4
	::UnityEngine::Rect Field_2_8; // 0xD8

	::System::Void _ctor(::RPG::GameCore::BlockNodeConfig* a1, ::Struct_2_E31305FAF4D542A3 a2, ::RPG::GameCore::LodTemplate* a3, ::RPG::GameCore::GrassData* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::Struct_2_E31305FAF4D542A3, ::RPG::GameCore::LodTemplate*, ::RPG::GameCore::GrassData*))((::PBYTE)hIl2Cpp + CLASS_2_BEEE2DF546917092__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_2_18193BE05A4121FF(::UnityEngine::Bounds a1, ::UnityEngine::Color a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::UnityEngine::Bounds, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BEEE2DF546917092_METHOD_2_18193BE05A4121FF_OFFSET))(a1, a2, a3);
	}

	::UnityEngine::Vector3 GetBoundCenter()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEEE2DF546917092_GETBOUNDCENTER_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetBoundSize()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEEE2DF546917092_GETBOUNDSIZE_OFFSET))(this);
	}

	::UnityEngine::Rect GetRect()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEEE2DF546917092_GETRECT_OFFSET))(this);
	}

	::System::String* GetApplyStreamingLayer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEEE2DF546917092_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEEE2DF546917092_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* GetPersistentAssetPath(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BEEE2DF546917092_GETPERSISTENTASSETPATH_OFFSET))(this, a1);
	}
};
