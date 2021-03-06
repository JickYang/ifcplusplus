/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcStructuralLoadOrResult.h"

// ENTITY IfcStructuralLoadOrResult 
IfcStructuralLoadOrResult::IfcStructuralLoadOrResult() {}
IfcStructuralLoadOrResult::IfcStructuralLoadOrResult( int id ) { m_id = id; }
IfcStructuralLoadOrResult::~IfcStructuralLoadOrResult() {}
shared_ptr<IfcPPObject> IfcStructuralLoadOrResult::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcStructuralLoadOrResult> copy_self( new IfcStructuralLoadOrResult() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	return copy_self;
}
void IfcStructuralLoadOrResult::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCSTRUCTURALLOADORRESULT" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ");";
}
void IfcStructuralLoadOrResult::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcStructuralLoadOrResult::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcStructuralLoadOrResult, expecting 1, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
}
void IfcStructuralLoadOrResult::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcStructuralLoad::getAttributes( vec_attributes );
}
void IfcStructuralLoadOrResult::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcStructuralLoad::getAttributesInverse( vec_attributes_inverse );
}
void IfcStructuralLoadOrResult::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcStructuralLoad::setInverseCounterparts( ptr_self_entity );
}
void IfcStructuralLoadOrResult::unlinkFromInverseCounterparts()
{
	IfcStructuralLoad::unlinkFromInverseCounterparts();
}
