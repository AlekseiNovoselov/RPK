#include "Settings.h"

string Settings::getDataSourceName() {
    if (dataSourceName.size() == 0)
        parceXml();
    return dataSourceName;
}

void Settings::parceXml() {
    std::cout << "Parce Xml " << std::endl;
    XMLDocument doc;
    doc.LoadFile( "/home/aleksei/ClionProjects/RPK/m_data_manager/data_manager/dream.xml" );
    XMLText* textNode = doc.FirstChildElement( "PLAY" )->FirstChildElement( "TITLE" )->FirstChild()->ToText();
    string title = textNode->Value();
    dataSourceName = title;
}
