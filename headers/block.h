#ifndef _BLOCK_H
#define _BLOCK_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <fstream>
#include <iostream>
#include <vector>

#include <glm/glm.hpp>
#include <glm/mat4x4.hpp>
#include <glm/detail/type_mat4x4.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

using std::vector;



class block{
public:
                            block(unsigned int,int,const char*);
                            ~block();

    void                    Display();
    void                    setFinalBuffer();
    void                    setMultiplePositions(vector<glm::vec3>&);
    void                    multipleRendering();

private:
    void                    loadFromFile(const char*);

    unsigned int            VAO,VBO,EBO;
    int                     shaderProgram;
    unsigned int            texture;

    int                     n;
    vector<float>           vertexData;
    vector<float>           vertexNormals;
    vector<float>           texCord;

    int                     nIndex;
    vector<unsigned int>    indexData;

    vector<float>           finalBuffer;


    unsigned int            modelMatLoc;
    vector<glm::vec3>       multipleRenderingPositions;


};

#endif