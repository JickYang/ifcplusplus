/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcCurtainWallTypeEnum = ENUMERATION OF	(USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcCurtainWallTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcCurtainWallTypeEnumEnum
	{
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcCurtainWallTypeEnum();
	IfcCurtainWallTypeEnum( IfcCurtainWallTypeEnumEnum e ) { m_enum = e; }
	~IfcCurtainWallTypeEnum();
	virtual const char* className() const { return "IfcCurtainWallTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcCurtainWallTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcCurtainWallTypeEnumEnum m_enum;
};

