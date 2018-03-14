static int studentCounter = 1;
static int professorCounter = 1;

class Person
{
public:
    virtual void getdata()
    {
        cin >> m_name >> m_age;
    }
    virtual void putdata()
    {
        cout << m_name << " " << m_age << " ";
    }
private:
    string m_name;
    int m_age;
};

class Student : public Person
{
public:
    void getdata() override
    {
        m_id = studentCounter;
        studentCounter++;
        m_marks = 0;
        Person::getdata();
        int temp;
        for (int i = 0; i < 6; i++)
        {
            cin >> temp;
            m_marks += temp;
        }
    }
    void putdata() override
    {
        Person::putdata();
        cout << m_marks << " ";
        cout << m_id << '\n';
    }
private:
    int m_id;
    int m_marks;
};

class Professor : public Person
{
public:
    void getdata() override
    {
        m_id = professorCounter;
        professorCounter++;
        Person::getdata();
        cin >> m_publications;
    }
    void putdata() override
    {
        Person::putdata();
        cout << m_publications << " ";
        cout << m_id << '\n';
    }
private:
    int m_id;
    int m_publications;
};
