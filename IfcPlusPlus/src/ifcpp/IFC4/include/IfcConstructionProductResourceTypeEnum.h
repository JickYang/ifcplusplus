/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcConstructionProductResourceTypeEnum = ENUMERATION OF	(ASSEMBLY	,FORMWORK	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcConstructionProductResourceTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcConstructionProductResourceTypeEnumEnum
	{
		ENUM_ASSEMBLY,
		ENUM_FORMWORK,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcConstructionProductResourceTypeEnum();
	IfcConstructionProductResourceTypeEnum( IfcConstructionProductResourceTypeEnumEnum e ) { m_enum = e; }
	~IfcConstructionProductResourceTypeEnum();
	virtual const char* className() const { return "IfcConstructionProductResourceTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcConstructionProductResourceTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcConstructionProductResourceTypeEnumEnum m_enum;
};

