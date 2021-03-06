/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcFlowStorageDeviceType.h"
class IFCPP_EXPORT IfcElectricFlowStorageDeviceTypeEnum;
//ENTITY
class IFCPP_EXPORT IfcElectricFlowStorageDeviceType : public IfcFlowStorageDeviceType
{ 
public:
	IfcElectricFlowStorageDeviceType();
	IfcElectricFlowStorageDeviceType( int id );
	~IfcElectricFlowStorageDeviceType();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 10; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcElectricFlowStorageDeviceType"; }


	// IfcRoot -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcGloballyUniqueId>						m_GlobalId;
	//  shared_ptr<IfcOwnerHistory>							m_OwnerHistory;				//optional
	//  shared_ptr<IfcLabel>								m_Name;						//optional
	//  shared_ptr<IfcText>									m_Description;				//optional

	// IfcObjectDefinition -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcRelAssigns> >				m_HasAssignments_inverse;
	//  std::vector<weak_ptr<IfcRelNests> >					m_Nests_inverse;
	//  std::vector<weak_ptr<IfcRelNests> >					m_IsNestedBy_inverse;
	//  std::vector<weak_ptr<IfcRelDeclares> >				m_HasContext_inverse;
	//  std::vector<weak_ptr<IfcRelAggregates> >			m_IsDecomposedBy_inverse;
	//  std::vector<weak_ptr<IfcRelAggregates> >			m_Decomposes_inverse;
	//  std::vector<weak_ptr<IfcRelAssociates> >			m_HasAssociations_inverse;

	// IfcTypeObject -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcIdentifier>							m_ApplicableOccurrence;		//optional
	//  std::vector<shared_ptr<IfcPropertySetDefinition> >	m_HasPropertySets;			//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcRelDefinesByType> >			m_Types_inverse;

	// IfcTypeProduct -----------------------------------------------------------
	// attributes:
	//  std::vector<shared_ptr<IfcRepresentationMap> >		m_RepresentationMaps;		//optional
	//  shared_ptr<IfcLabel>								m_Tag;						//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcRelAssignsToProduct> >		m_ReferencedBy_inverse;

	// IfcElementType -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>								m_ElementType;				//optional

	// IfcDistributionElementType -----------------------------------------------------------

	// IfcDistributionFlowElementType -----------------------------------------------------------

	// IfcFlowStorageDeviceType -----------------------------------------------------------

	// IfcElectricFlowStorageDeviceType -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcElectricFlowStorageDeviceTypeEnum>	m_PredefinedType;
};

