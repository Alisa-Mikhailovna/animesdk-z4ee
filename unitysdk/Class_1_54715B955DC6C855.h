#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EMovementComputePenetrationResultType.h"
#include "unitysdk/Struct_2_DC0A74F700976E73.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7C730499E6981AF2;
namespace RPG::Client { class MonoCharacterHeadPoint; }
namespace RPG::Client { template <typename T> class ChunkedStructList_1; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_1_54715B955DC6C855_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15675EA0)
#define CLASS_1_54715B955DC6C855_GET_ALLOWSLIDE_OFFSET UNITYSDK_OFFSET(0x1567DE20)
#define CLASS_1_54715B955DC6C855_GET_CAPSULECOLLIDER_OFFSET UNITYSDK_OFFSET(0x1567D870)
#define CLASS_1_54715B955DC6C855_GET_FORWARDNORMAL_OFFSET UNITYSDK_OFFSET(0x1567D8F0)
#define CLASS_1_54715B955DC6C855_GET_GROUNDNORMAL_OFFSET UNITYSDK_OFFSET(0x1567D8B0)
#define CLASS_1_54715B955DC6C855_GET_ISTHREAD_OFFSET UNITYSDK_OFFSET(0x1567DE80)
#define CLASS_1_54715B955DC6C855_GET_LASTPOSITION_OFFSET UNITYSDK_OFFSET(0x1567DE40)
#define CLASS_1_54715B955DC6C855_GET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x1567D890)
#define CLASS_1_54715B955DC6C855_GET_MAX_MOVE_SPEED_OFFSET UNITYSDK_OFFSET(0x15674270)
#define CLASS_1_54715B955DC6C855_GET_MOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1567DAB0)
#define CLASS_1_54715B955DC6C855_GET_MOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1567DA90)
#define CLASS_1_54715B955DC6C855_GET_REALVELOCITY_OFFSET UNITYSDK_OFFSET(0x15675F50)
#define CLASS_1_54715B955DC6C855_GET_REQUIRESTANDONGROUND_OFFSET UNITYSDK_OFFSET(0x1567D950)
#define CLASS_1_54715B955DC6C855_GET_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1567D850)
#define CLASS_1_54715B955DC6C855_GET_SCENERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1567DAD0)
#define CLASS_1_54715B955DC6C855_GET_SOURCEMOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1567DB10)
#define CLASS_1_54715B955DC6C855_GET_SOURCEMOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1567DAF0)
#define CLASS_1_54715B955DC6C855_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x15675F30)
#define CLASS_1_54715B955DC6C855_GET_THREADDATA_OFFSET UNITYSDK_OFFSET(0x15675F20)
#define CLASS_1_54715B955DC6C855_GET_UPSTAIRANIMRATIO_OFFSET UNITYSDK_OFFSET(0x1567D930)
#define CLASS_1_54715B955DC6C855_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x15675F90)
#define CLASS_1_54715B955DC6C855_GET_WALLHITS_OFFSET UNITYSDK_OFFSET(0x1567DB30)
#define CLASS_1_54715B955DC6C855_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x1567DB50)
#define CLASS_1_54715B955DC6C855_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x15674D70)
#define CLASS_1_54715B955DC6C855_METHOD_1_09B321C3BEF4C1E5_OFFSET UNITYSDK_OFFSET(0x15675A40)
#define CLASS_1_54715B955DC6C855_METHOD_1_128FE7D4AC6EA392_OFFSET UNITYSDK_OFFSET(0x156785D0)
#define CLASS_1_54715B955DC6C855_METHOD_1_1423343C279235C3_OFFSET UNITYSDK_OFFSET(0x15678430)
#define CLASS_1_54715B955DC6C855_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15675460)
#define CLASS_1_54715B955DC6C855_METHOD_1_1BD92CF0F4418517_OFFSET UNITYSDK_OFFSET(0x1567D100)
#define CLASS_1_54715B955DC6C855_METHOD_1_230D9D2669935041_OFFSET UNITYSDK_OFFSET(0x156777C0)
#define CLASS_1_54715B955DC6C855_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x156748E0)
#define CLASS_1_54715B955DC6C855_METHOD_1_27592B75ABD7B555_OFFSET UNITYSDK_OFFSET(0x15677670)
#define CLASS_1_54715B955DC6C855_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x156768E0)
#define CLASS_1_54715B955DC6C855_METHOD_1_2CE52CE032F120BC_OFFSET UNITYSDK_OFFSET(0x15675E00)
#define CLASS_1_54715B955DC6C855_METHOD_1_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0x156753C0)
#define CLASS_1_54715B955DC6C855_METHOD_1_30D1209326FA87FC_2_OFFSET UNITYSDK_OFFSET(0x15677730)
#define CLASS_1_54715B955DC6C855_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x15674CC0)
#define CLASS_1_54715B955DC6C855_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15675600)
#define CLASS_1_54715B955DC6C855_METHOD_1_37363E5F93B43A3C_OFFSET UNITYSDK_OFFSET(0x1567CEA0)
#define CLASS_1_54715B955DC6C855_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x156745F0)
#define CLASS_1_54715B955DC6C855_METHOD_1_3A9628A1B5EBB7DE_OFFSET UNITYSDK_OFFSET(0x1567B600)
#define CLASS_1_54715B955DC6C855_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x15674C40)
#define CLASS_1_54715B955DC6C855_METHOD_1_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x1567DA50)
#define CLASS_1_54715B955DC6C855_METHOD_1_42AE49233FE0C940_OFFSET UNITYSDK_OFFSET(0x1567B110)
#define CLASS_1_54715B955DC6C855_METHOD_1_42FCF7EC07DF6708_OFFSET UNITYSDK_OFFSET(0x1567B220)
#define CLASS_1_54715B955DC6C855_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x15677080)
#define CLASS_1_54715B955DC6C855_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x156747D0)
#define CLASS_1_54715B955DC6C855_METHOD_1_49D352C181056F15_OFFSET UNITYSDK_OFFSET(0x15675B00)
#define CLASS_1_54715B955DC6C855_METHOD_1_4DA758F3A2DC69A1_OFFSET UNITYSDK_OFFSET(0x156782F0)
#define CLASS_1_54715B955DC6C855_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x1567D970)
#define CLASS_1_54715B955DC6C855_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x1567D980)
#define CLASS_1_54715B955DC6C855_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1567D960)
#define CLASS_1_54715B955DC6C855_METHOD_1_5626385EF0A3436F_OFFSET UNITYSDK_OFFSET(0x1567B7D0)
#define CLASS_1_54715B955DC6C855_METHOD_1_572994740C9C0FDA_1_OFFSET UNITYSDK_OFFSET(0x156764A0)
#define CLASS_1_54715B955DC6C855_METHOD_1_572994740C9C0FDA_OFFSET UNITYSDK_OFFSET(0x15675FD0)
#define CLASS_1_54715B955DC6C855_METHOD_1_5AB860AAA4889394_OFFSET UNITYSDK_OFFSET(0x1567C0D0)
#define CLASS_1_54715B955DC6C855_METHOD_1_766FE18F4D52BCD6_OFFSET UNITYSDK_OFFSET(0x1567D840)
#define CLASS_1_54715B955DC6C855_METHOD_1_835AB84E5E01ADE6_OFFSET UNITYSDK_OFFSET(0x1567A390)
#define CLASS_1_54715B955DC6C855_METHOD_1_8507A90D618EA20D_OFFSET UNITYSDK_OFFSET(0x1567A810)
#define CLASS_1_54715B955DC6C855_METHOD_1_8EF54F768D3AF0D2_OFFSET UNITYSDK_OFFSET(0x1567A090)
#define CLASS_1_54715B955DC6C855_METHOD_1_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0x15677450)
#define CLASS_1_54715B955DC6C855_METHOD_1_9D9C6981AA740629_OFFSET UNITYSDK_OFFSET(0x15675B90)
#define CLASS_1_54715B955DC6C855_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1567D990)
#define CLASS_1_54715B955DC6C855_METHOD_1_AAE74561848EA037_OFFSET UNITYSDK_OFFSET(0x15675870)
#define CLASS_1_54715B955DC6C855_METHOD_1_AB508AA7C4C9D894_OFFSET UNITYSDK_OFFSET(0x1567DEA0)
#define CLASS_1_54715B955DC6C855_METHOD_1_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x156749D0)
#define CLASS_1_54715B955DC6C855_METHOD_1_B0DA9828F7B4DD90_OFFSET UNITYSDK_OFFSET(0x156797D0)
#define CLASS_1_54715B955DC6C855_METHOD_1_B0E9E91A270E75F1_OFFSET UNITYSDK_OFFSET(0x15674880)
#define CLASS_1_54715B955DC6C855_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x1567D830)
#define CLASS_1_54715B955DC6C855_METHOD_1_B6E7B97471C22120_OFFSET UNITYSDK_OFFSET(0x1567C590)
#define CLASS_1_54715B955DC6C855_METHOD_1_BAE5E266E89AB6D3_OFFSET UNITYSDK_OFFSET(0x1567DC20)
#define CLASS_1_54715B955DC6C855_METHOD_1_C1D3BDE2A17F5C9D_1_OFFSET UNITYSDK_OFFSET(0x156750F0)
#define CLASS_1_54715B955DC6C855_METHOD_1_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x15674E80)
#define CLASS_1_54715B955DC6C855_METHOD_1_C3FCFEB83374757C_OFFSET UNITYSDK_OFFSET(0x1567C1B0)
#define CLASS_1_54715B955DC6C855_METHOD_1_C6A450575DC46B50_OFFSET UNITYSDK_OFFSET(0x156758E0)
#define CLASS_1_54715B955DC6C855_METHOD_1_C86A8C92DD223A1A_OFFSET UNITYSDK_OFFSET(0x15677C30)
#define CLASS_1_54715B955DC6C855_METHOD_1_C8FB115C72ED7B3B_OFFSET UNITYSDK_OFFSET(0x1567C2E0)
#define CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15674690)
#define CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x15674830)
#define CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x15674960)
#define CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x15675370)
#define CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x156775F0)
#define CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0x15677630)
#define CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_7_OFFSET UNITYSDK_OFFSET(0x156776F0)
#define CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15674590)
#define CLASS_1_54715B955DC6C855_METHOD_1_CB74E33F08A8811B_OFFSET UNITYSDK_OFFSET(0x15679710)
#define CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x1567DA10)
#define CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_2_OFFSET UNITYSDK_OFFSET(0x1567DA30)
#define CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_3_OFFSET UNITYSDK_OFFSET(0x1567DA70)
#define CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_4_OFFSET UNITYSDK_OFFSET(0x1567DE00)
#define CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1567D9F0)
#define CLASS_1_54715B955DC6C855_METHOD_1_D43A81E8F419063F_1_OFFSET UNITYSDK_OFFSET(0x1567D630)
#define CLASS_1_54715B955DC6C855_METHOD_1_D43A81E8F419063F_OFFSET UNITYSDK_OFFSET(0x1567C4C0)
#define CLASS_1_54715B955DC6C855_METHOD_1_DAC9219D09D338F5_OFFSET UNITYSDK_OFFSET(0x1567D6D0)
#define CLASS_1_54715B955DC6C855_METHOD_1_DE4DB96AC09EBDE9_OFFSET UNITYSDK_OFFSET(0x1567A5D0)
#define CLASS_1_54715B955DC6C855_METHOD_1_DFF56AD42FD84C0C_OFFSET UNITYSDK_OFFSET(0x1567C840)
#define CLASS_1_54715B955DC6C855_METHOD_1_E65157A486C1DDE5_OFFSET UNITYSDK_OFFSET(0x156746F0)
#define CLASS_1_54715B955DC6C855_METHOD_1_EF5B2B82CF25C616_OFFSET UNITYSDK_OFFSET(0x1567CEF0)
#define CLASS_1_54715B955DC6C855_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1567DA60)
#define CLASS_1_54715B955DC6C855_METHOD_1_F679E8CF4B1A4DCA_OFFSET UNITYSDK_OFFSET(0x1567CC10)
#define CLASS_1_54715B955DC6C855_METHOD_1_FA56DCE292E69C68_OFFSET UNITYSDK_OFFSET(0x156770D0)
#define CLASS_1_54715B955DC6C855_METHOD_1_FEA241CA014F8043_OFFSET UNITYSDK_OFFSET(0x156757E0)
#define CLASS_1_54715B955DC6C855_SET_ALLOWSLIDE_OFFSET UNITYSDK_OFFSET(0x1567DE30)
#define CLASS_1_54715B955DC6C855_SET_CAPSULECOLLIDER_OFFSET UNITYSDK_OFFSET(0x1567D880)
#define CLASS_1_54715B955DC6C855_SET_FORWARDNORMAL_OFFSET UNITYSDK_OFFSET(0x1567D910)
#define CLASS_1_54715B955DC6C855_SET_GROUNDNORMAL_OFFSET UNITYSDK_OFFSET(0x1567D8D0)
#define CLASS_1_54715B955DC6C855_SET_ISTHREAD_OFFSET UNITYSDK_OFFSET(0x1567DE90)
#define CLASS_1_54715B955DC6C855_SET_LASTPOSITION_OFFSET UNITYSDK_OFFSET(0x1567DE60)
#define CLASS_1_54715B955DC6C855_SET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x1567D8A0)
#define CLASS_1_54715B955DC6C855_SET_MOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1567DAC0)
#define CLASS_1_54715B955DC6C855_SET_MOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1567DAA0)
#define CLASS_1_54715B955DC6C855_SET_REALVELOCITY_OFFSET UNITYSDK_OFFSET(0x15675F70)
#define CLASS_1_54715B955DC6C855_SET_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1567D860)
#define CLASS_1_54715B955DC6C855_SET_SCENERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1567DAE0)
#define CLASS_1_54715B955DC6C855_SET_SOURCEMOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1567DB20)
#define CLASS_1_54715B955DC6C855_SET_SOURCEMOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1567DB00)
#define CLASS_1_54715B955DC6C855_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x15675F40)
#define CLASS_1_54715B955DC6C855_SET_UPSTAIRANIMRATIO_OFFSET UNITYSDK_OFFSET(0x1567D940)
#define CLASS_1_54715B955DC6C855_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x15675FB0)
#define CLASS_1_54715B955DC6C855_SET_WALLHITS_OFFSET UNITYSDK_OFFSET(0x1567DB40)
#define CLASS_1_54715B955DC6C855__CCTOR_OFFSET UNITYSDK_OFFSET(0x1567DFA0)
#define CLASS_1_54715B955DC6C855__CTOR_OFFSET UNITYSDK_OFFSET(0x156742B0)

inline static constexpr unsigned int Class_1_54715B955DC6C855_TypeDefinitionIndex = 54547;

class Class_1_54715B955DC6C855 : public ::System::Object
{
public:
	static ::System::Single* StaticGet__MAX_MOVE_SPEED_k__BackingField()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_54715B955DC6C855_TypeDefinitionIndex)->GetStaticField(0xCBE0);
	}
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	::Il2CppArray<::UnityEngine::Collider*>* Field_1_3; // 0x10
	::Struct_2_DC0A74F700976E73 Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x50
	::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>* _WallHits_k__BackingField; // 0x58
	::UnityEngine::Rigidbody* _Rigidbody_k__BackingField; // 0x60
	::UnityEngine::CapsuleCollider* _CapsuleCollider_k__BackingField; // 0x68
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_1_9; // 0x70
	::Class_1_7C730499E6981AF2* _ThreadData_k__BackingField; // 0x78
	::RPG::GameCore::GameEntity* Field_1_11; // 0x80
	::RPG::GameCore::AdventureCharacterController* Field_1_12; // 0x88
	::System::Single _MaxSpeed_k__BackingField; // 0x90
	::UnityEngine::Vector3 Field_1_14; // 0x94
	::UnityEngine::Vector3 _GroundNormal_k__BackingField; // 0xA0
	::UnityEngine::Vector3 Field_1_16; // 0xAC
	::UnityEngine::Vector3 Field_1_17; // 0xB8
	::System::Single Field_1_18; // 0xC4
	::System::Boolean Field_1_19; // 0xC8
	::System::Boolean _IsThread_k__BackingField; // 0xC9
	::System::Boolean _AllowSlide_k__BackingField; // 0xCA
	::System::Boolean Field_1_22; // 0xCB
	::UnityEngine::LayerMask _MoveRaycastLayerMask_k__BackingField; // 0xCC
	::System::Single _UpStairAnimRatio_k__BackingField; // 0xD0
	::System::Single Field_1_25; // 0xD4
	::UnityEngine::Vector3 Field_1_26; // 0xD8
	::System::Boolean _RequireStandOnGround_k__BackingField; // 0xE4
	::System::Single Field_1_28; // 0xE8
	::UnityEngine::LayerMask _SourceMoveCapsuleCastLayerMask_k__BackingField; // 0xEC
	::UnityEngine::LayerMask _SceneRaycastLayerMask_k__BackingField; // 0xF0
	::System::Single Field_1_31; // 0xF4
	::UnityEngine::Vector3 Field_1_32; // 0xF8
	::System::Single _Speed_k__BackingField; // 0x104
	::UnityEngine::LayerMask _MoveCapsuleCastLayerMask_k__BackingField; // 0x108
	::UnityEngine::LayerMask _SourceMoveRaycastLayerMask_k__BackingField; // 0x10C
	::UnityEngine::Vector3 _RealVelocity_k__BackingField; // 0x110
	::UnityEngine::Vector3 Field_1_37; // 0x11C
	::UnityEngine::Vector3 _ForwardNormal_k__BackingField; // 0x128
	::UnityEngine::Vector3 _Velocity_k__BackingField; // 0x134
	::UnityEngine::Quaternion Field_1_40; // 0x140
	::UnityEngine::Vector3 _LastPosition_k__BackingField; // 0x150

	::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855__CCTOR_OFFSET))();
	}

	static ::System::Single get_MAX_MOVE_SPEED()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_MAX_MOVE_SPEED_OFFSET))();
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_E65157A486C1DDE5(::UnityEngine::GameObject* a1, ::UnityEngine::Rigidbody* a2, ::UnityEngine::CapsuleCollider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_E65157A486C1DDE5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_B0E9E91A270E75F1(::RPG::Client::MonoCharacterHeadPoint* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCharacterHeadPoint*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_B0E9E91A270E75F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}

	::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_54715B955DC6C855* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_54715B955DC6C855*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Void Method_1_C1D3BDE2A17F5C9D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_C1D3BDE2A17F5C9D_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_30D1209326FA87FC_1_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FEA241CA014F8043(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_FEA241CA014F8043_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_AAE74561848EA037(::UnityEngine::Quaternion a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_AAE74561848EA037_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C6A450575DC46B50(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_C6A450575DC46B50_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_09B321C3BEF4C1E5(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_09B321C3BEF4C1E5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_49D352C181056F15(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_49D352C181056F15_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9D9C6981AA740629(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_9D9C6981AA740629_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CE52CE032F120BC(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_2CE52CE032F120BC_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_DISPOSE_OFFSET))(this);
	}

	::Class_1_7C730499E6981AF2* get_ThreadData()
	{
		return ((::Class_1_7C730499E6981AF2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_THREADDATA_OFFSET))(this);
	}

	::System::Single get_Speed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_SPEED_OFFSET))(this);
	}

	::System::Void set_Speed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_SPEED_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_RealVelocity()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_REALVELOCITY_OFFSET))(this);
	}

	::System::Void set_RealVelocity(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_REALVELOCITY_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_Velocity()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_VELOCITY_OFFSET))(this);
	}

	::System::Void set_Velocity(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_VELOCITY_OFFSET))(this, a1);
	}

	::System::Single Method_1_572994740C9C0FDA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_572994740C9C0FDA_OFFSET))(this);
	}

	::System::Single Method_1_572994740C9C0FDA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_572994740C9C0FDA_1_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_1_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_8F537CE539CF0103_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_5_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_6_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_27592B75ABD7B555(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_27592B75ABD7B555_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CA373AA1C7054598_7_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_30D1209326FA87FC_2_OFFSET))(this);
	}

	::System::Boolean Method_1_FA56DCE292E69C68(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_FA56DCE292E69C68_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C86A8C92DD223A1A(::UnityEngine::Vector3 a1, ::UnityEngine::LayerMask a2, ::UnityEngine::Vector3& a3, ::System::Single& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::LayerMask, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_C86A8C92DD223A1A_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::EMovementComputePenetrationResultType Method_1_128FE7D4AC6EA392(::UnityEngine::Vector3 a1, ::UnityEngine::LayerMask a2, ::UnityEngine::Vector3& a3, ::System::Single& a4)
	{
		return ((::RPG::GameCore::EMovementComputePenetrationResultType(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::LayerMask, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_128FE7D4AC6EA392_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_CB74E33F08A8811B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_CB74E33F08A8811B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_B0DA9828F7B4DD90(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3, ::UnityEngine::LayerMask a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_B0DA9828F7B4DD90_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_8EF54F768D3AF0D2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_8EF54F768D3AF0D2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_230D9D2669935041(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::RaycastHit& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_230D9D2669935041_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::GameCore::EMovementComputePenetrationResultType Method_1_8507A90D618EA20D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::RPG::GameCore::EMovementComputePenetrationResultType(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_8507A90D618EA20D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_42AE49233FE0C940(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::RaycastHit& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_42AE49233FE0C940_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_42FCF7EC07DF6708(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::RaycastHit& a5, ::UnityEngine::LayerMask a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_42FCF7EC07DF6708_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_5626385EF0A3436F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_5626385EF0A3436F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_C3FCFEB83374757C(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_C3FCFEB83374757C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D43A81E8F419063F(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::RaycastHit& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_D43A81E8F419063F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_B6E7B97471C22120(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_B6E7B97471C22120_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_DFF56AD42FD84C0C(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::RaycastHit& a5, ::UnityEngine::RaycastHit& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_DFF56AD42FD84C0C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_F679E8CF4B1A4DCA(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4, ::UnityEngine::RaycastHit& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::RaycastHit&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_F679E8CF4B1A4DCA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_1BD92CF0F4418517(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::RaycastHit& a3, ::RPG::GameCore::EMovementComputePenetrationResultType& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::RPG::GameCore::EMovementComputePenetrationResultType&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_1BD92CF0F4418517_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_D43A81E8F419063F_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::RaycastHit& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_D43A81E8F419063F_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_DAC9219D09D338F5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_DAC9219D09D338F5_OFFSET))(this);
	}

	::System::Int32 Method_1_5AB860AAA4889394(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::LayerMask a3)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_5AB860AAA4889394_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_4DA758F3A2DC69A1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::LayerMask a4)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_4DA758F3A2DC69A1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_EF5B2B82CF25C616(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_EF5B2B82CF25C616_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_1_835AB84E5E01ADE6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::LayerMask a4)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_835AB84E5E01ADE6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_C8FB115C72ED7B3B(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4, ::System::Single a5, ::UnityEngine::LayerMask a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_C8FB115C72ED7B3B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Int32 Method_1_3A9628A1B5EBB7DE(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_3A9628A1B5EBB7DE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_1_DE4DB96AC09EBDE9(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::LayerMask a6)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_DE4DB96AC09EBDE9_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_1423343C279235C3(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Collider* a5, ::UnityEngine::Vector3& a6, ::System::Single& a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Collider*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_1423343C279235C3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::AdventureCharacterController* Method_1_766FE18F4D52BCD6()
	{
		return ((::RPG::GameCore::AdventureCharacterController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_766FE18F4D52BCD6_OFFSET))(this);
	}

	::UnityEngine::Rigidbody* get_Rigidbody()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_RIGIDBODY_OFFSET))(this);
	}

	::System::Void set_Rigidbody(::UnityEngine::Rigidbody* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_RIGIDBODY_OFFSET))(this, a1);
	}

	::UnityEngine::CapsuleCollider* get_CapsuleCollider()
	{
		return ((::UnityEngine::CapsuleCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_CAPSULECOLLIDER_OFFSET))(this);
	}

	::System::Void set_CapsuleCollider(::UnityEngine::CapsuleCollider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_CAPSULECOLLIDER_OFFSET))(this, a1);
	}

	::System::Single get_MaxSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_MAXSPEED_OFFSET))(this);
	}

	::System::Void set_MaxSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_MAXSPEED_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_GroundNormal()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_GROUNDNORMAL_OFFSET))(this);
	}

	::System::Void set_GroundNormal(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_GROUNDNORMAL_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_ForwardNormal()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_FORWARDNORMAL_OFFSET))(this);
	}

	::System::Void set_ForwardNormal(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_FORWARDNORMAL_OFFSET))(this, a1);
	}

	::System::Single get_UpStairAnimRatio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_UPSTAIRANIMRATIO_OFFSET))(this);
	}

	::System::Void set_UpStairAnimRatio(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_UPSTAIRANIMRATIO_OFFSET))(this, a1);
	}

	::System::Boolean get_RequireStandOnGround()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_REQUIRESTANDONGROUND_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_2_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_413F493333BF3391_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_3_OFFSET))(this);
	}

	::UnityEngine::LayerMask get_MoveRaycastLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_MOVERAYCASTLAYERMASK_OFFSET))(this);
	}

	::System::Void set_MoveRaycastLayerMask(::UnityEngine::LayerMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_MOVERAYCASTLAYERMASK_OFFSET))(this, a1);
	}

	::UnityEngine::LayerMask get_MoveCapsuleCastLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_MOVECAPSULECASTLAYERMASK_OFFSET))(this);
	}

	::System::Void set_MoveCapsuleCastLayerMask(::UnityEngine::LayerMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_MOVECAPSULECASTLAYERMASK_OFFSET))(this, a1);
	}

	::UnityEngine::LayerMask get_SceneRaycastLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_SCENERAYCASTLAYERMASK_OFFSET))(this);
	}

	::System::Void set_SceneRaycastLayerMask(::UnityEngine::LayerMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_SCENERAYCASTLAYERMASK_OFFSET))(this, a1);
	}

	::UnityEngine::LayerMask get_SourceMoveRaycastLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_SOURCEMOVERAYCASTLAYERMASK_OFFSET))(this);
	}

	::System::Void set_SourceMoveRaycastLayerMask(::UnityEngine::LayerMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_SOURCEMOVERAYCASTLAYERMASK_OFFSET))(this, a1);
	}

	::UnityEngine::LayerMask get_SourceMoveCapsuleCastLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_SOURCEMOVECAPSULECASTLAYERMASK_OFFSET))(this);
	}

	::System::Void set_SourceMoveCapsuleCastLayerMask(::UnityEngine::LayerMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_SOURCEMOVECAPSULECASTLAYERMASK_OFFSET))(this, a1);
	}

	::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>* get_WallHits()
	{
		return ((::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_WALLHITS_OFFSET))(this);
	}

	::System::Void set_WallHits(::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_WALLHITS_OFFSET))(this, a1);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_BAE5E266E89AB6D3(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_BAE5E266E89AB6D3_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_D37FAD0A6AA04B25_4_OFFSET))(this);
	}

	::System::Boolean get_AllowSlide()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_ALLOWSLIDE_OFFSET))(this);
	}

	::System::Void set_AllowSlide(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_ALLOWSLIDE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_LastPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_LASTPOSITION_OFFSET))(this);
	}

	::System::Void set_LastPosition(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_LASTPOSITION_OFFSET))(this, a1);
	}

	::System::Boolean get_IsThread()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_GET_ISTHREAD_OFFSET))(this);
	}

	::System::Void set_IsThread(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_SET_ISTHREAD_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_37363E5F93B43A3C(::UnityEngine::RaycastHit& a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::RaycastHit&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_37363E5F93B43A3C_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_AB508AA7C4C9D894(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_54715B955DC6C855_METHOD_1_AB508AA7C4C9D894_OFFSET))(a1, a2, a3, a4);
	}
};
