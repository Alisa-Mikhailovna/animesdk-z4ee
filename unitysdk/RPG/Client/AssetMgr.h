#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"

class Class_0_16E4307DCC419505_81;
class Class_0_16E4307DCC419505_82;
class Class_1_9BC47B32610945F6;
class Class_1_A81EE615F7FF4710;
class Class_1_B7E288ED7136445D;
class Class_1_E998DEAD1943B5C5;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_ASSETMGR_ASYNCINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A3B8AD0)
#define RPG_CLIENT_ASSETMGR_ASYNCLOADASSET_OFFSET UNITYSDK_OFFSET(0x1A3B87B0)
#define RPG_CLIENT_ASSETMGR_ASYNCLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1A3B9680)
#define RPG_CLIENT_ASSETMGR_CHECKTHREADID_OFFSET UNITYSDK_OFFSET(0x1A3B77B0)
#define RPG_CLIENT_ASSETMGR_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1A3B8610)
#define RPG_CLIENT_ASSETMGR_CLEARPATHCACHE_OFFSET UNITYSDK_OFFSET(0x1A3B7DD0)
#define RPG_CLIENT_ASSETMGR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A3B7CA0)
#define RPG_CLIENT_ASSETMGR_EXISTS_OFFSET UNITYSDK_OFFSET(0x1A3B8750)
#define RPG_CLIENT_ASSETMGR_FORCEALLASYNCLOADIMMEDIATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1A3B9410)
#define RPG_CLIENT_ASSETMGR_GETASSETDEEPSIZE_OFFSET UNITYSDK_OFFSET(0x1A3B9D10)
#define RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_1_OFFSET UNITYSDK_OFFSET(0x1A3B9E50)
#define RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_2_OFFSET UNITYSDK_OFFSET(0x1A3B9ED0)
#define RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1A3B9DD0)
#define RPG_CLIENT_ASSETMGR_GETASSETLOADINGINFO_OFFSET UNITYSDK_OFFSET(0x1A3B9F50)
#define RPG_CLIENT_ASSETMGR_GETASSETOBJECTLOADSTATISTICALSUMMARYV1_OFFSET UNITYSDK_OFFSET(0x1A3BA110)
#define RPG_CLIENT_ASSETMGR_GETASSETSIZE_OFFSET UNITYSDK_OFFSET(0x1A3B9D70)
#define RPG_CLIENT_ASSETMGR_GETBUNDLEINDEXINFO_OFFSET UNITYSDK_OFFSET(0x1A3B9CB0)
#define RPG_CLIENT_ASSETMGR_GETLOADASSET_OFFSET UNITYSDK_OFFSET(0x1A3B8FD0)
#define RPG_CLIENT_ASSETMGR_GET_ASSETREFREADY_OFFSET UNITYSDK_OFFSET(0x1A3B7630)
#define RPG_CLIENT_ASSETMGR_GET_BUNDLEINDEXINFO_OFFSET UNITYSDK_OFFSET(0x1A3B7720)
#define RPG_CLIENT_ASSETMGR_GET_CUSTOMUPDATEPRELOADTIMEMS_OFFSET UNITYSDK_OFFSET(0x1A3B7570)
#define RPG_CLIENT_ASSETMGR_GET_ENABLEASSETLIFECYCLE_OFFSET UNITYSDK_OFFSET(0x1A3B7420)
#define RPG_CLIENT_ASSETMGR_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A3B76B0)
#define RPG_CLIENT_ASSETMGR_GET_ISMIDPACK_OFFSET UNITYSDK_OFFSET(0x1A3B7690)
#define RPG_CLIENT_ASSETMGR_GET_ISRUNTIMEMODE_OFFSET UNITYSDK_OFFSET(0x1A3B7510)
#define RPG_CLIENT_ASSETMGR_GET_LOADERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A3B75D0)
#define RPG_CLIENT_ASSETMGR_GET_PAUSEUNLOAD_OFFSET UNITYSDK_OFFSET(0x1A3B7F10)
#define RPG_CLIENT_ASSETMGR_GET_PROCESSOR_OFFSET UNITYSDK_OFFSET(0x1A39AAF0)
#define RPG_CLIENT_ASSETMGR_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1A38E930)
#define RPG_CLIENT_ASSETMGR_HASREQUESTINPRELOADQUEUE_OFFSET UNITYSDK_OFFSET(0x1A3B9C50)
#define RPG_CLIENT_ASSETMGR_INITASSETLOADERPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A3B7BF0)
#define RPG_CLIENT_ASSETMGR_INIT_OFFSET UNITYSDK_OFFSET(0x1A3B79B0)
#define RPG_CLIENT_ASSETMGR_ISUNLOADFINISH_OFFSET UNITYSDK_OFFSET(0x1A3B7E60)
#define RPG_CLIENT_ASSETMGR_ONENDLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1A3B9A80)
#define RPG_CLIENT_ASSETMGR_ONSTARTLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1A3B9860)
#define RPG_CLIENT_ASSETMGR_RELEASEBYASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x1A3B8BA0)
#define RPG_CLIENT_ASSETMGR_RELEASEBYASSETPROXY_OFFSET UNITYSDK_OFFSET(0x1A3B8C80)
#define RPG_CLIENT_ASSETMGR_RELOADASSETREFMANIFEST_OFFSET UNITYSDK_OFFSET(0x1A3B85A0)
#define RPG_CLIENT_ASSETMGR_RELOADSERVERINDEXINFO_OFFSET UNITYSDK_OFFSET(0x1A3B84C0)
#define RPG_CLIENT_ASSETMGR_SETENABLECHECKIFHASREQUESTINPRELOADQUEUE_OFFSET UNITYSDK_OFFSET(0x1A3B9A30)
#define RPG_CLIENT_ASSETMGR_SETENABLELIMITFRAMEUNLOAD_OFFSET UNITYSDK_OFFSET(0x1A3B9460)
#define RPG_CLIENT_ASSETMGR_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A3B76E0)
#define RPG_CLIENT_ASSETMGR_SET_ISMIDPACK_OFFSET UNITYSDK_OFFSET(0x1A3B76A0)
#define RPG_CLIENT_ASSETMGR_SET_PAUSEUNLOAD_OFFSET UNITYSDK_OFFSET(0x1A3B7F20)
#define RPG_CLIENT_ASSETMGR_SYNCLOADASSET_OFFSET UNITYSDK_OFFSET(0x1A3B8960)
#define RPG_CLIENT_ASSETMGR_SYNCLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1A3B94B0)
#define RPG_CLIENT_ASSETMGR_TICK_OFFSET UNITYSDK_OFFSET(0x1A3B7F30)
#define RPG_CLIENT_ASSETMGR_UNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1A3B8D10)
#define RPG_CLIENT_ASSETMGR_UNLOADUNUSEDASSETS_OFFSET UNITYSDK_OFFSET(0x1A3B9360)
#define RPG_CLIENT_ASSETMGR_UNLOADWILLUNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1A3B86D0)
#define RPG_CLIENT_ASSETMGR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3BA160)
#define RPG_CLIENT_ASSETMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3B7890)

namespace RPG::Client
{
	inline static constexpr unsigned int AssetMgr_TypeDefinitionIndex = 39211;

	class AssetMgr : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_ColliderTest()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0xD830);
		}
		static ::RPG::Client::AssetMgr** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::AssetMgr**)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0xD840);
		}
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_EnableForceUnloadAssetProperty()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0xD848);
		}
		static ::System::Single* StaticGet_AssetLifecycleCheckSeconds()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x4C80);
		}
		static ::System::Boolean* StaticGet_AssetTestEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x4C84);
		}
		static ::System::Boolean* StaticGet_IsInDestroy()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x4C85);
		}
		static ::System::Int32* StaticGet_msMainThreadId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x4C88);
		}
		::Class_1_9BC47B32610945F6* _Processor; // 0x10
		::Class_1_E998DEAD1943B5C5* _Control; // 0x18
		::Class_0_16E4307DCC419505_81* _Provider; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* AssetLongPackageNameDic; // 0x28
		::System::Boolean _EnableCheckIfHasRequestInPreloadQueue; // 0x30
		::System::Boolean ForceUnloadAllThisFrame; // 0x31
		::System::Boolean _isMidPack; // 0x32
		::System::Int32 MaxAllowAsyncLoadBundleCount; // 0x34
		::System::Boolean _PauseUnload_k__BackingField; // 0x38
		::System::Boolean EnableLimitFrameUnload; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_EnableAssetLifecycle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_ENABLEASSETLIFECYCLE_OFFSET))();
		}

		::System::Int32 get_CustomUpdatePreloadTimeMs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_CUSTOMUPDATEPRELOADTIMEMS_OFFSET))(this);
		}

		::System::Int32 get_LoaderCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_LOADERCOUNT_OFFSET))(this);
		}

		::System::Boolean get_AssetRefReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_ASSETREFREADY_OFFSET))(this);
		}

		::System::Boolean get_IsMidPack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_ISMIDPACK_OFFSET))(this);
		}

		::System::Void set_IsMidPack(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SET_ISMIDPACK_OFFSET))(this, a1);
		}

		static ::RPG::Client::AssetMgr* get_Instance()
		{
			return ((::RPG::Client::AssetMgr*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::AssetMgr* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AssetMgr*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SET_INSTANCE_OFFSET))(a1);
		}

		static ::Class_0_16E4307DCC419505_81* get_Provider()
		{
			return ((::Class_0_16E4307DCC419505_81*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_PROVIDER_OFFSET))();
		}

		::System::Boolean get_IsRuntimeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_ISRUNTIMEMODE_OFFSET))(this);
		}

		static ::Class_1_9BC47B32610945F6* get_Processor()
		{
			return ((::Class_1_9BC47B32610945F6*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_PROCESSOR_OFFSET))();
		}

		static ::Class_0_16E4307DCC419505_82* get_BundleIndexInfo()
		{
			return ((::Class_0_16E4307DCC419505_82*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_BUNDLEINDEXINFO_OFFSET))();
		}

		static ::System::Void CheckThreadId()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_CHECKTHREADID_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearPathCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_CLEARPATHCACHE_OFFSET))(this);
		}

		::System::Boolean IsUnloadFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_ISUNLOADFINISH_OFFSET))(this);
		}

		::System::Boolean get_PauseUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_PAUSEUNLOAD_OFFSET))(this);
		}

		::System::Void set_PauseUnload(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SET_PAUSEUNLOAD_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_TICK_OFFSET))(this, a1, a2);
		}

		::System::Void InitAssetLoaderProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_INITASSETLOADERPROVIDER_OFFSET))(this);
		}

		::System::Void ReloadServerIndexInfo(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_RELOADSERVERINDEXINFO_OFFSET))(this, a1, a2);
		}

		::System::Void ReloadAssetRefManifest(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_RELOADASSETREFMANIFEST_OFFSET))(this, a1, a2);
		}

		::System::Void ClearCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_CLEARCACHE_OFFSET))(this);
		}

		::System::Void UnloadWillUnloadBundle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_UNLOADWILLUNLOADBUNDLE_OFFSET))(this, a1);
		}

		::System::Boolean Exists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_EXISTS_OFFSET))(this, a1);
		}

		::RPG::Client::IAssetOperation* AsyncLoadAsset(::System::String* a1, ::System::Type* a2, ::System::Object* a3, ::RPG::Client::OnAssetOperationDelegate* a4, ::System::Int32 a5)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_ASYNCLOADASSET_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::IAssetOperation* SyncLoadAsset(::System::String* a1, ::System::Type* a2)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SYNCLOADASSET_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IAssetOperation* AsyncInstance(::UnityEngine::Object* a1, ::System::Object* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::UnityEngine::Object*, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_ASYNCINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ReleaseByAssetObject(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_RELEASEBYASSETOBJECT_OFFSET))(this, a1);
		}

		::System::Boolean ReleaseByAssetProxy(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_RELEASEBYASSETPROXY_OFFSET))(this, a1);
		}

		::System::Void UnloadBundle(::System::String* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_UNLOADBUNDLE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IAssetOperation* GetLoadAsset(::System::String* a1, ::System::Type* a2)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETLOADASSET_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AsyncOperation* UnloadUnusedAssets()
		{
			return ((::UnityEngine::AsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_UNLOADUNUSEDASSETS_OFFSET))(this);
		}

		::System::Void ForceAllAsyncLoadImmediateComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_FORCEALLASYNCLOADIMMEDIATECOMPLETE_OFFSET))(this);
		}

		::System::Void SetEnableLimitFrameUnload(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SETENABLELIMITFRAMEUNLOAD_OFFSET))(this, a1);
		}

		::RPG::Client::IAssetOperation* SyncLoadScene(::System::String* a1)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SYNCLOADSCENE_OFFSET))(this, a1);
		}

		::RPG::Client::IAssetOperation* AsyncLoadScene(::System::String* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_ASYNCLOADSCENE_OFFSET))(this, a1, a2);
		}

		::System::Void OnStartLoadScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_ONSTARTLOADSCENE_OFFSET))(this);
		}

		::System::Void OnEndLoadScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_ONENDLOADSCENE_OFFSET))(this);
		}

		::System::Boolean HasRequestInPreloadQueue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_HASREQUESTINPRELOADQUEUE_OFFSET))(this);
		}

		::System::Void SetEnableCheckIfHasRequestInPreloadQueue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SETENABLECHECKIFHASREQUESTINPRELOADQUEUE_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_82* GetBundleIndexInfo()
		{
			return ((::Class_0_16E4307DCC419505_82*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETBUNDLEINDEXINFO_OFFSET))(this);
		}

		::System::UInt64 GetAssetDeepSize(::System::String* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETDEEPSIZE_OFFSET))(this, a1);
		}

		::System::UInt32 GetAssetSize(::System::UInt64 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETSIZE_OFFSET))(this, a1);
		}

		::System::Boolean GetAssetDependencies(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType>>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetAssetDependencies_1(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt64, ::System::UInt32>>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt64, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetAssetDependencies_2(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::UInt64>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_2_OFFSET))(this, a1, a2);
		}

		::Class_1_B7E288ED7136445D* GetAssetLoadingInfo(::System::String* a1)
		{
			return ((::Class_1_B7E288ED7136445D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETLOADINGINFO_OFFSET))(this, a1);
		}

		::Class_1_A81EE615F7FF4710* GetAssetObjectLoadStatisticalSummaryV1()
		{
			return ((::Class_1_A81EE615F7FF4710*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETOBJECTLOADSTATISTICALSUMMARYV1_OFFSET))(this);
		}
	};
}
