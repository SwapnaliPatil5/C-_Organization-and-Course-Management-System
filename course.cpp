#include <iostream>
#include <string>

class CDAC {
protected:
    std::string organizationName;

public:
    CDAC(const std::string& orgName) : organizationName(orgName) {}

    std::string getOrganizationName() const {
        return organizationName;
    }
};

class CDACMumbai : public CDAC {
protected:
    std::string location;

public:
    CDACMumbai(const std::string& orgName, const std::string& loc) : CDAC(orgName), location(loc) {}

    std::string getLocation() const {
        return location;
    }
};

class CDACKharghar : public CDACMumbai {
protected:
    std::string centerName;

public:
    CDACKharghar(const std::string& orgName, const std::string& loc, const std::string& center)
        : CDACMumbai(orgName, loc), centerName(center) {}

    std::string getCenterName() const {
        return centerName;
    }
};

class PGDAC : public CDACKharghar {
protected:
    std::string courseName;

public:
    PGDAC(const std::string& orgName, const std::string& loc, const std::string& center, const std::string& course)
        : CDACKharghar(orgName, loc, center), courseName(course) {}

    std::string getCourseName() const {
        return courseName;
    }
};

int main() {
    std::string organizationName, location, centerName, courseName;

    // Input organization details
     std::cout << "Organization: ";
  std::cin  >> organizationName;
  std::cout << "Location: ";
  std::cin  >> location;
   std::cout << "Center: ";
 std::cin  >> centerName;
   std::cout << "Course: " ;
   std::cin  >> courseName;
   
    

    // Create an instance of PGDAC
    PGDAC pgdacInstance(organizationName, location, centerName, courseName);

    // Display organization details
    std::cout << "Organization: " << pgdacInstance.getOrganizationName() << std::endl;
    std::cout << "Location: " << pgdacInstance.getLocation() << std::endl;
    std::cout << "Center: " << pgdacInstance.getCenterName() << std::endl;
    std::cout << "Course: " << pgdacInstance.getCourseName() << std::endl;

    return 0;
}
