#include <stdio.h>
#include <GL/gl.h>
#include <X11/Xlib.h>
#include <GL/glx.h>

int main()
{
	printf("GL_VERSION_1_1=%d\n", GL_VERSION_1_1);

	Display *dpy = XOpenDisplay(NULL);
	int screen = DefaultScreen(dpy);

	static int attr[] = { GLX_RGBA, GLX_DEPTH_SIZE, 24, GLX_DOUBLEBUFFER, None };
	XVisualInfo *vi = glXChooseVisual(dpy, screen, attr);

	GLXContext ctx = glXCreateContext(dpy, vi, NULL, GL_TRUE);
	glXMakeCurrent(dpy, RootWindow(dpy, vi->screen), ctx);

	const GLubyte *version = glGetString(GL_VERSION);
	const GLubyte *renderer = glGetString(GL_RENDERER);
	const GLubyte *vendor = glGetString(GL_VENDOR);

	printf("GL_VERSION : %s\n", version);
	printf("GL_RENDERER: %s\n", renderer);
	printf("GL_VENDOR  : %s\n", vendor);

	return 0;
}

