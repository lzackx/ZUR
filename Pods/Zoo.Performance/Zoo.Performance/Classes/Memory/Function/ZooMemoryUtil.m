//
//  ZooMemoryUtil.m
//  Zoo
//
//  Created by lZackx on 2022/4/14.

#import "ZooMemoryUtil.h"
#include <mach/mach.h>

@implementation ZooMemoryUtil

+ (NSInteger)useMemoryForApp{
    task_vm_info_data_t vmInfo;
    mach_msg_type_number_t count = TASK_VM_INFO_COUNT;
    kern_return_t kernelReturn = task_info(mach_task_self(), TASK_VM_INFO, (task_info_t) &vmInfo, &count);
    if(kernelReturn == KERN_SUCCESS)
    {
        int64_t memoryUsageInByte = (int64_t) vmInfo.phys_footprint;
        return (NSInteger)(memoryUsageInByte/1024/1024);
    }
    else
    {
        return -1;
    }
}

//设备总的内存
+ (NSInteger)totalMemoryForDevice{
    return (NSInteger)([NSProcessInfo processInfo].physicalMemory/1024/1024);
}

@end
