
#pragma once

#include "Sprite.h"
#include "Transform2D.h"
#include <string>

class GameObject
{
protected:
	Transform2D m_transform;
	Sprite m_sprite;

public:
	std::string name;

	GameObject();
	GameObject(Sprite& sprite);
	~GameObject();

	Transform2D GetTransform() { return m_transform; };
	void SetTransform(Transform2D transform);
	void SetTransform(Vector2 position, Vector2 scale, float rotation);

	Vector2 GetPosition() { return m_transform.position; };
	void SetPosition(Vector2 position);

	Vector2 GetScale() { return m_transform.scale; };
	void SetScale(Vector2 scale);

	float GetRotation() { return m_transform.rotation; };
	void SetRotation(float rotation);

	Vector2 RotateStartBound(float rotation, Vector2 halfSize, Vector2 startBound);
	Vector2 RotateEndBound(float rotation, Vector2 halfSize, Vector2 endBound);

	Vector2 GetHalfSize() { return m_transform.halfSize; };
	void SetHalfSize(Vector2 size);

	Vector2 GetBoundStart();
	void SetBoundStart(Vector2 startBound);

	Vector2 GetBoundEnd();
	void SetBoundEnd(Vector2 endBound);

	Vector2 GetAcceleration() { return m_transform.acceleration; };
	void SetAcceleration(Vector2 acceleration);

	Vector2 GetVelocity() { return m_transform.velocity; };
	void SetVelocity(Vector2 velocity);

	Sprite& GetSprite() { return m_sprite; };
	void SetSprite(Sprite& sprite);

	void Start();
	void Update(float deltaTime);
	void Draw();
};

