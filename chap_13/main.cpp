namespace A::B::C {
    int f() { return 0 ; }
}

int main()
{
    namespace D = A::B::C ;
    // DはA::B::Cのエイリアス
    D::f() ;
}