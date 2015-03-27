#include "DMN_DataManager.h"
#include "DMN_Compressor.h"

int main(int argc, char** argv)
{

    DMN_DataManager dataManager;
    string dataSourceName = dataManager.getDataSourceName();
    std::cout << dataSourceName << std::endl;
    //dataManager.parceXml();
    //doc.LoadFile( "dream.xml" );
    //dataManager.hello_world();
    return 0;
}