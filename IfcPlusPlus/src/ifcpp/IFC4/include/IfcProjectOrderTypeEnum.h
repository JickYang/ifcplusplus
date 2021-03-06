/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcProjectOrderTypeEnum = ENUMERATION OF	(CHANGEORDER	,MAINTENANCEWORKORDER	,MOVEORDER	,PURCHASEORDER	,WORKORDER	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcProjectOrderTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcProjectOrderTypeEnumEnum
	{
		ENUM_CHANGEORDER,
		ENUM_MAINTENANCEWORKORDER,
		ENUM_MOVEORDER,
		ENUM_PURCHASEORDER,
		ENUM_WORKORDER,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcProjectOrderTypeEnum();
	IfcProjectOrderTypeEnum( IfcProjectOrderTypeEnumEnum e ) { m_enum = e; }
	~IfcProjectOrderTypeEnum();
	virtual const char* className() const { return "IfcProjectOrderTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcProjectOrderTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcProjectOrderTypeEnumEnum m_enum;
};

