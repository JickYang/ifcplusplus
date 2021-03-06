/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"

// TYPE IfcGloballyUniqueId = STRING(22) FIXED;
IfcGloballyUniqueId::IfcGloballyUniqueId() {}
IfcGloballyUniqueId::IfcGloballyUniqueId( std::wstring value ) { m_value = value; }
IfcGloballyUniqueId::~IfcGloballyUniqueId() {}
shared_ptr<IfcPPObject> IfcGloballyUniqueId::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcGloballyUniqueId> copy_self( new IfcGloballyUniqueId() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcGloballyUniqueId::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCGLOBALLYUNIQUEID("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcGloballyUniqueId> IfcGloballyUniqueId::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcGloballyUniqueId>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcGloballyUniqueId>(); }
	shared_ptr<IfcGloballyUniqueId> type_object( new IfcGloballyUniqueId() );
	readString( arg, type_object->m_value );
	return type_object;
}
