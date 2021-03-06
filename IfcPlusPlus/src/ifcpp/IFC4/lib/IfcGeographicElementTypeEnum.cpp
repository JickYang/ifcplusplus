/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcGeographicElementTypeEnum.h"

// TYPE IfcGeographicElementTypeEnum = ENUMERATION OF	(TERRAIN	,USERDEFINED	,NOTDEFINED);
IfcGeographicElementTypeEnum::IfcGeographicElementTypeEnum() {}
IfcGeographicElementTypeEnum::~IfcGeographicElementTypeEnum() {}
shared_ptr<IfcPPObject> IfcGeographicElementTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcGeographicElementTypeEnum> copy_self( new IfcGeographicElementTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcGeographicElementTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCGEOGRAPHICELEMENTTYPEENUM("; }
	if( m_enum == ENUM_TERRAIN )
	{
		stream << ".TERRAIN.";
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
shared_ptr<IfcGeographicElementTypeEnum> IfcGeographicElementTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcGeographicElementTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcGeographicElementTypeEnum>(); }
	shared_ptr<IfcGeographicElementTypeEnum> type_object( new IfcGeographicElementTypeEnum() );
	if( boost::iequals( arg, L".TERRAIN." ) )
	{
		type_object->m_enum = IfcGeographicElementTypeEnum::ENUM_TERRAIN;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcGeographicElementTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcGeographicElementTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
