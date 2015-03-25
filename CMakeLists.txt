cmake_minimum_required(VERSION 2.8) # Проверка версии CMake.
                                    # Если версия установленой программы
                                    # старее указаной, произайдёт аварийный выход.

project(m_data_manager)				# Название проекта

set(SRC
        main.cpp
        # Content
        commons/Content.h
        commons/Content.cpp

            commons/content_types/Content3D.h
            commons/content_types/Content3D.cpp

            commons/content_types/FileContent.h
            commons/content_types/FileContent.cpp

        # DataManager/Cryptography
        m_data_manager/cryptography/DMN_Cryptography.h
        m_data_manager/cryptography/DMN_Cryptography.cpp

        #DataManager/Compression
        m_data_manager/compression/DMN_Compressor.h
        m_data_manager/compression/DMN_Compressor.cpp

        m_data_manager/compression/DMN_Compression.h
        m_data_manager/compression/DMN_Compression.cpp

            m_data_manager/compression/compression_types/DMN_ZipCompression.h
            m_data_manager/compression/compression_types/DMN_ZipCompression.cpp

            m_data_manager/compression/compression_types/DMN_3DCompression.h
            m_data_manager/compression/compression_types/DMN_3DCompression.cpp

        #DataManager/DataManager
        m_data_manager/data_manager/DMN_DataManager.h
        m_data_manager/data_manager/DMN_DataManager.cpp

        m_data_manager/data_manager/DMN_DataSource.cpp
        m_data_manager/data_manager/DMN_DataSource.h

            m_data_manager/data_manager/data_source/DMN_DataSource3D.h
            m_data_manager/data_manager/data_source/DMN_DataSource3D.cpp

            m_data_manager/data_manager/data_source/DMN_DataSourceFile.h
            m_data_manager/data_manager/data_source/DMN_DataSourceFile.cpp

            m_data_manager/data_manager/data_source/DMN_DataSourceDB.h
            m_data_manager/data_manager/data_source/DMN_DataSourceDB.cpp

        m_data_manager/data_manager/DMN_DataSourceManager.h
        m_data_manager/data_manager/DMN_DataSourceManager.cpp

        #DataManager/Updater
        m_data_manager/updater/DMN_ContentUpdate.h
        m_data_manager/updater/DMN_ContentUpdate.cpp

        #Security/AccessManager
        m_security/SCR_AccessManager.cpp m_security/SCR_AccessManager.h

        #Settings
        settings/Settings.h
        settings/Settings.cpp

    )

include_directories(
                    commons
                    m_data_manager/cryptography
                    m_data_manager/data_manager
                    m_data_manager/compression
                    settings)

add_executable(main ${SRC} )	# Создает исполняемый файл с именем main
