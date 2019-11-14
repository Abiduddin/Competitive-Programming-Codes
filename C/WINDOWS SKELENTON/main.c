#include <windows.h>

LRESULT CALLBACK WindowFunc(HWND,UINT,WPARAM,LPARAM);

char szWinName[]="MyWin";      //name of window class

int WINAPI WinMain(HINSTANCE hThisInst, HINSTANCE hPrevInst, LPSTR lpszargs, int nWinMode)
{
    HWND hwnd;
    MSG msg;
    WNDCLASSEX wcl;

    //define a window class
    wcl.cbSize=sizeof(WNDCLASSEX); //size of WNDCLASSEX
    wcl.hInstance=hThisInst;   //handle to this instance
    wcl.lpszClassName=szWinName;  //window class name
    wcl.lpfnWndProc=WindowFunc;    //window function
    wcl.style=0;       //default style
    wcl.hIcon=LoadIcon(NULL,IDI_APPLICATION);    //icon style
    wcl.hIconSm=LoadIcon(NULL,IDI_WINLOGO);    //small icon style
    wcl.hCursor=LoadCursor(NULL,IDC_ARROW);    //cursor style
    wcl.lpszMenuName=NULL;      //no menu
    wcl.cbClsExtra=0;    //no extra
    wcl.cbWndExtra=0;    //information needed

    //make the window background white

    wcl.hbrBackground=(HBRUSH) GetStockObject(WHITE_BRUSH);

    //register the window class
    if(!RegisterClassEx(&wcl)) return 0;

    //now that a window class has been registered, a window can be created
    hwnd=CreateWindow(szWinName,/*name of window class)*/"windows Skeleton",/*title*/WS_OVERLAPPEDWINDOW,/*window style-normal*/CW_USEDEFAULT,/*X coordinate-let window decide*/CW_USEDEFAULT,/*Y coordinate-let window decide*/CW_USEDEFAULT,/*width-let window decide*/CW_USEDEFAULT,/*height_let window decide*/HWND_DESKTOP,/*no parent window*/NULL,/*no menu*/hThisInst,/*handle of this instance of the program*/NULL);

    /*Display the window*/
    ShowWindow(hwnd,nWinMode);
    UpdateWindow(hwnd);

    //create the message
    while(GetMessage(&msg,NULL,0,0))
    {
        TranslateMessage(&msg);      //translate keyboard message
        DispatchMessage(&msg);       //return control to window
    }
    return msg.wParam;


}

//This function is called by Windows and is passed message from the message queue
LRESULT CALLBACK WindowFunc(HWND hwnd,UINT message,WPARAM wParam,LPARAM lParam)
{
    switch(message)
    {
        case WM_DESTROY:   //terminate the program
            PostQuitMessage(0);
            break;
        default:
            //let window process any message not specified in the preceding switch statement
            return DefWindowProc(hwnd,message,wParam,lParam);
    }
    return 0;
}
