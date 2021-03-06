/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcSpaceHeaterTypeEnum.h"

// TYPE IfcSpaceHeaterTypeEnum = ENUMERATION OF	(CONVECTOR	,RADIATOR	,USERDEFINED	,NOTDEFINED);
IfcSpaceHeaterTypeEnum::IfcSpaceHeaterTypeEnum() {}
IfcSpaceHeaterTypeEnum::~IfcSpaceHeaterTypeEnum() {}
shared_ptr<IfcPPObject> IfcSpaceHeaterTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcSpaceHeaterTypeEnum> copy_self( new IfcSpaceHeaterTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcSpaceHeaterTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSPACEHEATERTYPEENUM("; }
	if( m_enum == ENUM_CONVECTOR )
	{
		stream << ".CONVECTOR.";
	}
	else if( m_enum == ENUM_RADIATOR )
	{
		stream << ".RADIATOR.";
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
shared_ptr<IfcSpaceHeaterTypeEnum> IfcSpaceHeaterTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSpaceHeaterTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSpaceHeaterTypeEnum>(); }
	shared_ptr<IfcSpaceHeaterTypeEnum> type_object( new IfcSpaceHeaterTypeEnum() );
	if( boost::iequals( arg, L".CONVECTOR." ) )
	{
		type_object->m_enum = IfcSpaceHeaterTypeEnum::ENUM_CONVECTOR;
	}
	else if( boost::iequals( arg, L".RADIATOR." ) )
	{
		type_object->m_enum = IfcSpaceHeaterTypeEnum::ENUM_RADIATOR;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcSpaceHeaterTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcSpaceHeaterTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
