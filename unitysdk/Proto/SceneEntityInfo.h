#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Proto/SceneEntityInfo_EntityOneofCase.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_89;
class Class_1_20D743894CDF214D_1;
class Class_1_419A79D235B9417C_13;
class Class_1_7BF8FDF00F218876_30;
class Class_1_BB4B99DE4C2501EC_9;
class Class_1_FBCD4FF549575A07_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_SCENEENTITYINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BC90D90)
#define PROTO_SCENEENTITYINFO_CLEARENTITY_OFFSET UNITYSDK_OFFSET(0x1BC903B0)
#define PROTO_SCENEENTITYINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1BC902F0)
#define PROTO_SCENEENTITYINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BC903F0)
#define PROTO_SCENEENTITYINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BC903C0)
#define PROTO_SCENEENTITYINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BC90690)
#define PROTO_SCENEENTITYINFO_GET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1BC90120)
#define PROTO_SCENEENTITYINFO_GET_ENTITYCASE_OFFSET UNITYSDK_OFFSET(0x1BC903A0)
#define PROTO_SCENEENTITYINFO_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1BC90360)
#define PROTO_SCENEENTITYINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1BC90380)
#define PROTO_SCENEENTITYINFO_GET_INSTID_OFFSET UNITYSDK_OFFSET(0x1BC90320)
#define PROTO_SCENEENTITYINFO_GET_MOTION_OFFSET UNITYSDK_OFFSET(0x1BC90340)
#define PROTO_SCENEENTITYINFO_GET_NPCMONSTER_OFFSET UNITYSDK_OFFSET(0x1BC90180)
#define PROTO_SCENEENTITYINFO_GET_NPC_OFFSET UNITYSDK_OFFSET(0x1BC901E0)
#define PROTO_SCENEENTITYINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BC8FE70)
#define PROTO_SCENEENTITYINFO_GET_PROP_OFFSET UNITYSDK_OFFSET(0x1BC90240)
#define PROTO_SCENEENTITYINFO_GET_SUMMONUNIT_OFFSET UNITYSDK_OFFSET(0x1BC902A0)
#define PROTO_SCENEENTITYINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BC915C0)
#define PROTO_SCENEENTITYINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BC910E0)
#define PROTO_SCENEENTITYINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BC8FEA0)
#define PROTO_SCENEENTITYINFO_SET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1BC90160)
#define PROTO_SCENEENTITYINFO_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1BC90370)
#define PROTO_SCENEENTITYINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1BC90390)
#define PROTO_SCENEENTITYINFO_SET_INSTID_OFFSET UNITYSDK_OFFSET(0x1BC90330)
#define PROTO_SCENEENTITYINFO_SET_MOTION_OFFSET UNITYSDK_OFFSET(0x1BC90350)
#define PROTO_SCENEENTITYINFO_SET_NPCMONSTER_OFFSET UNITYSDK_OFFSET(0x1BC901C0)
#define PROTO_SCENEENTITYINFO_SET_NPC_OFFSET UNITYSDK_OFFSET(0x1BC90220)
#define PROTO_SCENEENTITYINFO_SET_PROP_OFFSET UNITYSDK_OFFSET(0x1BC90280)
#define PROTO_SCENEENTITYINFO_SET_SUMMONUNIT_OFFSET UNITYSDK_OFFSET(0x1BC902E0)
#define PROTO_SCENEENTITYINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BC90930)
#define PROTO_SCENEENTITYINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BC90990)
#define PROTO_SCENEENTITYINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC919C0)
#define PROTO_SCENEENTITYINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC8FEC0)
#define PROTO_SCENEENTITYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC8FEB0)

namespace Proto
{
	inline static constexpr unsigned int SceneEntityInfo_TypeDefinitionIndex = 32534;

	class SceneEntityInfo : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::SceneEntityInfo*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::SceneEntityInfo*>**)Il2CppClass::FromTypeDefinitionIndex(SceneEntityInfo_TypeDefinitionIndex)->GetStaticField(0x2C290);
		}
		// static const ::System::Int32 InstIdFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 MotionFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 EntityIdFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 GroupIdFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 ActorFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 NpcMonsterFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 NpcFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 PropFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 SummonUnitFieldNumber = 0x1; // 0x0
		::Class_1_20D743894CDF214D_1* motion_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::Object* entity_; // 0x20
		::System::UInt32 groupId_; // 0x28
		::System::UInt32 entityId_; // 0x2C
		::System::UInt32 instId_; // 0x30
		::Proto::SceneEntityInfo_EntityOneofCase entityCase_; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::SceneEntityInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::SceneEntityInfo*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::SceneEntityInfo*>*(*)())((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::SceneEntityInfo* Clone()
		{
			return ((::Proto::SceneEntityInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_InstId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_INSTID_OFFSET))(this);
		}

		::System::Void set_InstId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_INSTID_OFFSET))(this, a1);
		}

		::Class_1_20D743894CDF214D_1* get_Motion()
		{
			return ((::Class_1_20D743894CDF214D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_MOTION_OFFSET))(this);
		}

		::System::Void set_Motion(::Class_1_20D743894CDF214D_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_20D743894CDF214D_1*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_MOTION_OFFSET))(this, a1);
		}

		::System::UInt32 get_EntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_ENTITYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_GROUPID_OFFSET))(this, a1);
		}

		::Class_1_1CBA230307F9C289_89* get_Actor()
		{
			return ((::Class_1_1CBA230307F9C289_89*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_ACTOR_OFFSET))(this);
		}

		::System::Void set_Actor(::Class_1_1CBA230307F9C289_89* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_89*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_ACTOR_OFFSET))(this, a1);
		}

		::Class_1_FBCD4FF549575A07_2* get_NpcMonster()
		{
			return ((::Class_1_FBCD4FF549575A07_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_NPCMONSTER_OFFSET))(this);
		}

		::System::Void set_NpcMonster(::Class_1_FBCD4FF549575A07_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07_2*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_NPCMONSTER_OFFSET))(this, a1);
		}

		::Class_1_7BF8FDF00F218876_30* get_Npc()
		{
			return ((::Class_1_7BF8FDF00F218876_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_NPC_OFFSET))(this);
		}

		::System::Void set_Npc(::Class_1_7BF8FDF00F218876_30* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7BF8FDF00F218876_30*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_NPC_OFFSET))(this, a1);
		}

		::Class_1_419A79D235B9417C_13* get_Prop()
		{
			return ((::Class_1_419A79D235B9417C_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_PROP_OFFSET))(this);
		}

		::System::Void set_Prop(::Class_1_419A79D235B9417C_13* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_419A79D235B9417C_13*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_PROP_OFFSET))(this, a1);
		}

		::Class_1_BB4B99DE4C2501EC_9* get_SummonUnit()
		{
			return ((::Class_1_BB4B99DE4C2501EC_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_SUMMONUNIT_OFFSET))(this);
		}

		::System::Void set_SummonUnit(::Class_1_BB4B99DE4C2501EC_9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_9*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_SET_SUMMONUNIT_OFFSET))(this, a1);
		}

		::Proto::SceneEntityInfo_EntityOneofCase get_EntityCase()
		{
			return ((::Proto::SceneEntityInfo_EntityOneofCase(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GET_ENTITYCASE_OFFSET))(this);
		}

		::System::Void ClearEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_CLEARENTITY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::SceneEntityInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::SceneEntityInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
