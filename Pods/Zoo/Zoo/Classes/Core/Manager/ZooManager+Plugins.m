//
//  ZooManager+Plugins.m
//  Zoo
//
//  Created by lZackx on 2022/4/14.

#import "ZooManager+Plugins.h"
#import "Zooi18NUtil.h"


#define kTitle        @"title"
#define kDesc         @"desc"
#define kIcon         @"icon"
#define kPluginName   @"pluginName"
#define kAtModule     @"atModule"


@implementation ZooManager (Plugins)

#pragma mark - Core
- (void)addCorePlugins {
    [self addPluginWithPluginType:ZooManagerPluginType_ZooAppSettingPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooAppInfoPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooSandboxPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooH5Plugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooDeleteLocalDataPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooNSLogPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooNSUserDefaultsPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooCrashPlugin];
}

#pragma mark - Platform
- (void)addPlatformPlugins {
#if ZooWithPlatform
    [self addPluginWithPluginType:ZooManagerPluginType_ZooHealthPlugin];
#endif
}

#pragma mark - Performance
- (void)addPerformancePlugins {
#if ZooWithPerformance
    [self addPluginWithPluginType:ZooManagerPluginType_ZooFPSPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooCPUPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooMemoryPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooNetFlowPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooSubThreadUICheckPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooANRPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooLargeImageFilter];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooWeakNetworkPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooStartTimePlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooUIProfilePlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooTimeProfilePlugin];
#endif
}

#pragma mark - UI
- (void)addUIPlugins {
#if ZooWithUI
    [self addPluginWithPluginType:ZooManagerPluginType_ZooColorPickPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooViewCheckPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooViewAlignPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooViewMetricsPlugin];
    [self addPluginWithPluginType:ZooManagerPluginType_ZooHierarchyPlugin];
#endif
}

// MARK: - GPS
- (void)addGPSPlugins {
#if ZooWithGPS
    [self addPluginWithPluginType:ZooManagerPluginType_ZooGPSPlugin];
#endif
}

// MARK: - Logger
- (void)addLoggerPlugins {
#if ZooWithLogger
    [self addPluginWithPluginType:ZooManagerPluginType_ZooCocoaLumberjackPlugin];
#endif
}

// MARK: - MemoryLeak
- (void)addMemoryLeakPlugins {
#if ZooWithMLeaksFinder
    [self addPluginWithPluginType:ZooManagerPluginType_ZooMemoryLeakPlugin];
#endif
}

#pragma mark - default data
- (void)addPluginWithPluginType:(ZooManagerPluginType)pluginType {
    ZooManagerPluginTypeModel *model = [self getDefaultPluginDataWithPluginType:pluginType];
    [self addPluginWithTitle:model.title icon:model.icon desc:model.desc pluginName:model.pluginName atModule:model.atModule];
}

- (void)removePluginWithPluginType:(ZooManagerPluginType)pluginType {
    ZooManagerPluginTypeModel *model = [self getDefaultPluginDataWithPluginType:pluginType];
    [self removePluginWithPluginName:model.pluginName atModule:model.atModule];
}

- (ZooManagerPluginTypeModel *)getDefaultPluginDataWithPluginType:(ZooManagerPluginType)pluginType {
    NSArray *dataArray = @{
                           @(ZooManagerPluginType_ZooAppSettingPlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"????????????")},
                                   @{kDesc:ZooLocalizedString(@"????????????")},
                                   @{kIcon:@"zoo_setting"},
                                   @{kPluginName:@"ZooAppSettingPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                    ],
                           @(ZooManagerPluginType_ZooAppInfoPlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"App??????")},
                                   @{kDesc:ZooLocalizedString(@"App??????")},
                                   @{kIcon:@"zoo_app_info"},
                                   @{kPluginName:@"ZooAppInfoPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooSandboxPlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"???????????????")},
                                   @{kDesc:ZooLocalizedString(@"???????????????")},
                                   @{kIcon:@"zoo_file"},
                                   @{kPluginName:@"ZooSandboxPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooGPSPlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"Mock GPS")},
                                   @{kDesc:ZooLocalizedString(@"Mock GPS")},
                                   @{kIcon:@"zoo_mock_gps"},
                                   @{kPluginName:@"ZooGPSPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooH5Plugin) : @[
                                   @{kTitle:ZooLocalizedString(@"H5?????????")},
                                   @{kDesc:ZooLocalizedString(@"H5?????????")},
                                   @{kIcon:@"zoo_h5"},
                                   @{kPluginName:@"ZooH5Plugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooDeleteLocalDataPlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"????????????")},
                                   @{kDesc:ZooLocalizedString(@"????????????")},
                                   @{kIcon:@"zoo_qingchu"},
                                   @{kPluginName:@"ZooDeleteLocalDataPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooNSLogPlugin) : @[
                                   @{kTitle:@"NSLog"},
                                   @{kDesc:@"NSLog"},
                                   @{kIcon:@"zoo_nslog"},
                                   @{kPluginName:@"ZooNSLogPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooCocoaLumberjackPlugin) : @[
                                   @{kTitle:@"Lumberjack"},
                                   @{kDesc:ZooLocalizedString(@"Lumberjack")},
                                   @{kIcon:@"zoo_log"},
                                   @{kPluginName:@"ZooCocoaLumberjackPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooNSUserDefaultsPlugin) : @[
                                   @{kTitle:@"UserDefaults"},
                                   @{kDesc:@"UserDefaults"},
                                   @{kIcon:@"zoo_database"},
                                   @{kPluginName:@"ZooNSUserDefaultsPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                           ],
                           @(ZooManagerPluginType_ZooCrashPlugin) : @[
                               @{kTitle:ZooLocalizedString(@"Crash")},
                               @{kDesc:ZooLocalizedString(@"Crash")},
                               @{kIcon:@"zoo_crash"},
                               @{kPluginName:@"ZooCrashPlugin"},
                               @{kAtModule:ZooLocalizedString(@"????????????")}
                           ],
                           
                           // ????????????
                           @(ZooManagerPluginType_ZooFPSPlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"??????")},
                                   @{kDesc:ZooLocalizedString(@"??????")},
                                   @{kIcon:@"zoo_fps"},
                                   @{kPluginName:@"ZooFPSPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooCPUPlugin) : @[
                                   @{kTitle:@"CPU"},
                                   @{kDesc:ZooLocalizedString(@"CPU")},
                                   @{kIcon:@"zoo_cpu"},
                                   @{kPluginName:@"ZooCPUPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooMemoryPlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"??????")},
                                   @{kDesc:ZooLocalizedString(@"??????")},
                                   @{kIcon:@"zoo_memory"},
                                   @{kPluginName:@"ZooMemoryPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooNetFlowPlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"??????")},
                                   @{kDesc:ZooLocalizedString(@"????????????")},
                                   @{kIcon:@"zoo_net"},
                                   @{kPluginName:@"ZooNetFlowPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooSubThreadUICheckPlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"?????????UI")},
                                   @{kDesc:ZooLocalizedString(@"?????????UI")},
                                   @{kIcon:@"zoo_ui"},
                                   @{kPluginName:@"ZooSubThreadUICheckPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooANRPlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"??????")},
                                   @{kDesc:ZooLocalizedString(@"??????")},
                                   @{kIcon:@"zoo_kadun"},
                                   @{kPluginName:@"ZooANRPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooLargeImageFilter) : @[
                                   @{kTitle:ZooLocalizedString(@"????????????")},
                                   @{kDesc:ZooLocalizedString(@"????????????")},
                                   @{kIcon:@"zoo_net"},
                                   @{kPluginName:@"ZooLargeImagePlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooStartTimePlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"????????????")},
                                   @{kDesc:ZooLocalizedString(@"????????????")},
                                   @{kIcon:@"zoo_app_start_time"},
                                   @{kPluginName:@"ZooStartTimePlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooMemoryLeakPlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"????????????")},
                                   @{kDesc:ZooLocalizedString(@"??????????????????")},
                                   @{kIcon:@"zoo_memory_leak"},
                                   @{kPluginName:@"ZooMLeaksFinderPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooUIProfilePlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"UI??????")},
                                   @{kDesc:ZooLocalizedString(@"UI??????s")},
                                   @{kIcon:@"zoo_view_level"},
                                   @{kPluginName:@"ZooUIProfilePlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                           ],
                           @(ZooManagerPluginType_ZooTimeProfilePlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"????????????")},
                                   @{kDesc:ZooLocalizedString(@"??????????????????")},
                                   @{kIcon:@"zoo_time_profiler"},
                                   @{kPluginName:@"ZooTimeProfilerPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                           ],
                           @(ZooManagerPluginType_ZooWeakNetworkPlugin) : @[
                                     @{kTitle:ZooLocalizedString(@"????????????")},
                                     @{kDesc:ZooLocalizedString(@"??????????????????")},
                                     @{kIcon:@"zoo_weaknet"},
                                     @{kPluginName:@"ZooWeakNetworkPlugin"},
                                     @{kAtModule:ZooLocalizedString(@"????????????")}
                             ],
                           // ????????????
                           @(ZooManagerPluginType_ZooColorPickPlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"?????????")},
                                   @{kDesc:ZooLocalizedString(@"?????????")},
                                   @{kIcon:@"zoo_straw"},
                                   @{kPluginName:@"ZooColorPickPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooViewCheckPlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"????????????")},
                                   @{kDesc:ZooLocalizedString(@"????????????")},
                                   @{kIcon:@"zoo_view_check"},
                                   @{kPluginName:@"ZooViewCheckPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooViewAlignPlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"????????????")},
                                   @{kDesc:ZooLocalizedString(@"????????????")},
                                   @{kIcon:@"zoo_align"},
                                   @{kPluginName:@"ZooViewAlignPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           @(ZooManagerPluginType_ZooViewMetricsPlugin) : @[
                                   @{kTitle:ZooLocalizedString(@"????????????")},
                                   @{kDesc:ZooLocalizedString(@"????????????")},
                                   @{kIcon:@"zoo_viewmetrics"},
                                   @{kPluginName:@"ZooViewMetricsPlugin"},
                                   @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                          @(ZooManagerPluginType_ZooHierarchyPlugin) : @[
                                           @{kTitle:ZooLocalizedString(@"UI??????")},
                                           @{kDesc:ZooLocalizedString(@"??????UI??????")},
                                           @{kIcon:@"zoo_view_level"},
                                           @{kPluginName:@"ZooHierarchyPlugin"},
                                           @{kAtModule:ZooLocalizedString(@"????????????")}
                                   ],
                           // ????????????
                           @(ZooManagerPluginType_ZooHealthPlugin) : @[
                               @{kTitle:ZooLocalizedString(@"????????????")},
                                  @{kDesc:ZooLocalizedString(@"??????????????????")},
                                  @{kIcon:@"zoo_health"},
                                  @{kPluginName:@"ZooHealthPlugin"},
                                  @{kAtModule:ZooLocalizedString(@"????????????")}
                                  ]
                           }[@(pluginType)];
    
    ZooManagerPluginTypeModel *model = [ZooManagerPluginTypeModel new];
    model.title = dataArray[0][kTitle];
    model.desc = dataArray[1][kDesc];
    model.icon = dataArray[2][kIcon];
    model.pluginName = dataArray[3][kPluginName];
    model.atModule = dataArray[4][kAtModule];
    
    return model;
}

@end
