#ifndef STUDENT_H
#define STUDENT_H

class  Student {
public:
    int mAge;
    const char *mName;

public:
    void setName(const char *name);

    __attribute__((visibility("default")))void setAge(int age);

    __attribute__((visibility("default")))  int getAge();

    const char *getName();
};


#endif // STUDENT_H
