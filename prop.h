#include "raylib.h"

class Prop
{
public:
    Prop(Vector2 pos, Texture2D tex);
    void Render(Vector2 knightPos);
    Rectangle GetCollisionRec(Vector2 knightPos);

private:
    Texture2D texture{};
    Vector2 worldPos{};
    float scale{4.0f};
};