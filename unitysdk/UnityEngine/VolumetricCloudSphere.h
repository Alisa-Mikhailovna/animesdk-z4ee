#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define UNITYENGINE_VOLUMETRICCLOUDSPHERE_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1D06E9F0)
#define UNITYENGINE_VOLUMETRICCLOUDSPHERE_SETMATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1D06EA00)

namespace UnityEngine
{
	inline static constexpr unsigned int VolumetricCloudSphere_TypeDefinitionIndex = 4262;

	class VolumetricCloudSphere : public ::UnityEngine::Behaviour
	{
	public:
		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICCLOUDSPHERE_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void SetMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICCLOUDSPHERE_SETMATERIALPROPERTYBLOCK_OFFSET))(this, a1);
		}
	};
}
