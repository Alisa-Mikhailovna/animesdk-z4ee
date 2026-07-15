#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/RPG/Client/MonoPhotoGraphAimInfo_KeyPointType.h"
#include "unitysdk/RPG/Client/PhotoGraphCheckCanIdleShowResult.h"
#include "unitysdk/RPG/Client/PhotoGraphUtils_StorageFormatType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFuncBtnType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphModeType.h"
#include "unitysdk/Struct_2_648594091F1A68D6.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_854A2C7905ADF31B;
class Class_1_EDE9079B7B0FAB9F;
namespace RPG::Client { class FrameCaptureManager; }
namespace RPG::Client { class PhotoGraphFilterImage; }
namespace RPG::Client { class PhotoGraphResultConditionPack; }
namespace RPG::Client { class PhotoGraphUtils_CachedImageSaveData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_PHOTOGRAPHUTILS_ASYNCADDIMAGEWATERMARK_OFFSET UNITYSDK_OFFSET(0xCF96CE0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ASYNCADDTEXTWATERMARK_OFFSET UNITYSDK_OFFSET(0xCF96FA0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CALCPHOTOGRAPHAIMUNITDISTANCE_OFFSET UNITYSDK_OFFSET(0xCF901F0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CANLOCKTRIPOD_OFFSET UNITYSDK_OFFSET(0xCF92D90)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CHECKAIMENTITYVISIBLEBYAIMINFO_OFFSET UNITYSDK_OFFSET(0xCF8F170)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CHECKGIANTOBJECTRATIOINRECT_OFFSET UNITYSDK_OFFSET(0xCF95CA0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CHECKPHOTOGRAPHAIMUNITINRANGE_OFFSET UNITYSDK_OFFSET(0xCF90050)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CHECKPHOTOGRAPHAIMUNITVISIBLE_OFFSET UNITYSDK_OFFSET(0xCF8FCD0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CLEARIMAGESAVEBYTESBUFFER_OFFSET UNITYSDK_OFFSET(0xCF9AED0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CREATETRIPODMODEPLAYERCOLLIDER_1_OFFSET UNITYSDK_OFFSET(0xCF93870)
#define RPG_CLIENT_PHOTOGRAPHUTILS_CREATETRIPODMODEPLAYERCOLLIDER_OFFSET UNITYSDK_OFFSET(0xCF92F90)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ENABLEIDLESHOW_OFFSET UNITYSDK_OFFSET(0xCF8C0D0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ENABLEIKONFREESTYLE_OFFSET UNITYSDK_OFFSET(0xCF8BE00)
#define RPG_CLIENT_PHOTOGRAPHUTILS_EXITFREESTYLE_OFFSET UNITYSDK_OFFSET(0xCF8BEA0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_EXITIDLESHOW_OFFSET UNITYSDK_OFFSET(0xCF8BF70)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GENERATECIRCULARWALLMESHWITHBOXCOLLIDER_OFFSET UNITYSDK_OFFSET(0xCF93AA0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GENERATECIRCULARWALLMESH_OFFSET UNITYSDK_OFFSET(0xCF93FC0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GENERATESCREENCAPTURECOROUTINE_OFFSET UNITYSDK_OFFSET(0xCF99940)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETAIMUNITREALAIMPOS_OFFSET UNITYSDK_OFFSET(0xCF8F0A0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETBILLBOARDSHOWTYPE_OFFSET UNITYSDK_OFFSET(0xCF98E90)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETBLURREDCURFRAMETEXTUREWITHPROMISE_OFFSET UNITYSDK_OFFSET(0xCF8A930)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETBOXCOLLIDERAIMPOS_OFFSET UNITYSDK_OFFSET(0xCF8D430)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETBYTESBYSCREENCAPTURE_OFFSET UNITYSDK_OFFSET(0xCF999D0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCAPSULECOLLIDERAIMPOS_OFFSET UNITYSDK_OFFSET(0xCF8D6A0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCOLLIDERAIMPOS_1_OFFSET UNITYSDK_OFFSET(0xCF8EE40)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCOLLIDERAIMPOS_OFFSET UNITYSDK_OFFSET(0xCF8D1F0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCOLLIDERCENTERLOCALPOS_OFFSET UNITYSDK_OFFSET(0xCF8EF70)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCURFRAMETEXTUREWITHPROMISE_OFFSET UNITYSDK_OFFSET(0xCF8A7A0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCURFRAMETEXTURE_OFFSET UNITYSDK_OFFSET(0xCF8A5A0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCURPHOTOGRAPHMODE_OFFSET UNITYSDK_OFFSET(0xCF8AD50)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCURRENTPHOTOCONDITIONPACK_OFFSET UNITYSDK_OFFSET(0xCF99530)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETCURRENTPHOTOOVERRIDEFOVRANGE_OFFSET UNITYSDK_OFFSET(0xCF98F70)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETEMOTIONAVATARID_OFFSET UNITYSDK_OFFSET(0xCF8B1B0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETENABLESHOTNONETARGET_OFFSET UNITYSDK_OFFSET(0xCF99090)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETTARGETINTERSECTRECT_OFFSET UNITYSDK_OFFSET(0xCF8D900)
#define RPG_CLIENT_PHOTOGRAPHUTILS_GETTARGETRATIOINRECT_OFFSET UNITYSDK_OFFSET(0xCF8E400)
#define RPG_CLIENT_PHOTOGRAPHUTILS_INITPHOTOGRAPHSETTINGS_OFFSET UNITYSDK_OFFSET(0xCF8AE70)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISALLOWIDLESHOW_OFFSET UNITYSDK_OFFSET(0xCF8C390)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISBOXCOLLIDER_OFFSET UNITYSDK_OFFSET(0xCF8D0F0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISCAPSULECOLLIDER_OFFSET UNITYSDK_OFFSET(0xCF8D170)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISIDENTIFYMODE_OFFSET UNITYSDK_OFFSET(0xCF8B050)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISINIDLESHOW_OFFSET UNITYSDK_OFFSET(0xCF8C1D0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISINIDLESTATE_OFFSET UNITYSDK_OFFSET(0xCF8C150)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISINTRIPOD_OFFSET UNITYSDK_OFFSET(0xCF92F10)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISPOINTINRECT_OFFSET UNITYSDK_OFFSET(0xCF8E250)
#define RPG_CLIENT_PHOTOGRAPHUTILS_ISTURNINPLACE_OFFSET UNITYSDK_OFFSET(0xCF8D080)
#define RPG_CLIENT_PHOTOGRAPHUTILS_LOCKROAMINGINPUT_OFFSET UNITYSDK_OFFSET(0xCF8AC00)
#define RPG_CLIENT_PHOTOGRAPHUTILS_LOCKROAMINGPOSUPDATE_OFFSET UNITYSDK_OFFSET(0xCF824D0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REGISTERIDLESHOWENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCF8C640)
#define RPG_CLIENT_PHOTOGRAPHUTILS_RELEASEBLURREDFRAMETEXTURE_OFFSET UNITYSDK_OFFSET(0xCF8AB50)
#define RPG_CLIENT_PHOTOGRAPHUTILS_RELEASECAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0xCF8AB90)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REPORTBEGIN_PHOTOEXHIBITION_OFFSET UNITYSDK_OFFSET(0xCF92B90)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REPORTBEGIN_PHOTOUPDATETWOPOINTFOUR_OFFSET UNITYSDK_OFFSET(0xCF91880)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REPORTBEGIN_TRACKPHOTO_OFFSET UNITYSDK_OFFSET(0xCF92250)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REPORTEND_PHOTOEXHIBITION_OFFSET UNITYSDK_OFFSET(0xCF92C80)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REPORTEND_PHOTOUPDATETWOPOINTFOUR_OFFSET UNITYSDK_OFFSET(0xCF91BE0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REPORTEND_TRACKPHOTO_OFFSET UNITYSDK_OFFSET(0xCF92940)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REPORTPHOTOGRAPHEND_OFFSET UNITYSDK_OFFSET(0xCF915E0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_REPORTPHOTOGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xCF91420)
#define RPG_CLIENT_PHOTOGRAPHUTILS_RESETEMOTION_OFFSET UNITYSDK_OFFSET(0xCF8B670)
#define RPG_CLIENT_PHOTOGRAPHUTILS_RESETFACEEXPRESSION_OFFSET UNITYSDK_OFFSET(0xCF8BB50)
#define RPG_CLIENT_PHOTOGRAPHUTILS_RESETIKFLAGS_OFFSET UNITYSDK_OFFSET(0xCF8CB70)
#define RPG_CLIENT_PHOTOGRAPHUTILS_RESETTRIPOD_OFFSET UNITYSDK_OFFSET(0xCF92E90)
#define RPG_CLIENT_PHOTOGRAPHUTILS_RESUMEFACEEXPRESSION_OFFSET UNITYSDK_OFFSET(0xCF8B820)
#define RPG_CLIENT_PHOTOGRAPHUTILS_SAVESCREENCAPTURE_OFFSET UNITYSDK_OFFSET(0xCF99680)
#define RPG_CLIENT_PHOTOGRAPHUTILS_SETCAMERAROTATEENABLE_OFFSET UNITYSDK_OFFSET(0xCF94BC0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_SETCAMERAZOOMENABLE_OFFSET UNITYSDK_OFFSET(0xCF94890)
#define RPG_CLIENT_PHOTOGRAPHUTILS_SETEMOTION_OFFSET UNITYSDK_OFFSET(0xCF8B410)
#define RPG_CLIENT_PHOTOGRAPHUTILS_SETFREESTYLE_OFFSET UNITYSDK_OFFSET(0xCF8BCE0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_SETPHOTOSHOTRESULTFOVLEVEL_OFFSET UNITYSDK_OFFSET(0xCF995D0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_STEERANGLE_OFFSET UNITYSDK_OFFSET(0xCF8CC10)
#define RPG_CLIENT_PHOTOGRAPHUTILS_SWITCHPHOTOGRAPHDRAGMODE_OFFSET UNITYSDK_OFFSET(0xCF99170)
#define RPG_CLIENT_PHOTOGRAPHUTILS_TRIGGERIDLESHOW_OFFSET UNITYSDK_OFFSET(0xCF8C770)
#define RPG_CLIENT_PHOTOGRAPHUTILS_TRYLOCKTRIPOD_OFFSET UNITYSDK_OFFSET(0xCF92E10)
#define RPG_CLIENT_PHOTOGRAPHUTILS_UNLOADCUSTOMFULLEMOTION_OFFSET UNITYSDK_OFFSET(0xCF8BC70)
#define RPG_CLIENT_PHOTOGRAPHUTILS_UNLOCKROAMINGINPUT_OFFSET UNITYSDK_OFFSET(0xCF81560)
#define RPG_CLIENT_PHOTOGRAPHUTILS_UNLOCKROAMINGPOSUPDATE_OFFSET UNITYSDK_OFFSET(0xCF828A0)
#define RPG_CLIENT_PHOTOGRAPHUTILS_UPDATEALLOWIDLESHOW_OFFSET UNITYSDK_OFFSET(0xCF8C260)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xCF9B0A0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKAIMGIANTTARGETUNITVISIBLE_OFFSET UNITYSDK_OFFSET(0xCF8FDE0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKAIMINFOUNITVISIBLE_OFFSET UNITYSDK_OFFSET(0xCF8FE90)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKAIMPOINTUNITVISIBLE_OFFSET UNITYSDK_OFFSET(0xCF8FF50)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKAIMTARGETINLIMITCAMERADIR_OFFSET UNITYSDK_OFFSET(0xCF902B0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKCOLLIDERSAME_OFFSET UNITYSDK_OFFSET(0xCF91020)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKGIANTOBJECTVISIBLE_OFFSET UNITYSDK_OFFSET(0xCF906A0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKISBLOCKLAYER_OFFSET UNITYSDK_OFFSET(0xCF913A0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKISDETECTLAYER_OFFSET UNITYSDK_OFFSET(0xCF91330)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKOCCLUSIONCAMERATOTARGET_OFFSET UNITYSDK_OFFSET(0xCF8F3B0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKSINGLEPOSARRAYALLWITHOUTRAYCAST_OFFSET UNITYSDK_OFFSET(0xCF96670)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CHECKSINGLEPOSARRAY_OFFSET UNITYSDK_OFFSET(0xCF95370)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CLEARCACHEDIMAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0xCF9AD50)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CONVERTDATABYFORMATTYPE_OFFSET UNITYSDK_OFFSET(0xCF9A450)
#define RPG_CLIENT_PHOTOGRAPHUTILS__CREATETRIPODWALL_OFFSET UNITYSDK_OFFSET(0xCF936B0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__DRAWALLGIANTOBJECTDETECTPOS_OFFSET UNITYSDK_OFFSET(0xCF95680)
#define RPG_CLIENT_PHOTOGRAPHUTILS__DRAWGIANTOBJECTDETECTPOS_OFFSET UNITYSDK_OFFSET(0xCF96C60)
#define RPG_CLIENT_PHOTOGRAPHUTILS__DRAWIMAGE_OFFSET UNITYSDK_OFFSET(0xCF97260)
#define RPG_CLIENT_PHOTOGRAPHUTILS__DRAWTEXT_OFFSET UNITYSDK_OFFSET(0xCF97FD0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GENCHECKPOSARRAY_OFFSET UNITYSDK_OFFSET(0xCF94C50)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GENTARGETINFOLISTEXTRADATA_OFFSET UNITYSDK_OFFSET(0xCF91D70)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GETBYTESBUFFER_OFFSET UNITYSDK_OFFSET(0xCF9AF90)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GETCAMERAPOSITIONNATIVESTRING_OFFSET UNITYSDK_OFFSET(0xCF92420)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GETFRAMECAPTUREMANAGER_OFFSET UNITYSDK_OFFSET(0xCF8B0A0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GETLOCALPOSINRECT_OFFSET UNITYSDK_OFFSET(0xCF8EB70)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GETOWNERGROUPID_OFFSET UNITYSDK_OFFSET(0xCF91A80)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GETPHOTOUPDATEREPORTGAMEKEY_OFFSET UNITYSDK_OFFSET(0xCF919F0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__GIANTOBJECTDETECTRAYCASTPASS_OFFSET UNITYSDK_OFFSET(0xCF968F0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__ONREQUESTPERMISSION_OFFSET UNITYSDK_OFFSET(0xCF9A9B0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__RESETFACEEMOTION_OFFSET UNITYSDK_OFFSET(0xCF8B770)
#define RPG_CLIENT_PHOTOGRAPHUTILS__SAVESCREENCAPTURE_OFFSET UNITYSDK_OFFSET(0xCF99BB0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__SAVETOGALLERY_OFFSET UNITYSDK_OFFSET(0xCF99F00)
#define RPG_CLIENT_PHOTOGRAPHUTILS__SAVETOLOCAL_OFFSET UNITYSDK_OFFSET(0xCF9A240)
#define RPG_CLIENT_PHOTOGRAPHUTILS__SETFACEEMOTION_OFFSET UNITYSDK_OFFSET(0xCF8B5B0)
#define RPG_CLIENT_PHOTOGRAPHUTILS__SETFACEEXPRESSION_OFFSET UNITYSDK_OFFSET(0xCF8BA30)
#define RPG_CLIENT_PHOTOGRAPHUTILS__SETPLAYERACTIONENABLE_OFFSET UNITYSDK_OFFSET(0xCF94A90)
#define RPG_CLIENT_PHOTOGRAPHUTILS__TRYCACHESAVEDATAANDREQUESTPERMISSION_OFFSET UNITYSDK_OFFSET(0xCF9A6B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils_TypeDefinitionIndex = 66332;

	class PhotoGraphUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__WorldCornerCache()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x293F0);
		}
		static ::System::String** StaticGet__GameKey_PhotoExhibition()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x293F8);
		}
		static ::RPG::Client::PhotoGraphUtils_CachedImageSaveData** StaticGet__CachedImageSaveData()
		{
			return (::RPG::Client::PhotoGraphUtils_CachedImageSaveData**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x29400);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PhotoGraphFuncBtnType, ::System::String*>** StaticGet_PhotoGraphFunBtnTypeGameKeyMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PhotoGraphFuncBtnType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x29408);
		}
		static ::System::String** StaticGet__GameKey_PhotoExhibition_HuaHuo()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x29410);
		}
		static ::System::String** StaticGet__GameKey_TrackPhoto()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x29418);
		}
		static ::UnityEngine::Collider** StaticGet__GiantObjectCollider()
		{
			return (::UnityEngine::Collider**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x29420);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*>** StaticGet__CheckGiantObjectPosArrayDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x29428);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet__BytesBuffer()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x29430);
		}
		static ::System::String** StaticGet__GameKey_PhotoUpdate_LongRange()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x29438);
		}
		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet__TargetInfoList()
		{
			return (::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x29440);
		}
		static ::System::String** StaticGet__GameKey_PhotoUpdateTwoPointFour()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x29448);
		}
		static ::System::String** StaticGet_EditorTempAlbumPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x29450);
		}
		static ::RPG::Client::FrameCaptureManager** StaticGet__FrameCaptureManager()
		{
			return (::RPG::Client::FrameCaptureManager**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x29458);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__RaycastHitArray()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x29460);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Already_Saved()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x7940);
		}
		static ::System::Int32* StaticGet_PhotoGraphIgnoreLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x7950);
		}
		static ::System::Single* StaticGet_WallThickness()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x7954);
		}
		static ::System::Int32* StaticGet__CaptureFrameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x7958);
		}
		static ::System::Int32* StaticGet_PhotoGraphDetectLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x795C);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Mobile_Photo_Permission_Rejected()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x7960);
		}
		static ::System::UInt32* StaticGet__CurrentEmoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x7970);
		}
		static ::System::Int32* StaticGet__TripodColliderCircularWallSegment()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x7974);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Mobile_Photo_Permission_Rejected_No_Prompt()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x7978);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Request_Mobile_Photo_Permission()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x7988);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Save_To_PC_Finish()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x7998);
		}
		static ::System::Int32* StaticGet_PhotoGraphDetectBlockLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x79A8);
		}
		static ::Struct_2_648594091F1A68D6* StaticGet__PhotoStartInfo()
		{
			return (::Struct_2_648594091F1A68D6*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x79AC);
		}
		static ::System::Boolean* StaticGet_DebugRayCastEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x79CC);
		}
		static ::System::Boolean* StaticGet__DrawGiantObjectDetectDebug()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x79CD);
		}
		static ::System::Int32* StaticGet__TripodColliderCircularWallHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x79D0);
		}
		static ::RPG::Client::TextID* StaticGet__TextID_Request_Mobile_Photo_Permission_Title()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils_TypeDefinitionIndex)->GetStaticField(0x79D8);
		}
		// static const ::System::Single _FreeStyleTransitionDuration; // 0x0
		// static const ::System::Int32 NO_TARGET_TIP_PRIORITY = 0x0; // 0x0
		// static const ::System::Int32 SEARCH_TARGET_TIP_PRIORITY = 0x32; // 0x0
		// static const ::System::Int32 TARGET_APPEAR_TIP_PRIORITY = 0x64; // 0x0
		// static const ::System::Int32 _MIN_VALID_HITCOUNT = 0x1; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Texture* GetCurFrameTexture(::RPG::CustomRP::FrameCapture_CaptureFeature a1)
		{
			return ((::UnityEngine::Texture*(*)(::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCURFRAMETEXTURE_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::Promise_1<::UnityEngine::Texture*>* GetCurFrameTextureWithPromise()
		{
			return ((::RPG::Client::Promises::Promise_1<::UnityEngine::Texture*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCURFRAMETEXTUREWITHPROMISE_OFFSET))();
		}

		static ::RPG::Client::Promises::Promise_1<::UnityEngine::Texture*>* GetBlurredCurFrameTextureWithPromise()
		{
			return ((::RPG::Client::Promises::Promise_1<::UnityEngine::Texture*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETBLURREDCURFRAMETEXTUREWITHPROMISE_OFFSET))();
		}

		static ::System::Void ReleaseBlurredFrameTexture()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_RELEASEBLURREDFRAMETEXTURE_OFFSET))();
		}

		static ::System::Void ReleaseCaptureFrame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_RELEASECAPTUREFRAME_OFFSET))();
		}

		static ::System::Void LockRoamingInput()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_LOCKROAMINGINPUT_OFFSET))();
		}

		static ::System::Void UnlockRoamingInput()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_UNLOCKROAMINGINPUT_OFFSET))();
		}

		static ::System::Void LockRoamingPosUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_LOCKROAMINGPOSUPDATE_OFFSET))();
		}

		static ::System::Void UnlockRoamingPosUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_UNLOCKROAMINGPOSUPDATE_OFFSET))();
		}

		static ::RPG::GameCore::PhotoGraphModeType GetCurPhotoGraphMode()
		{
			return ((::RPG::GameCore::PhotoGraphModeType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCURPHOTOGRAPHMODE_OFFSET))();
		}

		static ::System::Void InitPhotoGraphSettings(::RPG::GameCore::PhotoGraphModeType a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PhotoGraphModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_INITPHOTOGRAPHSETTINGS_OFFSET))(a1);
		}

		static ::RPG::Client::FrameCaptureManager* _GetFrameCaptureManager()
		{
			return ((::RPG::Client::FrameCaptureManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GETFRAMECAPTUREMANAGER_OFFSET))();
		}

		static ::System::UInt32 GetEmotionAvatarID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETEMOTIONAVATARID_OFFSET))();
		}

		static ::System::Void SetEmotion(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_SETEMOTION_OFFSET))(a1, a2);
		}

		static ::System::Void ResetEmotion(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_RESETEMOTION_OFFSET))(a1);
		}

		static ::System::Void ResumeFaceExpression(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_RESUMEFACEEXPRESSION_OFFSET))(a1);
		}

		static ::System::Void ResetFaceExpression(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_RESETFACEEXPRESSION_OFFSET))(a1);
		}

		static ::System::Void UnLoadCustomFullEmotion(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_UNLOADCUSTOMFULLEMOTION_OFFSET))(a1);
		}

		static ::System::Void _SetFaceExpression(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__SETFACEEXPRESSION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void _SetFaceEmotion(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__SETFACEEMOTION_OFFSET))(a1, a2);
		}

		static ::System::Void _ResetFaceEmotion(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__RESETFACEEMOTION_OFFSET))(a1);
		}

		static ::System::Void SetFreeStyle(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_SETFREESTYLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ExitFreeStyle(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_EXITFREESTYLE_OFFSET))(a1);
		}

		static ::System::Void ExitIdleShow(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_EXITIDLESHOW_OFFSET))(a1, a2);
		}

		static ::System::Void EnableIdleShow(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ENABLEIDLESHOW_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsInIdleState(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISINIDLESTATE_OFFSET))(a1);
		}

		static ::System::Boolean IsInIdleShow(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISINIDLESHOW_OFFSET))(a1);
		}

		static ::System::Void UpdateAllowIdleShow(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_UPDATEALLOWIDLESHOW_OFFSET))(a1);
		}

		static ::RPG::Client::PhotoGraphCheckCanIdleShowResult IsAllowIdleShow(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::PhotoGraphCheckCanIdleShowResult(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISALLOWIDLESHOW_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterIdleShowEndCallback(::RPG::GameCore::GameEntity* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REGISTERIDLESHOWENDCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void TriggerIdleShow(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_TRIGGERIDLESHOW_OFFSET))(a1, a2);
		}

		static ::System::Void EnableIkOnFreeStyle(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ENABLEIKONFREESTYLE_OFFSET))(a1, a2);
		}

		static ::System::Void ResetIKFlags(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_RESETIKFLAGS_OFFSET))(a1);
		}

		static ::System::Void SteerAngle(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_STEERANGLE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsTurnInPlace(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISTURNINPLACE_OFFSET))(a1);
		}

		static ::System::Boolean IsBoxCollider(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISBOXCOLLIDER_OFFSET))(a1);
		}

		static ::System::Boolean IsCapsuleCollider(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISCAPSULECOLLIDER_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 GetColliderAimPos(::UnityEngine::Collider* a1, ::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Collider*, ::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCOLLIDERAIMPOS_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetTargetIntersectRect(::RPG::GameCore::GameEntity* a1, ::UnityEngine::RectTransform* a2, ::System::Nullable_1<::UnityEngine::Vector2> a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::RectTransform*, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETTARGETINTERSECTRECT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsPointInRect(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISPOINTINRECT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean GetTargetRatioInRect(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::RectTransform* a3, ::System::Single& a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::RectTransform*, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETTARGETRATIOINRECT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean _GetLocalPosInRect(::UnityEngine::Vector3 a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::Vector2& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GETLOCALPOSINRECT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 GetColliderAimPos_1(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType a1, ::UnityEngine::Collider* a2)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCOLLIDERAIMPOS_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetColliderCenterLocalPos(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType a1, ::UnityEngine::Collider* a2)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCOLLIDERCENTERLOCALPOS_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetBoxColliderAimPos(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType a1, ::UnityEngine::Collider* a2)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETBOXCOLLIDERAIMPOS_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetAimUnitRealAimPos(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETAIMUNITREALAIMPOS_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetCapsuleColliderAimPos(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType a1, ::UnityEngine::Collider* a2)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCAPSULECOLLIDERAIMPOS_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckAimEntityVisibleByAimInfo(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CHECKAIMENTITYVISIBLEBYAIMINFO_OFFSET))(a1);
		}

		static ::System::Boolean CheckPhotoGraphAimUnitVisible(::Class_1_EDE9079B7B0FAB9F* a1)
		{
			return ((::System::Boolean(*)(::Class_1_EDE9079B7B0FAB9F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CHECKPHOTOGRAPHAIMUNITVISIBLE_OFFSET))(a1);
		}

		static ::System::Boolean CheckPhotoGraphAimUnitInRange(::Class_1_EDE9079B7B0FAB9F* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::Class_1_EDE9079B7B0FAB9F*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CHECKPHOTOGRAPHAIMUNITINRANGE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single CalcPhotoGraphAimUnitDistance(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CALCPHOTOGRAPHAIMUNITDISTANCE_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CheckAimTargetInLimitCameraDir(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKAIMTARGETINLIMITCAMERADIR_OFFSET))(a1);
		}

		static ::System::Boolean _CheckAimInfoUnitVisible(::Class_1_EDE9079B7B0FAB9F* a1)
		{
			return ((::System::Boolean(*)(::Class_1_EDE9079B7B0FAB9F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKAIMINFOUNITVISIBLE_OFFSET))(a1);
		}

		static ::System::Boolean _CheckAimPointUnitVisible(::Class_1_EDE9079B7B0FAB9F* a1)
		{
			return ((::System::Boolean(*)(::Class_1_EDE9079B7B0FAB9F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKAIMPOINTUNITVISIBLE_OFFSET))(a1);
		}

		static ::System::Boolean _CheckAimGiantTargetUnitVisible(::Class_1_EDE9079B7B0FAB9F* a1)
		{
			return ((::System::Boolean(*)(::Class_1_EDE9079B7B0FAB9F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKAIMGIANTTARGETUNITVISIBLE_OFFSET))(a1);
		}

		static ::System::Int32 _CheckOcclusionCameraToTarget(::UnityEngine::Vector3 a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKOCCLUSIONCAMERATOTARGET_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CheckIsDetectLayer(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKISDETECTLAYER_OFFSET))(a1);
		}

		static ::System::Boolean _CheckIsBlockLayer(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKISBLOCKLAYER_OFFSET))(a1);
		}

		static ::System::Boolean _CheckColliderSame(::UnityEngine::Collider* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKCOLLIDERSAME_OFFSET))(a1, a2);
		}

		static ::System::Void ReportPhotoGraphStart(::RPG::GameCore::PhotoGraphFuncBtnType a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::PhotoGraphFuncBtnType, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REPORTPHOTOGRAPHSTART_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportPhotoGraphEnd(::RPG::GameCore::PhotoGraphFuncBtnType a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::PhotoGraphFuncBtnType, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REPORTPHOTOGRAPHEND_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportBegin_PhotoUpdateTwoPointFour(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REPORTBEGIN_PHOTOUPDATETWOPOINTFOUR_OFFSET))(a1, a2);
		}

		static ::System::Void ReportEnd_PhotoUpdateTwoPointFour(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REPORTEND_PHOTOUPDATETWOPOINTFOUR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::UInt32 _GetOwnerGroupID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GETOWNERGROUPID_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _GenTargetInfoListExtraData(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GENTARGETINFOLISTEXTRADATA_OFFSET))(a1);
		}

		static ::System::String* _GetPhotoUpdateReportGameKey(::System::Boolean a1)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GETPHOTOUPDATEREPORTGAMEKEY_OFFSET))(a1);
		}

		static ::System::Void ReportBegin_TrackPhoto(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REPORTBEGIN_TRACKPHOTO_OFFSET))(a1);
		}

		static ::System::Void ReportEnd_TrackPhoto(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REPORTEND_TRACKPHOTO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* _GetCameraPositionNativeString()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GETCAMERAPOSITIONNATIVESTRING_OFFSET))();
		}

		static ::System::Void ReportBegin_PhotoExhibition(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REPORTBEGIN_PHOTOEXHIBITION_OFFSET))(a1, a2);
		}

		static ::System::Void ReportEnd_PhotoExhibition(::System::Boolean a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_REPORTEND_PHOTOEXHIBITION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CanLockTripod()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CANLOCKTRIPOD_OFFSET))();
		}

		static ::System::Boolean TryLockTripod()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_TRYLOCKTRIPOD_OFFSET))();
		}

		static ::System::Void ResetTripod()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_RESETTRIPOD_OFFSET))();
		}

		static ::System::Boolean IsInTripod()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISINTRIPOD_OFFSET))();
		}

		static ::UnityEngine::GameObject* CreateTripodModePlayerCollider(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CREATETRIPODMODEPLAYERCOLLIDER_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::GameObject* _CreateTripodWall(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Int32 a4, ::System::String* a5, ::UnityEngine::Transform* a6)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CREATETRIPODWALL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::GameObject* CreateTripodModePlayerCollider_1(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CREATETRIPODMODEPLAYERCOLLIDER_1_OFFSET))(a1, a2);
		}

		static ::System::Void GenerateCircularWallMeshWithBoxCollider(::UnityEngine::Transform* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GENERATECIRCULARWALLMESHWITHBOXCOLLIDER_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::GameObject* GenerateCircularWallMesh(::UnityEngine::Transform* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Transform*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GENERATECIRCULARWALLMESH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetCameraZoomEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_SETCAMERAZOOMENABLE_OFFSET))(a1);
		}

		static ::System::Void SetCameraRotateEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_SETCAMERAROTATEENABLE_OFFSET))(a1);
		}

		static ::System::Void _SetPlayerActionEnable(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__SETPLAYERACTIONENABLE_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CheckGiantObjectVisible(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKGIANTOBJECTVISIBLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single CheckGiantObjectRatioInRect(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CHECKGIANTOBJECTRATIOINRECT_OFFSET))(a1, a2);
		}

		static ::System::Int32 _CheckSinglePosArrayAllWithOutRaycast(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Single a2, ::UnityEngine::Matrix4x4 a3, ::UnityEngine::Camera* a4)
		{
			return ((::System::Int32(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::UnityEngine::Matrix4x4, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKSINGLEPOSARRAYALLWITHOUTRAYCAST_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean _CheckSinglePosArray(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Single a2, ::UnityEngine::Matrix4x4 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Camera* a5)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CHECKSINGLEPOSARRAY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void _GenCheckPosArray()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GENCHECKPOSARRAY_OFFSET))();
		}

		static ::System::Boolean _GiantObjectDetectRayCastPass(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GIANTOBJECTDETECTRAYCASTPASS_OFFSET))(a1, a2);
		}

		static ::System::Void _DrawAllGiantObjectDetectPos(::System::Single a1, ::System::Single a2, ::UnityEngine::Matrix4x4 a3)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__DRAWALLGIANTOBJECTDETECTPOS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _DrawGiantObjectDetectPos(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Single a2, ::UnityEngine::Matrix4x4 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__DRAWGIANTOBJECTDETECTPOS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AsyncAddImageWaterMark(::UnityEngine::RenderTexture* a1, ::UnityEngine::UI::Image* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::UnityEngine::UI::Image*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ASYNCADDIMAGEWATERMARK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AsyncAddTextWaterMark(::UnityEngine::RenderTexture* a1, ::UnityEngine::UI::Text* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::UnityEngine::UI::Text*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ASYNCADDTEXTWATERMARK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _DrawImage(::UnityEngine::RenderTexture* a1, ::UnityEngine::UI::Image* a2)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__DRAWIMAGE_OFFSET))(a1, a2);
		}

		static ::System::Void _DrawText(::UnityEngine::RenderTexture* a1, ::UnityEngine::UI::Text* a2)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__DRAWTEXT_OFFSET))(a1, a2);
		}

		static ::RPG::Client::BillboardShowType GetBillboardShowType()
		{
			return ((::RPG::Client::BillboardShowType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETBILLBOARDSHOWTYPE_OFFSET))();
		}

		static ::System::Void GetCurrentPhotoOverrideFovRange(::System::Single& a1, ::System::Single& a2)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCURRENTPHOTOOVERRIDEFOVRANGE_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetEnableShotNoneTarget()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETENABLESHOTNONETARGET_OFFSET))();
		}

		static ::System::Void SwitchPhotoGraphDragMode(::System::Boolean a1, ::Class_1_854A2C7905ADF31B* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::Class_1_854A2C7905ADF31B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_SWITCHPHOTOGRAPHDRAGMODE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::PhotoGraphResultConditionPack* GetCurrentPhotoConditionPack()
		{
			return ((::RPG::Client::PhotoGraphResultConditionPack*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETCURRENTPHOTOCONDITIONPACK_OFFSET))();
		}

		static ::System::Void SetPhotoShotResultFovLevel(::System::Boolean a1, ::RPG::GameCore::PhotoGraphFovLevel a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::RPG::GameCore::PhotoGraphFovLevel))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_SETPHOTOSHOTRESULTFOVLEVEL_OFFSET))(a1, a2);
		}

		static ::System::Boolean SaveScreenCapture(::RPG::Client::PhotoGraphFilterImage* a1, ::System::String* a2, ::RPG::Client::PhotoGraphUtils_StorageFormatType a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::PhotoGraphFilterImage*, ::System::String*, ::RPG::Client::PhotoGraphUtils_StorageFormatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_SAVESCREENCAPTURE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsIdentifyMode(::RPG::GameCore::PhotoGraphModeType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PhotoGraphModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_ISIDENTIFYMODE_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::Promise_1<::Unity::Collections::NativeArray_1<::System::Byte>>* GetBytesByScreenCapture(::RPG::Client::PhotoGraphFilterImage* a1, ::RPG::Client::PhotoGraphUtils_StorageFormatType a2)
		{
			return ((::RPG::Client::Promises::Promise_1<::Unity::Collections::NativeArray_1<::System::Byte>>*(*)(::RPG::Client::PhotoGraphFilterImage*, ::RPG::Client::PhotoGraphUtils_StorageFormatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GETBYTESBYSCREENCAPTURE_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* GenerateScreenCaptureCoroutine(::RPG::Client::PhotoGraphFilterImage* a1, ::RPG::Client::Promises::Promise_1<::Unity::Collections::NativeArray_1<::System::Byte>>* a2, ::RPG::Client::PhotoGraphUtils_StorageFormatType a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::Client::PhotoGraphFilterImage*, ::RPG::Client::Promises::Promise_1<::Unity::Collections::NativeArray_1<::System::Byte>>*, ::RPG::Client::PhotoGraphUtils_StorageFormatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_GENERATESCREENCAPTURECOROUTINE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _SaveScreenCapture(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__SAVESCREENCAPTURE_OFFSET))(a1, a2, a3);
		}

		static ::Unity::Collections::NativeArray_1<::System::Byte> _ConvertDataByFormatType(::Unity::Collections::NativeArray_1<::System::Byte> a1, ::UnityEngine::RenderTexture* a2, ::RPG::Client::PhotoGraphUtils_StorageFormatType a3)
		{
			return ((::Unity::Collections::NativeArray_1<::System::Byte>(*)(::Unity::Collections::NativeArray_1<::System::Byte>, ::UnityEngine::RenderTexture*, ::RPG::Client::PhotoGraphUtils_StorageFormatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CONVERTDATABYFORMATTYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _SaveToGallery(::Il2CppArray<::System::Byte>* a1, ::System::String* a2, ::System::Action_1<::System::Boolean>* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Action_1<::System::Boolean>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__SAVETOGALLERY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void _TryCacheSaveDataAndRequestPermission(::Il2CppArray<::System::Byte>* a1, ::System::String* a2, ::System::Action_1<::System::Boolean>* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Action_1<::System::Boolean>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__TRYCACHESAVEDATAANDREQUESTPERMISSION_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void _OnRequestPermission(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__ONREQUESTPERMISSION_OFFSET))(a1);
		}

		static ::System::Void _ClearCachedImageSaveData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__CLEARCACHEDIMAGESAVEDATA_OFFSET))();
		}

		static ::System::Void _SaveToLocal(::Il2CppArray<::System::Byte>* a1, ::System::String* a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__SAVETOLOCAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ClearImageSaveBytesBuffer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS_CLEARIMAGESAVEBYTESBUFFER_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* _GetBytesBuffer(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS__GETBYTESBUFFER_OFFSET))(a1);
		}
	};
}
