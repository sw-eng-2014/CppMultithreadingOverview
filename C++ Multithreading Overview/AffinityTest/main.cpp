#include<Windows.h>

int main(int argc, char ** argv) {
	SYSTEM_INFO sysinfo;
	GetSystemInfo(&sysinfo);
	int numberOfCores = sysinfo.dwNumberOfProcessors;
	int threadAffinity = 0x01;
	SetThreadAffinityMask(GetCurrentThread(), threadAffinity);
	for(int i=1; i<=numberOfCores; i++) {
			int a=1;
			for(int j=0; j<2e9; j++)
				a++;
			SetThreadAffinityMask(GetCurrentThread(), threadAffinity << i);
	}
	return 0;
}
