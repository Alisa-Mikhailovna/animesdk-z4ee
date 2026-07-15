#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FixedArray2_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointEdge.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointType.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6DD940)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Joint_TypeDefinitionIndex = 35145;

	class B2Joint : public ::System::Object
	{
	public:
		::System::Object* userData; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray2_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointEdge> edges; // 0x18
		::System::Boolean isMarked; // 0x30
		::System::Boolean collideConnected; // 0x31
		::System::UInt16 generation; // 0x32
		::System::Int32 islandPrev; // 0x34
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointType type; // 0x38
		::System::Int32 setIndex; // 0x3C
		::System::Int32 islandNext; // 0x40
		::System::Single drawScale; // 0x44
		::System::Int32 jointId; // 0x48
		::System::Int32 islandId; // 0x4C
		::System::Int32 colorIndex; // 0x50
		::System::Int32 localIndex; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINT__CTOR_OFFSET))(this);
		}
	};
}
