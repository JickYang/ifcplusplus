/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcFastenerTypeEnum = ENUMERATION OF	(GLUE	,MORTAR	,WELD	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcFastenerTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcFastenerTypeEnumEnum
	{
		ENUM_GLUE,
		ENUM_MORTAR,
		ENUM_WELD,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcFastenerTypeEnum();
	IfcFastenerTypeEnum( IfcFastenerTypeEnumEnum e ) { m_enum = e; }
	~IfcFastenerTypeEnum();
	virtual const char* className() const { return "IfcFastenerTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcFastenerTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcFastenerTypeEnumEnum m_enum;
};

