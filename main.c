#include "cimgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <GLFW/glfw3.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

void On_button_9c89_Clicked(void) {
    printf("%s\n", "Hello");
    for (int i = 0; i < 0; i++) {
        int _t0 = On_Clicked__Button_();
    }
    int _t1 = On_Clicked__Button_();
}

void OnStart(void) {
    int _t2 = On_Clicked__Button_();
}

int main(void) {
    if (!glfwInit()) return 1;
    GLFWwindow* window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "C-Builder App", NULL, NULL);
    if (!window) { glfwTerminate(); return 1; }
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);

    igCreateContext(NULL);
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init("#version 130");

    OnStart();

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        igNewFrame();

        if (igButton("Button", (ImVec2){100, 40})) {
            On_button_9c89_Clicked();
        }

        igRender();
        ImGui_ImplOpenGL3_RenderDrawData(igGetDrawData());
        glfwSwapBuffers(window);
    }

    return 0;
}