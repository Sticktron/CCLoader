/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UISettings.h"

@class NSString, SBAlertItemsSettings, SBAppParallaxSettings, SBAppSliderSettings, SBCarDisplaySettings, SBControlCenterSettings, SBFWallpaperSettings, SBFadeAnimationSettings, SBFolderSettings, SBIconColorSettings, SBLegibilitySettings, SBLockScreenSettings, SBLockScreenTestPluginSettings, SBNotificationCenterSettings, SBRootZoomSettings;

@interface SBRootSettings : _UISettings
{
    _Bool _preventLockover;
    _Bool _slowSpringAnimations;
    SBAppParallaxSettings *_parallaxSettings;
    SBFolderSettings *_folderSettings;
    SBRootZoomSettings *_rootZoomSettings;
    SBControlCenterSettings *_controlCenterSettings;
    SBAppSliderSettings *_appSliderSettings;
    SBLockScreenSettings *_lockScreenSettings;
    SBCarDisplaySettings *_carDisplaySettings;
    SBLockScreenTestPluginSettings *_lockScreenTestPluginSettings;
    SBIconColorSettings *_iconColorSettings;
    SBFadeAnimationSettings *_fadeAnimationSettings;
    SBAlertItemsSettings *_alertItemsSettings;
    SBNotificationCenterSettings *_notificationCenterSettings;
    SBLegibilitySettings *_legibilitySettings;
    SBFWallpaperSettings *_wallpaperSettings;
    NSString *_testRecipeClassName;
}

+ (id)settingsControllerModule;
@property _Bool slowSpringAnimations; // @synthesize slowSpringAnimations=_slowSpringAnimations;
@property _Bool preventLockover; // @synthesize preventLockover=_preventLockover;
@property(retain) NSString *testRecipeClassName; // @synthesize testRecipeClassName=_testRecipeClassName;
@property(retain) SBFWallpaperSettings *wallpaperSettings; // @synthesize wallpaperSettings=_wallpaperSettings;
@property(retain) SBLegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain) SBNotificationCenterSettings *notificationCenterSettings; // @synthesize notificationCenterSettings=_notificationCenterSettings;
@property(retain) SBAlertItemsSettings *alertItemsSettings; // @synthesize alertItemsSettings=_alertItemsSettings;
@property(retain) SBFadeAnimationSettings *fadeAnimationSettings; // @synthesize fadeAnimationSettings=_fadeAnimationSettings;
@property(retain) SBIconColorSettings *iconColorSettings; // @synthesize iconColorSettings=_iconColorSettings;
@property(retain) SBLockScreenTestPluginSettings *lockScreenTestPluginSettings; // @synthesize lockScreenTestPluginSettings=_lockScreenTestPluginSettings;
@property(retain) SBCarDisplaySettings *carDisplaySettings; // @synthesize carDisplaySettings=_carDisplaySettings;
@property(retain) SBLockScreenSettings *lockScreenSettings; // @synthesize lockScreenSettings=_lockScreenSettings;
@property(retain) SBAppSliderSettings *appSliderSettings; // @synthesize appSliderSettings=_appSliderSettings;
@property(retain) SBControlCenterSettings *controlCenterSettings; // @synthesize controlCenterSettings=_controlCenterSettings;
@property(retain) SBRootZoomSettings *rootZoomSettings; // @synthesize rootZoomSettings=_rootZoomSettings;
@property(retain) SBFolderSettings *folderSettings; // @synthesize folderSettings=_folderSettings;
@property(retain) SBAppParallaxSettings *parallaxSettings; // @synthesize parallaxSettings=_parallaxSettings;
- (void)setDefaultValues;

@end

