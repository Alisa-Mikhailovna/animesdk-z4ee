#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Filter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeUnion.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F1070)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Shape_TypeDefinitionIndex = 35213;

	class B2Shape : public ::System::Object
	{
	public:
		::System::Object* userData; // 0x10
		::System::Int32 nextShapeId; // 0x18
		::System::Single density; // 0x1C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter filter; // 0x20
		::System::Single restitution; // 0x38
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB fatAABB; // 0x3C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 localCentroid; // 0x4C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB aabb; // 0x54
		::System::Int32 prevShapeId; // 0x64
		::System::Int32 proxyKey; // 0x68
		::System::Single tangentSpeed; // 0x6C
		::System::Boolean enableContactEvents; // 0x70
		::System::Boolean enlargedAABB; // 0x71
		::System::Boolean enablePreSolveEvents; // 0x72
		::System::Boolean enableHitEvents; // 0x73
		::System::Int32 id; // 0x74
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeUnion us; // 0x78
		::System::UInt32 customColor; // 0x108
		::System::Int32 bodyId; // 0x10C
		::System::Int32 userMaterialId; // 0x110
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeType type; // 0x114
		::System::Single rollingResistance; // 0x118
		::System::Boolean enableSensorEvents; // 0x11C
		::System::UInt16 generation; // 0x11E
		::System::Single friction; // 0x120
		::System::Int32 sensorIndex; // 0x124

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPE__CTOR_OFFSET))(this);
		}
	};
}
