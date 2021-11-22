#pragma once
#include "MountPoint.h"

class CloudMountPoint : public MountPoint {
public:
	CloudMountPoint();

	virtual void OnMount() override;
	virtual void OnUnMount() override;

	virtual bool CreateMount(const std::filesystem::path file) override;

	virtual bool HasFile(const std::filesystem::path file) override;
	virtual bool HasDirectory(const std::filesystem::path directory) override;

	virtual size_t FileSize(const std::filesystem::path file) override;

	virtual bool WriteFile(const std::filesystem::path& path, char* data, size_t size) override;
	virtual char* ReadFile(const std::filesystem::path& path) override;

	virtual bool CreateDirectory(const std::filesystem::path directory) override;
	virtual bool CreateFile(const std::filesystem::path file, size_t size) override;

	virtual bool RemoveFile(const std::filesystem::path file) override;
	virtual int RemoveDirectory(const std::filesystem::path directory) override;

	~CloudMountPoint();
};