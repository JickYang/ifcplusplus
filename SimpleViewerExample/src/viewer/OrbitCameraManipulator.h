/* -*-c++-*- IFC++ www.ifcquery.com
*
MIT License

Copyright (c) 2017 Fabian Gerold

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#pragma once

#include <osg/ShapeDrawable>
#include <osgGA/StandardManipulator>
#include <osgViewer/Viewer>

class IfcPlusPlusSystem;

/** OrbitCameraManipulator is a camera controller based on eye, lookat, up and rotation center. */
class OrbitCameraManipulator : public osgGA::StandardManipulator
{
public:
	OrbitCameraManipulator( IfcPlusPlusSystem* sys, int flags = UPDATE_MODEL_SIZE | COMPUTE_HOME_USING_BBOX | PROCESS_MOUSE_WHEEL );
	OrbitCameraManipulator( const OrbitCameraManipulator& om, const osg::CopyOp& copyOp = osg::CopyOp::SHALLOW_COPY );

	// inherited from osg::Object
	virtual osg::Object* cloneType() const { return new OrbitCameraManipulator( m_system ); }
	virtual osg::Object* clone( const osg::CopyOp& copyop ) const { return new OrbitCameraManipulator( *this, copyop ); }
	virtual bool isSameKindAs( const osg::Object* obj ) const { return dynamic_cast<const OrbitCameraManipulator*>( obj )!=nullptr; }
	virtual const char* libraryName() const { return ""; }
    virtual const char* className() const { return "OrbitCameraManipulator"; }

	// inherited from osgGA::CameraManipulator
    virtual void setByMatrix( const osg::Matrixd& matrix );
    virtual void setByInverseMatrix( const osg::Matrixd& matrix );
    virtual osg::Matrixd getMatrix() const;
    virtual osg::Matrixd getInverseMatrix() const;
    virtual osgUtil::SceneView::FusionDistanceMode getFusionDistanceMode() const;
    virtual float getFusionDistanceValue() const;

	// inherited from osgGA::StandardManipulator
	virtual void setTransformation( const osg::Vec3d& eye, const osg::Quat& rotation );
    virtual void setTransformation( const osg::Vec3d& eye, const osg::Vec3d& lookat, const osg::Vec3d& up );
    virtual void getTransformation( osg::Vec3d& eye, osg::Quat& rotation ) const;
    virtual void getTransformation( osg::Vec3d& eye, osg::Vec3d& lookat, osg::Vec3d& up ) const;
		
	virtual bool handle(				const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa );
	virtual bool handleFrame(			const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa );
	virtual bool handleMouseMove(		const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa );
	virtual bool handleMousePush(		const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa );
	virtual bool handleMouseRelease(	const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa );
	virtual bool handleMouseWheel(		const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa );
	virtual bool handleMouseDrag(		const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa );
	virtual bool handleKeyDown(			const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa );
    virtual bool performMouseDeltaMovement( const float dx, const float dy );
    virtual void applyAnimationStep( const double currentProgress, const double prevProgress );
	virtual void setAnimationTime( const double t );
	virtual bool performAnimationMovement( const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa );
	virtual bool isAnimating() const;

	class OrbitAnimationData : public AnimationData
	{
    public:
		OrbitAnimationData();
        osg::Vec3d m_start_eye;
		osg::Vec3d m_start_lookat;
		osg::Vec3d m_start_up;
		osg::Vec3d m_target_eye;
		osg::Vec3d m_target_lookat;
		osg::Vec3d m_target_up;
		void start( const double startTime );
    };

	// own methods
	void initManipulator();
    void setWheelZoomFactor( double wheelZoomFactor );
    double getWheelZoomFactor() const { return m_wheel_zoom_factor; };
	bool intersectSceneRotateCenter( const osgGA::GUIEventAdapter& ea, osgViewer::View* view );
	bool intersectSceneSelect( const osgGA::GUIEventAdapter& ea, osgViewer::View* view );
	bool performMovement( const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa );
    double getMinimumDistance( bool *relativeToModelSize = nullptr ) const;
	void setMinimumDistance( const double& minimumDistance, bool relativeToModelSize = false );
	void panCamera( const float dx, const float dy, const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa );//const float dx, const float dy, const float dz = 0.f );
    void zoomCamera( const float dy );
	void rotateCamera( const float dx, const float dy );
	void computeRayPointer( const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa );
	void zoomToBoundingSphere( const osg::BoundingSphere& bs, double ratio_w = 1.0 );
	OrbitAnimationData* getOrbitAnimationData() { return m_animation_data.get(); }
        
	osg::Vec3d	m_eye;
	osg::Vec3d	m_lookat;
	osg::Vec3d	m_up;
	osg::Vec3d	m_rotate_center;
	osg::Vec3d	m_ray_pointer_direction;
	osg::Vec3d	m_ray_pointer_start;
	osg::Vec3d	m_pointer_intersection;
	osg::Matrix	m_model_screen;
	osg::Matrix m_screen_model;
	osg::Vec3d	m_pan_point;

	osg::ref_ptr<const osgGA::GUIEventAdapter > m_ga_pointer_push;
	bool		m_pointer_push_drag;
	bool		m_control_key_down;
	bool		m_intersect_hit_geometry;
	double		m_fovy;
    double		m_wheel_zoom_factor;
    double		m_minimum_distance;
    static int	m_minimum_distance_flag_index;
	osg::ref_ptr<OrbitAnimationData> 	m_animation_data;
	IfcPlusPlusSystem*	m_system;
};
