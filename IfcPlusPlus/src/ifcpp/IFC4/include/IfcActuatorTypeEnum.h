/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcActuatorTypeEnum = ENUMERATION OF	(ELECTRICACTUATOR	,HANDOPERATEDACTUATOR	,HYDRAULICACTUATOR	,PNEUMATICACTUATOR	,THERMOSTATICACTUATOR	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcActuatorTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcActuatorTypeEnumEnum
	{
		ENUM_ELECTRICACTUATOR,
		ENUM_HANDOPERATEDACTUATOR,
		ENUM_HYDRAULICACTUATOR,
		ENUM_PNEUMATICACTUATOR,
		ENUM_THERMOSTATICACTUATOR,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcActuatorTypeEnum();
	IfcActuatorTypeEnum( IfcActuatorTypeEnumEnum e ) { m_enum = e; }
	~IfcActuatorTypeEnum();
	virtual const char* className() const { return "IfcActuatorTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcActuatorTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcActuatorTypeEnumEnum m_enum;
};

