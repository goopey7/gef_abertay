#pragma once
#include <system/platform.h>

namespace gef
{
    class Window;
    class Mesh;
    class VertexBuffer;
    class IndexBuffer;
    class DepthBuffer;
    
    class PlatformVulkan : public Platform
    {
    public:
        PlatformVulkan();
        ~PlatformVulkan() override;

        void Resize(uint32_t width, uint32_t height){}
        void SetFullscreen(bool value) override{}
        bool Fullscreen() override{return false;}
    	
		Renderer3D* CreateRenderer3D(){return nullptr;}
		SpriteRenderer* CreateSpriteRenderer(){return nullptr;}
		InputManager* CreateInputManager(){return nullptr;}
    	
		Matrix44 PerspectiveProjectionFov(const float fov, const float aspect_ratio, const float near_distance, const float far_distance) const{return NULL;}
		Matrix44 PerspectiveProjectionFrustum(const float left, const float right, const float top, const float bottom, const float near_distance, const float far_distance) const{return NULL;}
		Matrix44 OrthographicFrustum(const float left, const float right, const float top, const float bottom, const float near_distance, const float far_distance) const{return NULL;}
    	
		void Clear(const bool clear_render_target, const bool clear_depth_buffer, const bool clear_stencil_buffer) const override{}
    	
		void BeginScene() const{}
		void EndScene() const{}
    	
		void PreRender(){}
		void PostRender(){}
    	
		bool Update(){return true;}
		float GetFrameTime(){return 0.f;}
		std::string FormatFilename(const std::string& filename) const{return "";}
		std::string FormatFilename(const char* filename) const{return "";}
		const char* GetShaderDirectory() const{return "";}
		const char* GetShaderFileExtension() const{return "";}

    private:
    };
}
