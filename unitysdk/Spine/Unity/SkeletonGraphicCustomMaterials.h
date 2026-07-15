#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonGraphicCustomMaterials_AtlasMaterialOverride.h"
#include "unitysdk/Spine/Unity/SkeletonGraphicCustomMaterials_AtlasTextureOverride.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine::Unity { class SkeletonGraphic; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C9AA240)
#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C9AA0D0)
#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_REMOVECUSTOMMATERIALOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1C9A9A10)
#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_REMOVECUSTOMTEXTUREOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1C9A9E50)
#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_SETCUSTOMMATERIALOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1C9A9850)
#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_SETCUSTOMTEXTUREOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1C9A9C90)
#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9AA310)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphicCustomMaterials_TypeDefinitionIndex = 42247;

	class SkeletonGraphicCustomMaterials : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x18
		::System::Collections::Generic::List_1<::Spine::Unity::SkeletonGraphicCustomMaterials_AtlasMaterialOverride>* customMaterialOverrides; // 0x20
		::System::Collections::Generic::List_1<::Spine::Unity::SkeletonGraphicCustomMaterials_AtlasTextureOverride>* customTextureOverrides; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS__CTOR_OFFSET))(this);
		}

		::System::Void SetCustomMaterialOverrides()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_SETCUSTOMMATERIALOVERRIDES_OFFSET))(this);
		}

		::System::Void RemoveCustomMaterialOverrides()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_REMOVECUSTOMMATERIALOVERRIDES_OFFSET))(this);
		}

		::System::Void SetCustomTextureOverrides()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_SETCUSTOMTEXTUREOVERRIDES_OFFSET))(this);
		}

		::System::Void RemoveCustomTextureOverrides()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_REMOVECUSTOMTEXTUREOVERRIDES_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_ONDISABLE_OFFSET))(this);
		}
	};
}
