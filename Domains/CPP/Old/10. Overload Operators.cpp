Complex operator+(Complex lhs, const Complex rhs)
{
    Complex _result;
    _result.a = lhs.a + rhs.a;
    _result.b = lhs.b + rhs.b;
    return _result;
}

std::ostream& operator<<(std::ostream& os, const Complex& obj)
{
    os << obj.a << "+i" << obj.b;
    return os;
}
