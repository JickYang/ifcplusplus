/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcBuildingElementProxyTypeEnum.h"

// TYPE IfcBuildingElementProxyTypeEnum = ENUMERATION OF	(COMPLEX	,ELEMENT	,PARTIAL	,PROVISIONFORVOID	,PROVISIONFORSPACE	,USERDEFINED	,NOTDEFINED);
IfcBuildingElementProxyTypeEnum::IfcBuildingElementProxyTypeEnum() {}
IfcBuildingElementProxyTypeEnum::~IfcBuildingElementProxyTypeEnum() {}
shared_ptr<IfcPPObject> IfcBuildingElementProxyTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcBuildingElementProxyTypeEnum> copy_self( new IfcBuildingElementProxyTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcBuildingElementProxyTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCBUILDINGELEMENTPROXYTYPEENUM("; }
	if( m_enum == ENUM_COMPLEX )
	{
		stream << ".COMPLEX.";
	}
	else if( m_enum == ENUM_ELEMENT )
	{
		stream << ".ELEMENT.";
	}
	else if( m_enum == ENUM_PARTIAL )
	{
		stream << ".PARTIAL.";
	}
	else if( m_enum == ENUM_PROVISIONFORVOID )
	{
		stream << ".PROVISIONFORVOID.";
	}
	else if( m_enum == ENUM_PROVISIONFORSPACE )
	{
		stream << ".PROVISIONFORSPACE.";
	}
	else if( m_enum == ENUM_USERDEFINED )
	{
		stream << ".USERDEFINED.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcBuildingElementProxyTypeEnum> IfcBuildingElementProxyTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcBuildingElementProxyTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcBuildingElementProxyTypeEnum>(); }
	shared_ptr<IfcBuildingElementProxyTypeEnum> type_object( new IfcBuildingElementProxyTypeEnum() );
	if( boost::iequals( arg, L".COMPLEX." ) )
	{
		type_object->m_enum = IfcBuildingElementProxyTypeEnum::ENUM_COMPLEX;
	}
	else if( boost::iequals( arg, L".ELEMENT." ) )
	{
		type_object->m_enum = IfcBuildingElementProxyTypeEnum::ENUM_ELEMENT;
	}
	else if( boost::iequals( arg, L".PARTIAL." ) )
	{
		type_object->m_enum = IfcBuildingElementProxyTypeEnum::ENUM_PARTIAL;
	}
	else if( boost::iequals( arg, L".PROVISIONFORVOID." ) )
	{
		type_object->m_enum = IfcBuildingElementProxyTypeEnum::ENUM_PROVISIONFORVOID;
	}
	else if( boost::iequals( arg, L".PROVISIONFORSPACE." ) )
	{
		type_object->m_enum = IfcBuildingElementProxyTypeEnum::ENUM_PROVISIONFORSPACE;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcBuildingElementProxyTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcBuildingElementProxyTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
