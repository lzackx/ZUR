
#import <UIKit/UIKit.h>
#import <Zoo/Zoo.h>
#import <Zoo/ZooManager+Plugins.h>
#import <Zoo/ZooCacheManager.h>

%hook WNYD_AppDelegate
+ (unsigned long long)backgroundPlayerID:(unsigned long long)arg1 { %log; unsigned long long r = %orig; NSLog(@" = %llu", r); return r; }
- (void)setBUADSplashView:(UIView *)BUADSplashView { %log; }
- (UIView *)BUADSplashView { %log; UIView * r = [UIView new]; NSLog(@" = %@", r); return r; }
- (void)BUAdVideoAndSplash:(_Bool)arg1 andLocation:(long long)arg2 { %log; }
- (void)setGDTFullVideo:(id)GDTFullVideo { %log; }
- (id)GDTFullVideo { %log; id r = nil; NSLog(@" = %@", r); return r; }
- (void)GDTVideoAndSplash:(_Bool)arg1 andLocation:(long long)arg2 { %log; }
- (void)setGDTbottomView:(UIView *)GDTbottomView { %log; }
- (UIView *)GDTbottomView { %log; UIView * r = [UIView new]; NSLog(@" = %@", r); return r; }
- (void)setGDTinterstitial:(id)GDTinterstitial { %log; }
- (id)GDTinterstitial { %log; id r = nil; NSLog(@" = %@", r); return r; }
- (void)setGDTsplash:(id)GDTsplash { %log;}
- (id)GDTsplash { %log; id r = nil; NSLog(@" = %@", r); return r; }
- (void)setStayReadTimer:(NSTimer *)StayReadTimer { %log; }
- (NSTimer *)StayReadTimer { %log; NSTimer * r = nil; NSLog(@" = %@", r); return r; }
- (void)setVideoID:(NSString *)VideoID { %log; }
- (NSString *)VideoID { %log; NSString * r = @""; NSLog(@" = %@", r); return r; }
- (void)WNYD_BecomeActive { %log; }
- (void)WNYD_GetAppConfigInfo { %log; %orig; }
- (void)WNYD_reloadUser { %log; %orig; }
- (void)WNYD_setupXHLaunchAdWithStyle:(long long)arg1 { %log; }
- (void)WNYD_slashADShowOrClose:(_Bool)arg1 { %log; arg1 = 0; %orig; }
- (void)setAdM:(id)adM { %log; }
- (id)adM { %log; id r = nil; NSLog(@" = %@", r); return r; }
- (void)addShaperLayerToWindow { %log; %orig; }
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 { %log; }
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 {
    NSLog(@"==== Zialization ====");
    [[ZooCacheManager sharedInstance] saveCrashSwitch: YES];
    [[ZooManager shareInstance] addPerformancePlugins];
    [[ZooManager shareInstance] addUIPlugins];
    [[ZooManager shareInstance] addLoggerPlugins];
    [[ZooManager shareInstance] addGPSPlugins];
    [[ZooManager shareInstance] addPlatformPlugins];
    [[ZooManager shareInstance] addMemoryLeakPlugins];
    [[ZooManager shareInstance] install];
    %log; _Bool r = %orig; NSLog(@" = %d", r); return r;
}
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 { %log; %orig; }
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(id)arg3 { %log; }
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 { %log; }
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(id)arg3 { %log; %orig; }
- (void)applicationDidBecomeActive:(id)arg1 { %log; %orig; }
- (void)applicationDidEnterBackground:(id)arg1 { %log; %orig; }
- (void)applicationDidReceiveMemoryWarning:(id)arg1 { %log; }
- (void)applicationWillEnterForeground:(id)arg1 { %log; %orig; }
- (void)applicationWillResignActive:(id)arg1 { %log; %orig; }
- (void)applicationWillTerminate:(id)arg1 { %log; }
- (void)setBottomView:(UIImageView *)bottomView { %log; %orig; }
- (UIImageView *)bottomView { %log; UIImageView * r = %orig; NSLog(@" = %@", r); return r; }
- (id)creatAndLoadFullscreenVideoWithLocation:(long long)arg1 { %log; id r = nil; NSLog(@" = %@", r); return r; }
- (void)creatSplashViewWithLocation:(long long)arg1 { %log; }
- (id)createAndLoadInterstitial { %log; id r = nil; NSLog(@" = %@", r); return r; }
- (void)dealwithCrashMessage:(id)arg1 { %log; }
- (void)setDrawImgView:(UIImageView *)drawImgView { %log; %orig; }
- (UIImageView *)drawImgView { %log; UIImageView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setFullscreenVideoAd:(id)fullscreenVideoAd { %log; }
- (id)fullscreenVideoAd { %log; id r = nil; NSLog(@" = %@", r); return r; }
- (id)getADConfigModelWith:(id)arg1 { %log; id r = nil; NSLog(@" = %@", r); return r; }
- (void)initADSSDK { %log; }
- (void)initBUAdConfigWithLocation:(long long)arg1 { %log; }
- (void)initGDTSplashWithLocation:(long long)arg1 { %log; }
- (void)initGDTVideoWithLocation:(long long)arg1 { %log; }
- (void)initGoogleConfig { %log; }
- (void)setInterstitial:(id)interstitial { %log; }
- (id)interstitial { %log; id r = nil; NSLog(@" = %@", r); return r; }
- (void)interstitial:(id)arg1 didFailToReceiveAdWithError:(id)arg2 { %log; }
- (void)setInterstitialAd:(id)interstitialAd { %log; }
- (id)interstitialAd { %log; id r = nil; NSLog(@" = %@", r); return r; }
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2 { %log; }
- (void)interstitialAdDidClose:(id)arg1 { %log; }
- (void)interstitialAdDidLoad:(id)arg1 { %log; }
- (void)interstitialDidDismissScreen:(id)arg1 { %log; }
- (void)interstitialDidFailToPresentScreen:(id)arg1 { %log; }
- (void)interstitialDidReceiveAd:(id)arg1 { %log; }
- (void)interstitialWillDismissScreen:(id)arg1 { %log; }
- (void)interstitialWillLeaveApplication:(id)arg1 { %log; }
- (void)interstitialWillPresentScreen:(id)arg1 { %log; }
- (void)setIsAppOpen:(_Bool )isAppOpen { %log; %orig; }
- (_Bool )isAppOpen { %log; _Bool  r = %orig; NSLog(@" = %d", r); return r; }
- (void)setIsOwnSplash:(_Bool )isOwnSplash { %log; %orig; }
- (_Bool )isOwnSplash { %log; _Bool  r = %orig; NSLog(@" = %d", r); return r; }
- (void)setIsRegistBUAd:(_Bool )isRegistBUAd { %log; }
- (_Bool )isRegistBUAd { %log; _Bool  r = 1; NSLog(@" = %d", r); return r; }
- (void)jpushNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id)arg3 { %log; }
- (void)jpushNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2 { %log; }
- (void)jpushNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id)arg3 { %log; }
- (id)launchAdSubViews_alreadyView:(_Bool)arg1 { %log; id r = nil; NSLog(@" = %@", r); return r; }
- (void)loadAppOpenSplash { %log; }
- (void)loadAppOpenSplashWithSwitch { %log; }
- (void)loadAweakenSplash { %log; }
- (void)load_imageAd_networkDataStyle:(long long)arg1 { %log; }
- (id)logDic:(id)arg1 { %log; id r = nil; NSLog(@" = %@", r); return r; }
- (void)setLoginManager:(id)loginManager { %log; %orig; }
- (id)loginManager { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)setLogoView:(UIImageView *)logoView { %log; %orig; }
- (UIImageView *)logoView { %log; UIImageView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setManager:(id)manager { %log; %orig; }
- (id)manager { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)nativeExpressFullscreenVideoAd:(id)arg1 didFailWithError:(id)arg2 { %log; }
- (void)nativeExpressFullscreenVideoAdDidClick:(id)arg1 { %log; }
- (void)nativeExpressFullscreenVideoAdDidClickSkip:(id)arg1 { %log; }
- (void)nativeExpressFullscreenVideoAdDidClose:(id)arg1 { %log; }
- (void)nativeExpressFullscreenVideoAdDidDownLoadVideo:(id)arg1 { %log; }
- (void)nativeExpressFullscreenVideoAdDidLoad:(id)arg1 { %log; }
- (void)nativeExpressFullscreenVideoAdDidPlayFinish:(id)arg1 didFailWithError:(id)arg2 { %log; }
- (void)nativeExpressFullscreenVideoAdDidVisible:(id)arg1 { %log; }
- (void)nativeExpressFullscreenVideoAdViewRenderFail:(id)arg1 error:(id)arg2 { %log; }
- (void)nativeExpressFullscreenVideoAdViewRenderSuccess:(id)arg1 { %log; }
- (void)nativeExpressFullscreenVideoAdWillClose:(id)arg1 { %log; }
- (void)nativeExpressFullscreenVideoAdWillVisible:(id)arg1 { %log; }
- (void)setNetManager:(id)netManager { %log; %orig; }
- (id)netManager { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)setNetStatus:(long long )netStatus { %log; %orig; }
- (long long )netStatus { %log; long long  r = %orig; NSLog(@" = %lld", r); return r; }
- (void)openSplash:(_Bool)arg1 { %log; }
- (void)regeistJPUSH:(id)arg1 { %log; }
- (void)removeLayerToWindow { %log; %orig; }
- (void)setSplashFrame:(struct CGRect )splashFrame { %log; }
- (struct CGRect )splashFrame { %log; struct CGRect  r = CGRectZero; return r; }
- (void)setTabbar:(id)tabbar { %log; %orig; }
- (id)tabbar { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)setTest:(NSString *)test { %log; }
- (NSString *)test { %log; NSString * r = @"test"; NSLog(@" = %@", r); return r; }
- (void)setVolumeValue:(double )volumeValue { %log; %orig; }
- (double )volumeValue { %log; double  r = %orig; NSLog(@" = %f", r); return r; }
- (void)setVolumeView:(UIView *)volumeView { %log; %orig; }
- (UIView *)volumeView { %log; UIView * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setWindow:(UIWindow *)window { %log; %orig; }
- (UIWindow *)window { %log; UIWindow * r = %orig; NSLog(@" = %@", r); return r; }
- (void)setupBugly { %log; }
- (void)showBUAdAD { %log; }
- (void)showGDTVideo { %log; }
- (void)showGoogleAD { %log; }
- (void)splashAd:(id)arg1 didFailWithError:(id)arg2 { %log; }
- (void)splashAdApplicationWillEnterBackground:(id)arg1 { %log; }
- (void)splashAdClicked:(id)arg1 { %log; }
- (void)splashAdClosed:(id)arg1 { %log; }
- (void)splashAdDidClick:(id)arg1 { %log; }
- (void)splashAdDidClose:(id)arg1 { %log; }
- (void)splashAdDidDismissFullScreenModal:(id)arg1 { %log; }
- (void)splashAdDidLoad:(id)arg1 { %log; }
- (void)splashAdDidPresentFullScreenModal:(id)arg1 { %log; }
- (void)splashAdExposured:(id)arg1 { %log; }
- (void)splashAdFailToPresent:(id)arg1 withError:(id)arg2 { %log; }
- (void)splashAdLifeTime:(unsigned long long)arg1 { %log; }
- (void)splashAdSuccessPresentScreen:(id)arg1 { %log; }
- (void)splashAdWillClose:(id)arg1 { %log; }
- (void)splashAdWillClosed:(id)arg1 { %log;}
- (void)splashAdWillDismissFullScreenModal:(id)arg1 { %log;}
- (void)splashAdWillPresentFullScreenModal:(id)arg1 { %log; }
- (void)splashAdWillVisible:(id)arg1 { %log; }
- (id)topViewController { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)unifiedInterstitialAd:(id)arg1 playerStatusChanged:(unsigned long long)arg2 { %log; }
- (void)unifiedInterstitialAdDidDismissFullScreenModal:(id)arg1 { %log; }
- (void)unifiedInterstitialAdDidPresentFullScreenModal:(id)arg1 { %log; }
- (void)unifiedInterstitialAdViewDidDismissVideoVC:(id)arg1 { %log; }
- (void)unifiedInterstitialAdViewDidPresentVideoVC:(id)arg1 { %log;  }
- (void)unifiedInterstitialAdViewWillDismissVideoVC:(id)arg1 { %log; }
- (void)unifiedInterstitialAdViewWillPresentVideoVC:(id)arg1 { %log; }
- (void)unifiedInterstitialAdWillDismissFullScreenModal:(id)arg1 { %log; }
- (void)unifiedInterstitialAdWillPresentFullScreenModal:(id)arg1 { %log; }
- (void)unifiedInterstitialClicked:(id)arg1 { %log; }
- (void)unifiedInterstitialDidDismissScreen:(id)arg1 { %log; }
- (void)unifiedInterstitialDidPresentScreen:(id)arg1 { %log; }
- (void)unifiedInterstitialFailToLoadAd:(id)arg1 error:(id)arg2 { %log; }
- (void)unifiedInterstitialFailToPresent:(id)arg1 error:(id)arg2 { %log; }
- (void)unifiedInterstitialSuccessToLoadAd:(id)arg1 { %log; }
- (void)unifiedInterstitialWillExposure:(id)arg1 { %log; }
- (void)unifiedInterstitialWillLeaveApplication:(id)arg1 { %log; }
- (void)unifiedInterstitialWillPresentScreen:(id)arg1 { %log; }
- (void)uploadErrorCode:(id)arg1 andPlatForm:(id)arg2 { %log; }
- (void)xhLaunchAd:(id)arg1 clickAndOpenModel:(id)arg2 clickPoint:(struct CGPoint)arg3 { %log; }
- (void)xhLaunchAd:(id)arg1 clickAndOpenURLString:(id)arg2 { %log; }
- (void)xhLaunchAd:(id)arg1 imageDownLoadFinish:(id)arg2 { %log; }
- (void)xhLaunchAdShowFinish:(id)arg1 clickAndOpenModel:(id)arg2 { %log; }
- (NSString *)debugDescription { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)description { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (unsigned long long )hash { %log; unsigned long long  r = %orig; NSLog(@" = %llu", r); return r; }
- (Class )superclass { %log; Class  r = %orig; NSLog(@" = %@", r); return r; }
%end
