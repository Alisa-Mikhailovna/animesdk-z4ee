#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HFLayerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x198B8380)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferVolumeLayer_TypeDefinitionIndex = 38454;

	class HEU_LoadBufferVolumeLayer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* _normalizedHeights; // 0x10
		::System::String* _maskTexturePath; // 0x18
		::System::String* _layerPath; // 0x20
		::System::String* _layerName; // 0x28
		::System::String* _diffuseTexturePath; // 0x30
		::System::String* _normalTexturePath; // 0x38
		::System::Single _terrainSizeY; // 0x40
		::System::Int32 _heightMapWidth; // 0x44
		::UnityEngine::Vector2 _tileSize; // 0x48
		::System::Int32 _heightMapHeight; // 0x50
		::System::Int32 _partID; // 0x54
		::System::Boolean _uiExpanded; // 0x58
		::System::Boolean _hasLayerAttributes; // 0x59
		::System::Int32 _tile; // 0x5C
		::System::Single _normalScale; // 0x60
		::System::Single _heightRange; // 0x64
		::UnityEngine::Vector3 _center; // 0x68
		::UnityEngine::Vector2 _tileOffset; // 0x74
		::System::Single _terrainSizeX; // 0x7C
		::UnityEngine::Vector3 _minBounds; // 0x80
		::System::Single _smoothness; // 0x8C
		::UnityEngine::Vector3 _maxBounds; // 0x90
		::System::Single _strength; // 0x9C
		::System::Single _metallic; // 0xA0
		::UnityEngine::Vector3 _position; // 0xA4
		::System::Single _minHeight; // 0xB0
		::HoudiniEngineUnity::HFLayerType _layerType; // 0xB4
		::System::Single _maxHeight; // 0xB8
		::UnityEngine::Color _specularColor; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET))(this);
		}
	};
}
