#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_31B87651CEDF5B41;
class Class_1_963E317C37FB5E9A_34;
class Class_1_FB0633E85BD6CF8E_6;
namespace RPG::Client { class GridFightStage; }
namespace RPG::Client { class GridFightStageNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC813710)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETNODE_OFFSET UNITYSDK_OFFSET(0xC813830)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETSTAGENODESBYCHAPTERID_OFFSET UNITYSDK_OFFSET(0xC814470)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GET_CHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0xC814550)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GET_CURCHAPTERNODES_OFFSET UNITYSDK_OFFSET(0xC814410)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SETNODEFRENZY_OFFSET UNITYSDK_OFFSET(0xC813990)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SYNCROUTEID_OFFSET UNITYSDK_OFFSET(0xC812FB0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_1_OFFSET UNITYSDK_OFFSET(0xC813A30)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_2_OFFSET UNITYSDK_OFFSET(0xC813B10)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_OFFSET UNITYSDK_OFFSET(0xC8137A0)
#define RPG_CLIENT_GRIDFIGHTSTAGEROUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xC812F10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStageRoute_TypeDefinitionIndex = 62323;

	class GridFightStageRoute : public ::System::Object
	{
	public:
		::RPG::Client::GridFightStage* _CurStage; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>*>* _StageNodesByChapterID; // 0x18
		::System::UInt32 _StageRouteID; // 0x20

		::System::Void _ctor(::RPG::Client::GridFightStage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncRouteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SYNCROUTEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightStageNode*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::GridFightStageNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void UpdateNodeInfo(::Class_1_31B87651CEDF5B41* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_31B87651CEDF5B41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_OFFSET))(this, a1);
		}

		::System::Void SetNodeFrenzy(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_SETNODEFRENZY_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateNodeInfo_1(::Class_1_963E317C37FB5E9A_34* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_34*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_1_OFFSET))(this, a1);
		}

		::System::Void UpdateNodeInfo_2(::Class_1_FB0633E85BD6CF8E_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_UPDATENODEINFO_2_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>* get_CurChapterNodes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GET_CURCHAPTERNODES_OFFSET))(this);
		}

		::System::Int32 get_ChapterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GET_CHAPTERCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>* GetStageNodesByChapterID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightStageNode*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETSTAGENODESBYCHAPTERID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightStageNode* GetNode(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightStageNode*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGEROUTE_GETNODE_OFFSET))(this, a1, a2);
		}
	};
}
