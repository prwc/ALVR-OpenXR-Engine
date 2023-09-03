#version 460
#extension GL_ARB_separate_shader_objects : enable
#extension GL_ARB_shading_language_420pack : enable
#ifdef ENABLE_MULTIVEW_EXT
    #extension GL_EXT_multiview : enable
#endif
#pragma vertex

#ifndef ENABLE_MULTIVEW_EXT
layout (std140, push_constant) uniform buf
{
    uint ViewID;
} ubuf;
#endif

#ifdef ENABLE_MULTIVEW_EXT
    #define VS_GET_VIEW_INDEX() gl_ViewIndex
#else
    #define VS_GET_VIEW_INDEX() ubuf.ViewID
#endif

// screen--space triangle
const vec2 TrianglePositions[3] = vec2[](
    vec2(-1.0f, -1.0f),
    vec2(3.0f, -1.0f),
    vec2(-1.0f, 3.0f)
);

const vec2 UVs[2][3] = vec2[][](
    vec2[](
        vec2(0.0f, 0.0f),
        vec2(1.0f, 0.0f),
        vec2(0.0f, 2.0f)
    ),
    vec2[](
        vec2(0.5f, 0.0f),
        vec2(1.5f, 0.0f),
        vec2(0.5f, 2.0f)
    )
);

layout (location = 0) out vec2 outUV;            
out gl_PerVertex
{
    vec4 gl_Position;
};

void main()
{
    outUV = UVs[VS_GET_VIEW_INDEX()][gl_VertexIndex];
    gl_Position = vec4(TrianglePositions[gl_VertexIndex], 0.0, 1.0);
}
