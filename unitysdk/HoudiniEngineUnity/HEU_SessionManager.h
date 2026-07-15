#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_GroupType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_License.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ObjectInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_RSTOrder.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ThriftSharedMemoryBufferType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Transform.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_SessionData; }
namespace HoudiniEngineUnity { class HEU_SessionManager_CreateSessionFromTypeDelegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CHECKANDCLOSEEXISTINGSESSION_OFFSET UNITYSDK_OFFSET(0x198F1F10)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CHECKVERSIONMATCH_OFFSET UNITYSDK_OFFSET(0x198F3CE0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CLEARCONNECTIONERROR_OFFSET UNITYSDK_OFFSET(0x198F3DC0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CLOSEALLSESSIONS_OFFSET UNITYSDK_OFFSET(0x198F33D0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CLOSEDEFAULTSESSION_OFFSET UNITYSDK_OFFSET(0x198F3240)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTSESSIONSYNCUSINGTHRIFTPIPE_OFFSET UNITYSDK_OFFSET(0x198F2C30)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTSESSIONSYNCUSINGTHRIFTSHAREDMEMORY_OFFSET UNITYSDK_OFFSET(0x198F2E90)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTSESSIONSYNCUSINGTHRIFTSOCKET_OFFSET UNITYSDK_OFFSET(0x198F29C0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTTHRIFTPIPESESSION_OFFSET UNITYSDK_OFFSET(0x198F2640)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTTHRIFTSHAREDMEMORYSESSION_OFFSET UNITYSDK_OFFSET(0x198F27A0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTTHRIFTSOCKETSESSION_OFFSET UNITYSDK_OFFSET(0x198F24D0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATECUSTOMSESSION_OFFSET UNITYSDK_OFFSET(0x198F23B0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATEINPROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x198F1DF0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPE_OFFSET UNITYSDK_OFFSET(0x198F0E90)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONOBJECT_OFFSET UNITYSDK_OFFSET(0x198F0E50)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATETHRIFTPIPESESSION_OFFSET UNITYSDK_OFFSET(0x198F1C20)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATETHRIFTSHAREDMEMORYSESSION_OFFSET UNITYSDK_OFFSET(0x198F2220)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATETHRIFTSOCKETSESSION_OFFSET UNITYSDK_OFFSET(0x198F20A0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCOMPOSEDCHILDNODELIST_OFFSET UNITYSDK_OFFSET(0x198F58A0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCOMPOSEDOBJECTLISTMEMORYSAFE_OFFSET UNITYSDK_OFFSET(0x198F5A50)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCOMPOSEDOBJECTTRANSFORMSMEMORYSAFE_OFFSET UNITYSDK_OFFSET(0x198F5C60)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCONNECTIONERROR_OFFSET UNITYSDK_OFFSET(0x198EF9A0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCURRENTLICENSE_OFFSET UNITYSDK_OFFSET(0x198F49A0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETDEFAULTSESSION_OFFSET UNITYSDK_OFFSET(0x198F0ED0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETGROUPMEMBERSHIP_OFFSET UNITYSDK_OFFSET(0x198F53E0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETGROUPNAMES_OFFSET UNITYSDK_OFFSET(0x198F4FA0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETHOUDINIPATHONMACOS_OFFSET UNITYSDK_OFFSET(0x198F4290)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETLASTSESSIONERROR_OFFSET UNITYSDK_OFFSET(0x198F1D80)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETNODEINPUTNAME_OFFSET UNITYSDK_OFFSET(0x198F5760)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETNODENAME_OFFSET UNITYSDK_OFFSET(0x198F5610)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETORCREATEDEFAULTSESSION_OFFSET UNITYSDK_OFFSET(0x198F16E0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSESSIONDATA_OFFSET UNITYSDK_OFFSET(0x198F3810)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSESSIONINFO_OFFSET UNITYSDK_OFFSET(0x198F3880)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSESSIONWITHID_OFFSET UNITYSDK_OFFSET(0x198F1370)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSTRINGVALUESFROMSTRINGINDICES_OFFSET UNITYSDK_OFFSET(0x198F4CB0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x198F4B00)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETUNIQUEMATERIALSHOPNAME_OFFSET UNITYSDK_OFFSET(0x198F5E90)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_INITIALIZEDEFAULTSESSION_OFFSET UNITYSDK_OFFSET(0x198F3110)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_INTERNALVALIDATESCENEASSETS_OFFSET UNITYSDK_OFFSET(0x198F1490)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_ISHARSPROCESSRUNNING_OFFSET UNITYSDK_OFFSET(0x198F3DD0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_LOADALLSESSIONDATA_OFFSET UNITYSDK_OFFSET(0x198EDDD0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_LOADSESSIONFROMHIP_OFFSET UNITYSDK_OFFSET(0x198F3E70)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_LOADSTOREDDEFAULTSESSION_OFFSET UNITYSDK_OFFSET(0x198F0F90)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_OPENHOUDINI_OFFSET UNITYSDK_OFFSET(0x198F42A0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_OPENSESSIONINHOUDINI_OFFSET UNITYSDK_OFFSET(0x198F4400)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_RECREATEDEFAULTSESSIONDATA_OFFSET UNITYSDK_OFFSET(0x198F2920)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_REGISTERSESSION_OFFSET UNITYSDK_OFFSET(0x198F10C0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_RESTARTSESSION_OFFSET UNITYSDK_OFFSET(0x198F3970)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_SAVEALLSESSIONDATA_OFFSET UNITYSDK_OFFSET(0x198F1190)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_SAVESESSIONTOHIP_OFFSET UNITYSDK_OFFSET(0x198F4080)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_UNREGISTERSESSION_OFFSET UNITYSDK_OFFSET(0x198F12E0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_VALIDATEPLUGINSESSION_OFFSET UNITYSDK_OFFSET(0x198F3C00)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x198F62B0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_SessionManager_TypeDefinitionIndex = 38431;

	class HEU_SessionManager : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::HEU_SessionBase** StaticGet__defaultSession()
		{
			return (::HoudiniEngineUnity::HEU_SessionBase**)Il2CppClass::FromTypeDefinitionIndex(HEU_SessionManager_TypeDefinitionIndex)->GetStaticField(0x18920);
		}
		static ::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate** StaticGet__createSessionFromTypeDelegate()
		{
			return (::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate**)Il2CppClass::FromTypeDefinitionIndex(HEU_SessionManager_TypeDefinitionIndex)->GetStaticField(0x18928);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int64, ::HoudiniEngineUnity::HEU_SessionBase*>** StaticGet__sessionMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int64, ::HoudiniEngineUnity::HEU_SessionBase*>**)Il2CppClass::FromTypeDefinitionIndex(HEU_SessionManager_TypeDefinitionIndex)->GetStaticField(0x18930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER__CCTOR_OFFSET))();
		}

		static ::HoudiniEngineUnity::HEU_SessionBase* CreateSessionObject()
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONOBJECT_OFFSET))();
		}

		static ::HoudiniEngineUnity::HEU_SessionBase* CreateSessionFromType(::System::Type* a1)
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::System::Type*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPE_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HEU_SessionBase* GetDefaultSession()
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETDEFAULTSESSION_OFFSET))();
		}

		static ::System::Void RegisterSession(::System::Int64 a1, ::HoudiniEngineUnity::HEU_SessionBase* a2)
		{
			return ((::System::Void(*)(::System::Int64, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_REGISTERSESSION_OFFSET))(a1, a2);
		}

		static ::System::Void UnregisterSession(::System::Int64 a1)
		{
			return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_UNREGISTERSESSION_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HEU_SessionBase* GetSessionWithID(::System::Int64 a1)
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::System::Int64))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSESSIONWITHID_OFFSET))(a1);
		}

		static ::System::Void SaveAllSessionData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_SAVEALLSESSIONDATA_OFFSET))();
		}

		static ::System::Void LoadAllSessionData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_LOADALLSESSIONDATA_OFFSET))();
		}

		static ::System::Void InternalValidateSceneAssets()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_INTERNALVALIDATESCENEASSETS_OFFSET))();
		}

		static ::HoudiniEngineUnity::HEU_SessionBase* GetOrCreateDefaultSession(::System::Boolean a1)
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETORCREATEDEFAULTSESSION_OFFSET))(a1);
		}

		static ::System::Boolean CreateInProcessSession()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATEINPROCESSSESSION_OFFSET))();
		}

		static ::System::Boolean CreateThriftSocketSession(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATETHRIFTSOCKETSESSION_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean CreateThriftPipeSession(::System::String* a1, ::System::Boolean a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATETHRIFTPIPESESSION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CreateThriftSharedMemorySession(::System::String* a1, ::HoudiniEngineUnity::HAPI_ThriftSharedMemoryBufferType a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::System::String*, ::HoudiniEngineUnity::HAPI_ThriftSharedMemoryBufferType, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATETHRIFTSHAREDMEMORYSESSION_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean CreateCustomSession()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATECUSTOMSESSION_OFFSET))();
		}

		static ::System::Boolean ConnectThriftSocketSession(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTTHRIFTSOCKETSESSION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ConnectThriftPipeSession(::System::String* a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTTHRIFTPIPESESSION_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ConnectThriftSharedMemorySession(::System::String* a1, ::HoudiniEngineUnity::HAPI_ThriftSharedMemoryBufferType a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::HoudiniEngineUnity::HAPI_ThriftSharedMemoryBufferType, ::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTTHRIFTSHAREDMEMORYSESSION_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void RecreateDefaultSessionData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_RECREATEDEFAULTSESSIONDATA_OFFSET))();
		}

		static ::System::Boolean ConnectSessionSyncUsingThriftSocket(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTSESSIONSYNCUSINGTHRIFTSOCKET_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean ConnectSessionSyncUsingThriftPipe(::System::String* a1, ::System::Boolean a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTSESSIONSYNCUSINGTHRIFTPIPE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ConnectSessionSyncUsingThriftSharedMemory(::System::String* a1, ::HoudiniEngineUnity::HAPI_ThriftSharedMemoryBufferType a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::System::String*, ::HoudiniEngineUnity::HAPI_ThriftSharedMemoryBufferType, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTSESSIONSYNCUSINGTHRIFTSHAREDMEMORY_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean InitializeDefaultSession()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_INITIALIZEDEFAULTSESSION_OFFSET))();
		}

		static ::System::Boolean CloseDefaultSession()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CLOSEDEFAULTSESSION_OFFSET))();
		}

		static ::System::Void CloseAllSessions()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CLOSEALLSESSIONS_OFFSET))();
		}

		static ::System::Void CheckAndCloseExistingSession()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CHECKANDCLOSEEXISTINGSESSION_OFFSET))();
		}

		static ::HoudiniEngineUnity::HEU_SessionData* GetSessionData()
		{
			return ((::HoudiniEngineUnity::HEU_SessionData*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSESSIONDATA_OFFSET))();
		}

		static ::System::String* GetSessionInfo()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSESSIONINFO_OFFSET))();
		}

		static ::System::Boolean LoadStoredDefaultSession()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_LOADSTOREDDEFAULTSESSION_OFFSET))();
		}

		static ::System::Boolean RestartSession()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_RESTARTSESSION_OFFSET))();
		}

		static ::System::Boolean ValidatePluginSession(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_VALIDATEPLUGINSESSION_OFFSET))(a1);
		}

		static ::System::String* GetLastSessionError()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETLASTSESSIONERROR_OFFSET))();
		}

		static ::System::Boolean CheckVersionMatch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CHECKVERSIONMATCH_OFFSET))();
		}

		static ::System::Boolean ClearConnectionError()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CLEARCONNECTIONERROR_OFFSET))();
		}

		static ::System::String* GetConnectionError(::System::Boolean a1)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCONNECTIONERROR_OFFSET))(a1);
		}

		static ::System::Boolean IsHARSProcessRunning(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_ISHARSPROCESSRUNNING_OFFSET))(a1);
		}

		static ::System::Boolean LoadSessionFromHIP(::System::Boolean a1, ::HoudiniEngineUnity::HEU_SessionBase* a2)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_LOADSESSIONFROMHIP_OFFSET))(a1, a2);
		}

		static ::System::Boolean SaveSessionToHIP(::System::Boolean a1, ::HoudiniEngineUnity::HEU_SessionBase* a2)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_SAVESESSIONTOHIP_OFFSET))(a1, a2);
		}

		static ::System::String* GetHoudiniPathOnMacOS(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETHOUDINIPATHONMACOS_OFFSET))(a1);
		}

		static ::System::Boolean OpenHoudini(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_OPENHOUDINI_OFFSET))(a1);
		}

		static ::System::Boolean OpenSessionInHoudini(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_OPENSESSIONINHOUDINI_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HAPI_License GetCurrentLicense(::System::Boolean a1)
		{
			return ((::HoudiniEngineUnity::HAPI_License(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCURRENTLICENSE_OFFSET))(a1);
		}

		static ::System::String* GetString(::System::Int32 a1, ::HoudiniEngineUnity::HEU_SessionBase* a2)
		{
			return ((::System::String*(*)(::System::Int32, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSTRING_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::String*>* GetStringValuesFromStringIndices(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSTRINGVALUESFROMSTRINGINDICES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* GetGroupNames(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::HAPI_GroupType a4, ::System::Boolean a5)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HAPI_GroupType, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETGROUPNAMES_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean GetGroupMembership(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::HAPI_GroupType a4, ::System::String* a5, ::Il2CppArray<::System::Int32>*& a6, ::System::Boolean a7)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HAPI_GroupType, ::System::String*, ::Il2CppArray<::System::Int32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETGROUPMEMBERSHIP_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::String* GetNodeName(::System::Int32 a1, ::HoudiniEngineUnity::HEU_SessionBase* a2)
		{
			return ((::System::String*(*)(::System::Int32, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETNODENAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetNodeInputName(::System::Int32 a1, ::System::Int32 a2, ::System::String*& a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETNODEINPUTNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetComposedChildNodeList(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::Il2CppArray<::System::Int32>*& a6, ::System::Boolean a7)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::Il2CppArray<::System::Int32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCOMPOSEDCHILDNODELIST_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean GetComposedObjectListMemorySafe(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ObjectInfo>* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ObjectInfo>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCOMPOSEDOBJECTLISTMEMORYSAFE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean GetComposedObjectTransformsMemorySafe(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HAPI_RSTOrder a3, ::Il2CppArray<::HoudiniEngineUnity::HAPI_Transform>* a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_RSTOrder, ::Il2CppArray<::HoudiniEngineUnity::HAPI_Transform>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCOMPOSEDOBJECTTRANSFORMSMEMORYSAFE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::String* GetUniqueMaterialShopName(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETUNIQUEMATERIALSHOPNAME_OFFSET))(a1, a2);
		}
	};
}
