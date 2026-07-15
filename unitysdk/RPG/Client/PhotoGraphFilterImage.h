#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/RawImage.h"

namespace RPG::Client { class PhotoGraphFilterConfig; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0xCF73160)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0xCF73960)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0xCF739F0)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0xCF73280)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_INITWITHFILTERCONFIG_OFFSET UNITYSDK_OFFSET(0xCF736F0)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCF731F0)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_RESETFILTER_OFFSET UNITYSDK_OFFSET(0xCF73330)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETFILTERALPHA_OFFSET UNITYSDK_OFFSET(0xCF73630)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETFILTERLUT_OFFSET UNITYSDK_OFFSET(0xCF73570)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0xCF732E0)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0xCF73B00)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xCF73A70)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphFilterImage_TypeDefinitionIndex = 66320;

	class PhotoGraphFilterImage : public ::UnityEngine::UI::RawImage
	{
	public:
		static ::System::Int32* StaticGet__ShaderID_Lightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x14410);
		}
		static ::System::Int32* StaticGet__ShaderID_Hue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x14414);
		}
		static ::System::Int32* StaticGet__ShaderID_Saturation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x14418);
		}
		static ::System::Int32* StaticGet__ShaderID_FilterIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x1441C);
		}
		static ::System::Int32* StaticGet__ShaderID_ColorizeEnable()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x14420);
		}
		static ::System::Int32* StaticGet__ShaderID_Contrast()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x14424);
		}
		static ::System::Int32* StaticGet__ShaderID_Brightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x14428);
		}
		static ::System::Int32* StaticGet__ShaderID_LightnessColorize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x1442C);
		}
		static ::System::Int32* StaticGet__ShaderID_SaturationColorize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x14430);
		}
		static ::System::Int32* StaticGet__ShaderID_LUTEnable()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x14434);
		}
		static ::System::Int32* StaticGet__ShaderID_LUT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x14438);
		}
		static ::System::Int32* StaticGet__ShaderID_HueColorize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphFilterImage_TypeDefinitionIndex)->GetStaticField(0x1443C);
		}
		::System::Boolean IsChangedAfterSave; // 0x108
		::UnityEngine::Material* _MaterialInstance; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Void SetTexture(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETTEXTURE_OFFSET))(this, a1);
		}

		::System::Void ResetFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_RESETFILTER_OFFSET))(this);
		}

		::System::Void InitWithFilterConfig(::RPG::Client::PhotoGraphFilterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphFilterConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_INITWITHFILTERCONFIG_OFFSET))(this, a1);
		}

		::System::Void SetFilterLUT(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETFILTERLUT_OFFSET))(this, a1);
		}

		::System::Void SetFilterAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETFILTERALPHA_OFFSET))(this, a1);
		}

		::UnityEngine::RenderTexture* GetTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GETTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GET_MAINTEXTURE_OFFSET))(this);
		}
	};
}
