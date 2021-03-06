#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class TerrainApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void TerrainApp::setup()
{
}

void TerrainApp::mouseDown( MouseEvent event )
{
}

void TerrainApp::update()
{
}

void TerrainApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( TerrainApp, RendererGl )
