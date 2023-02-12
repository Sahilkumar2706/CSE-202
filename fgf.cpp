#include <iostream>
    using namespace std;
    template <class T>
    class XYZ
    {
        public:
        void putPri();
        static T ipub;
        private:
        static T ipri; 
    };
    template <class T>
    void XYZ<T>::putPri()
    {
        cout << ipri++ << endl;
    }
    template <class T> T XYZ<T>::ipub = 1;
    template <class T> T XYZ<T>::ipri = 1.2;
    int main()
    {
        XYZ<int> a;
        XYZ<float> b;
        a.putPri();
        cout << a.ipub << endl;
        b.putPri();
    }
