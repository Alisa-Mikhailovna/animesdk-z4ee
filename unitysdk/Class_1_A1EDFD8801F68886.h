#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimCustomLoadConfig; }
namespace RPG::GameCore { class FiveDimCustomVisibilityConfig; }
namespace RPG::GameCore { class FiveDimEntityVarConfig; }
namespace RPG::GameCore { class FiveDimNavMapSurfaceConnectConfig; }
namespace RPG::GameCore { class FiveDimPipePortalConfig; }
namespace RPG::GameCore { class FiveDimPortalConfig; }
namespace RPG::GameCore { class FiveDimSurfaceConfig; }
namespace RPG::GameCore { class LittleGameAttachPointConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameNavMapIconConfig; }
namespace RPG::GameCore { class LittleGameTagConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A1EDFD8801F68886_GET_ATTACHPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8EE0)
#define CLASS_1_A1EDFD8801F68886_GET_ATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x143E8FE0)
#define CLASS_1_A1EDFD8801F68886_GET_CHILDRENIDS_OFFSET UNITYSDK_OFFSET(0x143E8DA0)
#define CLASS_1_A1EDFD8801F68886_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x143E9000)
#define CLASS_1_A1EDFD8801F68886_GET_CUSTOMLOADCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8F40)
#define CLASS_1_A1EDFD8801F68886_GET_CUSTOMVISIBILITYCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8F60)
#define CLASS_1_A1EDFD8801F68886_GET_ENTITYVARCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8F80)
#define CLASS_1_A1EDFD8801F68886_GET_ICONCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8EA0)
#define CLASS_1_A1EDFD8801F68886_GET_ISLOADEDINNAV_OFFSET UNITYSDK_OFFSET(0x143E8DE0)
#define CLASS_1_A1EDFD8801F68886_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x143E8DC0)
#define CLASS_1_A1EDFD8801F68886_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x143E8E20)
#define CLASS_1_A1EDFD8801F68886_GET_ISSURFACE_OFFSET UNITYSDK_OFFSET(0x143E8D10)
#define CLASS_1_A1EDFD8801F68886_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x143E8E00)
#define CLASS_1_A1EDFD8801F68886_GET_LITTLEGAMETAGCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8FA0)
#define CLASS_1_A1EDFD8801F68886_GET_LOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x143E8B10)
#define CLASS_1_A1EDFD8801F68886_GET_MAPFACECONNECTCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8EC0)
#define CLASS_1_A1EDFD8801F68886_GET_PARENTID_OFFSET UNITYSDK_OFFSET(0x143E8D80)
#define CLASS_1_A1EDFD8801F68886_GET_PIPEPORTALCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8F00)
#define CLASS_1_A1EDFD8801F68886_GET_PORTALCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8F20)
#define CLASS_1_A1EDFD8801F68886_GET_SURFACECONFIG_OFFSET UNITYSDK_OFFSET(0x143E8FC0)
#define CLASS_1_A1EDFD8801F68886_GET_SURFACEID_OFFSET UNITYSDK_OFFSET(0x143E8CF0)
#define CLASS_1_A1EDFD8801F68886_GET_SURFACERELATIVETRANSFORM_OFFSET UNITYSDK_OFFSET(0x143E8C50)
#define CLASS_1_A1EDFD8801F68886_GET_WORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x143E8BB0)
#define CLASS_1_A1EDFD8801F68886_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x143E8E40)
#define CLASS_1_A1EDFD8801F68886_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x143E8D30)
#define CLASS_1_A1EDFD8801F68886_SET_ATTACHPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8EF0)
#define CLASS_1_A1EDFD8801F68886_SET_ATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x143E8FF0)
#define CLASS_1_A1EDFD8801F68886_SET_CHILDRENIDS_OFFSET UNITYSDK_OFFSET(0x143E8DB0)
#define CLASS_1_A1EDFD8801F68886_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x143E9010)
#define CLASS_1_A1EDFD8801F68886_SET_CUSTOMLOADCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8F50)
#define CLASS_1_A1EDFD8801F68886_SET_CUSTOMVISIBILITYCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8F70)
#define CLASS_1_A1EDFD8801F68886_SET_ENTITYVARCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8F90)
#define CLASS_1_A1EDFD8801F68886_SET_ICONCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8EB0)
#define CLASS_1_A1EDFD8801F68886_SET_ISLOADEDINNAV_OFFSET UNITYSDK_OFFSET(0x143E8DF0)
#define CLASS_1_A1EDFD8801F68886_SET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x143E8DD0)
#define CLASS_1_A1EDFD8801F68886_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x143E8E30)
#define CLASS_1_A1EDFD8801F68886_SET_ISSURFACE_OFFSET UNITYSDK_OFFSET(0x143E8D20)
#define CLASS_1_A1EDFD8801F68886_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x143E8E10)
#define CLASS_1_A1EDFD8801F68886_SET_LITTLEGAMETAGCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8FB0)
#define CLASS_1_A1EDFD8801F68886_SET_LOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x143E8B60)
#define CLASS_1_A1EDFD8801F68886_SET_MAPFACECONNECTCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8ED0)
#define CLASS_1_A1EDFD8801F68886_SET_PARENTID_OFFSET UNITYSDK_OFFSET(0x143E8D90)
#define CLASS_1_A1EDFD8801F68886_SET_PIPEPORTALCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8F10)
#define CLASS_1_A1EDFD8801F68886_SET_PORTALCONFIG_OFFSET UNITYSDK_OFFSET(0x143E8F30)
#define CLASS_1_A1EDFD8801F68886_SET_SURFACECONFIG_OFFSET UNITYSDK_OFFSET(0x143E8FD0)
#define CLASS_1_A1EDFD8801F68886_SET_SURFACEID_OFFSET UNITYSDK_OFFSET(0x143E8D00)
#define CLASS_1_A1EDFD8801F68886_SET_SURFACERELATIVETRANSFORM_OFFSET UNITYSDK_OFFSET(0x143E8CA0)
#define CLASS_1_A1EDFD8801F68886_SET_WORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x143E8C00)
#define CLASS_1_A1EDFD8801F68886__CTOR_OFFSET UNITYSDK_OFFSET(0x143E9020)

inline static constexpr unsigned int Class_1_A1EDFD8801F68886_TypeDefinitionIndex = 59444;

class Class_1_A1EDFD8801F68886 : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameEntityConfig* _Config_k__BackingField; // 0x10
	::RPG::GameCore::LittleGameNavMapIconConfig* _IconConfig_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_EAC1BB0F093534A5>* _AttachPoints_k__BackingField; // 0x20
	::RPG::GameCore::FiveDimPortalConfig* _PortalConfig_k__BackingField; // 0x28
	::RPG::GameCore::FiveDimEntityVarConfig* _EntityVarConfig_k__BackingField; // 0x30
	::RPG::GameCore::FiveDimPipePortalConfig* _PipePortalConfig_k__BackingField; // 0x38
	::RPG::GameCore::FiveDimSurfaceConfig* _SurfaceConfig_k__BackingField; // 0x40
	::RPG::GameCore::FiveDimCustomVisibilityConfig* _CustomVisibilityConfig_k__BackingField; // 0x48
	::RPG::GameCore::LittleGameTagConfig* _LittleGameTagConfig_k__BackingField; // 0x50
	::RPG::GameCore::FiveDimCustomLoadConfig* _CustomLoadConfig_k__BackingField; // 0x58
	::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig* _MapFaceConnectConfig_k__BackingField; // 0x60
	::RPG::GameCore::LittleGameAttachPointConfig* _AttachPointConfig_k__BackingField; // 0x68
	::System::Collections::Generic::List_1<::System::UInt32>* _ChildrenIDs_k__BackingField; // 0x70
	::Struct_2_EAC1BB0F093534A5 _WorldTransform_k__BackingField; // 0x78
	::System::UInt32 _ParentID_k__BackingField; // 0xE0
	::System::Boolean _IsLocked_k__BackingField; // 0xE4
	::System::Boolean _IsVisible_k__BackingField; // 0xE5
	::Struct_2_EAC1BB0F093534A5 _SurfaceRelativeTransform_k__BackingField; // 0xE8
	::System::UInt32 _SurfaceID_k__BackingField; // 0x150
	::Struct_2_EAC1BB0F093534A5 _LocalTransform_k__BackingField; // 0x154
	::System::Boolean _IsLoadedInNav_k__BackingField; // 0x1BC
	::System::Boolean _IsSurface_k__BackingField; // 0x1BD
	::System::Boolean _IsLoaded_k__BackingField; // 0x1BE

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886__CTOR_OFFSET))(this);
	}

	::Struct_2_EAC1BB0F093534A5 get_LocalTransform()
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_LOCALTRANSFORM_OFFSET))(this);
	}

	::System::Void set_LocalTransform(::Struct_2_EAC1BB0F093534A5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_LOCALTRANSFORM_OFFSET))(this, a1);
	}

	::Struct_2_EAC1BB0F093534A5 get_WorldTransform()
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_WORLDTRANSFORM_OFFSET))(this);
	}

	::System::Void set_WorldTransform(::Struct_2_EAC1BB0F093534A5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_WORLDTRANSFORM_OFFSET))(this, a1);
	}

	::Struct_2_EAC1BB0F093534A5 get_SurfaceRelativeTransform()
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_SURFACERELATIVETRANSFORM_OFFSET))(this);
	}

	::System::Void set_SurfaceRelativeTransform(::Struct_2_EAC1BB0F093534A5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_SURFACERELATIVETRANSFORM_OFFSET))(this, a1);
	}

	::System::UInt32 get_SurfaceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_SURFACEID_OFFSET))(this);
	}

	::System::Void set_SurfaceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_SURFACEID_OFFSET))(this, a1);
	}

	::System::Boolean get_IsSurface()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ISSURFACE_OFFSET))(this);
	}

	::System::Void set_IsSurface(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ISSURFACE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 get_ParentID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_PARENTID_OFFSET))(this);
	}

	::System::Void set_ParentID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_PARENTID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ChildrenIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_CHILDRENIDS_OFFSET))(this);
	}

	::System::Void set_ChildrenIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_CHILDRENIDS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLoaded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ISLOADED_OFFSET))(this);
	}

	::System::Void set_IsLoaded(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ISLOADED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLoadedInNav()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ISLOADEDINNAV_OFFSET))(this);
	}

	::System::Void set_IsLoadedInNav(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ISLOADEDINNAV_OFFSET))(this, a1);
	}

	::System::Boolean get_IsVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ISVISIBLE_OFFSET))(this);
	}

	::System::Void set_IsVisible(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ISVISIBLE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLocked()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ISLOCKED_OFFSET))(this);
	}

	::System::Void set_IsLocked(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ISLOCKED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::GameCore::LittleGameNavMapIconConfig* get_IconConfig()
	{
		return ((::RPG::GameCore::LittleGameNavMapIconConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ICONCONFIG_OFFSET))(this);
	}

	::System::Void set_IconConfig(::RPG::GameCore::LittleGameNavMapIconConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameNavMapIconConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ICONCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig* get_MapFaceConnectConfig()
	{
		return ((::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_MAPFACECONNECTCONFIG_OFFSET))(this);
	}

	::System::Void set_MapFaceConnectConfig(::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_MAPFACECONNECTCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameAttachPointConfig* get_AttachPointConfig()
	{
		return ((::RPG::GameCore::LittleGameAttachPointConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ATTACHPOINTCONFIG_OFFSET))(this);
	}

	::System::Void set_AttachPointConfig(::RPG::GameCore::LittleGameAttachPointConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameAttachPointConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ATTACHPOINTCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimPipePortalConfig* get_PipePortalConfig()
	{
		return ((::RPG::GameCore::FiveDimPipePortalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_PIPEPORTALCONFIG_OFFSET))(this);
	}

	::System::Void set_PipePortalConfig(::RPG::GameCore::FiveDimPipePortalConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPipePortalConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_PIPEPORTALCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimPortalConfig* get_PortalConfig()
	{
		return ((::RPG::GameCore::FiveDimPortalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_PORTALCONFIG_OFFSET))(this);
	}

	::System::Void set_PortalConfig(::RPG::GameCore::FiveDimPortalConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPortalConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_PORTALCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimCustomLoadConfig* get_CustomLoadConfig()
	{
		return ((::RPG::GameCore::FiveDimCustomLoadConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_CUSTOMLOADCONFIG_OFFSET))(this);
	}

	::System::Void set_CustomLoadConfig(::RPG::GameCore::FiveDimCustomLoadConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCustomLoadConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_CUSTOMLOADCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimCustomVisibilityConfig* get_CustomVisibilityConfig()
	{
		return ((::RPG::GameCore::FiveDimCustomVisibilityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_CUSTOMVISIBILITYCONFIG_OFFSET))(this);
	}

	::System::Void set_CustomVisibilityConfig(::RPG::GameCore::FiveDimCustomVisibilityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCustomVisibilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_CUSTOMVISIBILITYCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimEntityVarConfig* get_EntityVarConfig()
	{
		return ((::RPG::GameCore::FiveDimEntityVarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ENTITYVARCONFIG_OFFSET))(this);
	}

	::System::Void set_EntityVarConfig(::RPG::GameCore::FiveDimEntityVarConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimEntityVarConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ENTITYVARCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameTagConfig* get_LittleGameTagConfig()
	{
		return ((::RPG::GameCore::LittleGameTagConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_LITTLEGAMETAGCONFIG_OFFSET))(this);
	}

	::System::Void set_LittleGameTagConfig(::RPG::GameCore::LittleGameTagConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameTagConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_LITTLEGAMETAGCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimSurfaceConfig* get_SurfaceConfig()
	{
		return ((::RPG::GameCore::FiveDimSurfaceConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_SURFACECONFIG_OFFSET))(this);
	}

	::System::Void set_SurfaceConfig(::RPG::GameCore::FiveDimSurfaceConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimSurfaceConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_SURFACECONFIG_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_EAC1BB0F093534A5>* get_AttachPoints()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_EAC1BB0F093534A5>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_ATTACHPOINTS_OFFSET))(this);
	}

	::System::Void set_AttachPoints(::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_EAC1BB0F093534A5>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_EAC1BB0F093534A5>*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_ATTACHPOINTS_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameEntityConfig* get_Config()
	{
		return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A1EDFD8801F68886_SET_CONFIG_OFFSET))(this, a1);
	}
};
