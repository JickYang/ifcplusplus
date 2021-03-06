/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcConnectedFaceSet.h"
#include "ifcpp/IFC4/include/IfcFaceBasedSurfaceModel.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcFaceBasedSurfaceModel 
IfcFaceBasedSurfaceModel::IfcFaceBasedSurfaceModel() {}
IfcFaceBasedSurfaceModel::IfcFaceBasedSurfaceModel( int id ) { m_id = id; }
IfcFaceBasedSurfaceModel::~IfcFaceBasedSurfaceModel() {}
shared_ptr<IfcPPObject> IfcFaceBasedSurfaceModel::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcFaceBasedSurfaceModel> copy_self( new IfcFaceBasedSurfaceModel() );
	for( size_t ii=0; ii<m_FbsmFaces.size(); ++ii )
	{
		auto item_ii = m_FbsmFaces[ii];
		if( item_ii )
		{
			copy_self->m_FbsmFaces.push_back( dynamic_pointer_cast<IfcConnectedFaceSet>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcFaceBasedSurfaceModel::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCFACEBASEDSURFACEMODEL" << "(";
	writeEntityList( stream, m_FbsmFaces );
	stream << ");";
}
void IfcFaceBasedSurfaceModel::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcFaceBasedSurfaceModel::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcFaceBasedSurfaceModel, expecting 1, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReferenceList( args[0], m_FbsmFaces, map );
}
void IfcFaceBasedSurfaceModel::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcGeometricRepresentationItem::getAttributes( vec_attributes );
	if( m_FbsmFaces.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> FbsmFaces_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_FbsmFaces.begin(), m_FbsmFaces.end(), std::back_inserter( FbsmFaces_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "FbsmFaces", FbsmFaces_vec_object ) );
	}
}
void IfcFaceBasedSurfaceModel::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcGeometricRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcFaceBasedSurfaceModel::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcFaceBasedSurfaceModel::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationItem::unlinkFromInverseCounterparts();
}
