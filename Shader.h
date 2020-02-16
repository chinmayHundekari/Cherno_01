#pragma once

#include <string>
class Shader
{
private:
	unsigned int m_RendererID;
	unsigned int GetUniformLocation(const std::string& name);
public:
	Shader(const std::string& filepath);
	~Shader();

	void Bind() const;
	void Unbind() const;
	bool CompileShader();
	void SetUniform4f(const std::string& name, float v0, float v1, float f2, float f3);

};