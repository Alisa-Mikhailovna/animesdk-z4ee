#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DUTILITIES_ACTIVEENVIRONMENTPROFILE_OFFSET UNITYSDK_OFFSET(0xD787720)
#define RPG_CLIENT_UI3DUTILITIES_CLEARSHADOWCENTER_OFFSET UNITYSDK_OFFSET(0xD7880F0)
#define RPG_CLIENT_UI3DUTILITIES_DIRTYUIBLUR_OFFSET UNITYSDK_OFFSET(0xD7888C0)
#define RPG_CLIENT_UI3DUTILITIES_ENABLEHIZOC_OFFSET UNITYSDK_OFFSET(0xD787DB0)
#define RPG_CLIENT_UI3DUTILITIES_ISCAMERABLENDING_OFFSET UNITYSDK_OFFSET(0xD788960)
#define RPG_CLIENT_UI3DUTILITIES_OVERRIDEDOFCONFIG_OFFSET UNITYSDK_OFFSET(0xD7885C0)
#define RPG_CLIENT_UI3DUTILITIES_RELEASEDOFCONFIG_OFFSET UNITYSDK_OFFSET(0xD7887D0)
#define RPG_CLIENT_UI3DUTILITIES_RESETENVIRONMENTPROFILE_OFFSET UNITYSDK_OFFSET(0xD787AD0)
#define RPG_CLIENT_UI3DUTILITIES_RESTORESCENE_OFFSET UNITYSDK_OFFSET(0xD7883D0)
#define RPG_CLIENT_UI3DUTILITIES_SETDEFAULTSHADOWCENTER_OFFSET UNITYSDK_OFFSET(0xD7881A0)
#define RPG_CLIENT_UI3DUTILITIES_SETDOFENABLE_OFFSET UNITYSDK_OFFSET(0xD788720)
#define RPG_CLIENT_UI3DUTILITIES_SWITCHTOUI3DLAYER_OFFSET UNITYSDK_OFFSET(0xD785B20)
#define RPG_CLIENT_UI3DUTILITIES_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0xD7882D0)
#define RPG_CLIENT_UI3DUTILITIES__CTOR_OFFSET UNITYSDK_OFFSET(0xD788AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DUtilities_TypeDefinitionIndex = 69677;

	class UI3DUtilities : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::System::Boolean>* StaticGet__EnableHiZOCBefore()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(UI3DUtilities_TypeDefinitionIndex)->GetStaticField(0xD3F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES__CTOR_OFFSET))(this);
		}

		static ::System::Boolean ActiveEnvironmentProfile(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_ACTIVEENVIRONMENTPROFILE_OFFSET))(a1);
		}

		static ::System::Void ResetEnvironmentProfile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_RESETENVIRONMENTPROFILE_OFFSET))();
		}

		static ::System::Void EnableHiZOC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_ENABLEHIZOC_OFFSET))(a1);
		}

		static ::System::Void ClearShadowCenter()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_CLEARSHADOWCENTER_OFFSET))();
		}

		static ::System::Void SetDefaultShadowCenter()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_SETDEFAULTSHADOWCENTER_OFFSET))();
		}

		static ::System::Void SwitchToUI3DLayer(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_SWITCHTOUI3DLAYER_OFFSET))(a1);
		}

		static ::System::Void UnloadScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_UNLOADSCENE_OFFSET))();
		}

		static ::System::Void RestoreScene(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_RESTORESCENE_OFFSET))(a1);
		}

		static ::System::Void OverrideDOFConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_OVERRIDEDOFCONFIG_OFFSET))(a1);
		}

		static ::System::Void SetDOFEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_SETDOFENABLE_OFFSET))(a1);
		}

		static ::System::Void ReleaseDOFConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_RELEASEDOFCONFIG_OFFSET))();
		}

		static ::System::Void DirtyUIBlur()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_DIRTYUIBLUR_OFFSET))();
		}

		static ::System::Boolean IsCameraBlending()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_ISCAMERABLENDING_OFFSET))();
		}
	};
}
