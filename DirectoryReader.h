#ifndef DIRECTORY_READER_H
#define DIRECTORY_READER_H

#include <string>
#include <list>

class DirectoryReader {
private:
    std::string directoryName;
public:

    /**
     * Constructor
     * @param directoryName - the directory to read.
     */
    DirectoryReader(const std::string& directoryName);


    /**
     * Description: reads the files of the directory.
     * @return a list of files in the directory as strings.
     */
    std::list<std::string> readDirectory();
};

#endif
