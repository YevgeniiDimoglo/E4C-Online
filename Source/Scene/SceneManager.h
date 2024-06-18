#pragma once

#include "Scene.h"

class SceneManager
{
private:
	SceneManager() {}
	~SceneManager() {}
public:
	// �B��̃C���X�^���X�擾
	static SceneManager& Instance()
	{
		static SceneManager instance;
		return instance;
	}
	// �X�V����
	void Update(float elapsedTime);
	// �`�揈��
	void Render();
	void RenderDX12();
	// �V�[���N���A
	void Clear();
	// �V�[���؂�ւ�
	void ChangeScene(Scene* scene);
private:
	Scene* currentScene = nullptr;
	Scene* nextScene = nullptr;
};