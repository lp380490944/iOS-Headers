//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBDisplayProtocol.h"
#import "SBLeafIconDataSource.h"
#import "SBScreenObserver.h"
#import "SBSystemLocalNotificationAlertDelegate.h"
#import "SBWindowContextHostManagerDelegate.h"
#import "SBWindowContextManagerDelegate.h"

@class BKSApplicationDataStore, BKSCFBundle, BKSMachSendRight, BKSProcessAssertion, NSArray, NSDate, NSDictionary, NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTimer, PCPersistentTimer, SBActivationContext, SBWindowContextManager, UILocalNotification, UIRemoteApplication;

@interface SBApplication : NSObject <SBScreenObserver, SBWindowContextManagerDelegate, SBSystemLocalNotificationAlertDelegate, SBDisplayProtocol, SBWindowContextHostManagerDelegate, SBLeafIconDataSource>
{
    NSString *_bundleIdentifier;
    NSString *_displayIdentifier;
    NSString *_path;
    NSString *_bundleVersion;
    NSMutableDictionary *_defaultImageNamesByScreenType;
    NSDictionary *_defaultImageNamesForOrientation;
    NSArray *_folderNames;
    NSString *_fallbackFolderName;
    NSDictionary *_searchDomainLaunchInfo;
    BKSCFBundle *_cachedBundle;
    BKSMachSendRight *_xpcEventPort;
    int _activationState;
    int _lastExitType;
    double _modificationDate;
    int _pid;
    NSMapTable *_screenToContextHostManager;
    NSMapTable *_defunctScreenToContextHostManager;
    SBWindowContextManager *_contextManager;
    NSString *_displayName;
    NSArray *_tags;
    UIRemoteApplication *_remoteApplication;
    NSString *_sandboxPath;
    NSString *_signerIdentity;
    unsigned int _monitoringLocaleAndTimeChanges:1;
    NSSet *_alertSuppressionContexts;
    unsigned int _doingBackgroundNetworking:16;
    unsigned int _failedLaunchCount:8;
    unsigned int _provisioningProfileValidated:1;
    unsigned int _enabled:1;
    unsigned int _isSystemApplication:1;
    unsigned int _isInternalApplication:1;
    unsigned int _isSystemProvisioningApplication:1;
    unsigned int _hasMiniAlerts:1;
    unsigned int _dataFlagsIsSet:1;
    unsigned int _isGameCenterEnabled:1;
    unsigned int _wasGameCenterEverEnabled:1;
    unsigned int _supportsAudioBackgroundMode:1;
    unsigned int _supportsLocationBackgroundMode:1;
    unsigned int _supportsVOIPBackgroundMode:1;
    unsigned int _supportsEABackgroundMode:1;
    unsigned int _supportsRemoteNotificationBackgroundMode:1;
    unsigned int _supportsFetchBackgroundMode:1;
    unsigned int _supportsContinuousBackgroundMode:1;
    unsigned int _wantsUnboundedTaskCompletionAssertions:1;
    unsigned int _prefersSavedSnapshots:1;
    unsigned int _suspendingUnsupported;
    unsigned int _hasBeenFrontmost:1;
    unsigned int _requiresHiDPI:1;
    unsigned int _disableScreenJail:1;
    unsigned int _supportsPortraitOrientation:1;
    unsigned int _supportsPortraitUpsideDownOrientation:1;
    unsigned int _supportsLandscapeLeftOrientation:1;
    unsigned int _supportsLandscapeRightOrientation:1;
    unsigned int _shouldDisableMallocCorruptionAbort:1;
    unsigned long long _terminationAssertions;
    unsigned long long _terminationAssertionsForCacheCleaning;
    int _supportedTypes;
    int _isClassic;
    _Bool _runningInClassicMode;
    _Bool _calculatedSupportedTypes;
    _Bool _hasViewServiceEntitlement;
    unsigned int _defaultStatusBarStyle:8;
    _Bool _defaultStatusBarHidden;
    _Bool _statusBarIsLegacy;
    long long _defaultWallpaperStyle;
    _Bool _canChangeWallpaperStyle;
    unsigned int _defaultInterfaceOrientation:8;
    unsigned int _defaultInterfaceOrientationOverride:8;
    unsigned int _interfaceOrientationOverrideSet:1;
    unsigned int _sbUsesNetwork:8;
    unsigned int _dataFlags:8;
    unsigned int _hasShownDataPlanAlertSinceLock:1;
    unsigned int _launchAlerts:8;
    unsigned int _uninstalled:1;
    unsigned int _isLaunchableDuringSetup:1;
    unsigned int _behavesAsCaller;
    unsigned int _wantsPNGlessLaunch:1;
    unsigned int _systemAppSupportsLocalNotifications:1;
    int _ratingRank;
    Class _iconClass;
    NSArray *_customMachServices;
    NSArray *_externalAccessoryProtocols;
    NSDictionary *_customSpotlightIconPaths;
    NSMutableSet *_requireLocalNotificationsCachingReasons;
    NSArray *_cachedLocalNotifications;
    unsigned int _applicationState;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _appBundleMutex;
    NSDate *_nextApplicationWakeDate;
    PCPersistentTimer *_applicationWakeTimer;
    PCPersistentTimer *_localNotificationTimer;
    UILocalNotification *_pendingLocalNotification;
    BKSProcessAssertion *_transientProcessAssertion;
    NSTimer *_transientSuspendTimer;
    int _transientAssertionType;
    BKSProcessAssertion *_periodicWakeProcessAssertion;
    NSTimer *_periodicWakeSuspendTimer;
    BKSProcessAssertion *_simpleRemoteActionProcessAssertion;
    int _activationCount;
    double _lastBadgeClearTime;
    NSMapTable *_displayValues;
    NSMapTable *_activationValues;
    NSMapTable *_deactivationValues;
    NSHashTable *_displayFlags;
    NSHashTable *_activationFlags;
    NSHashTable *_deactivationFlags;
    NSMutableSet *_suppressVolumeHudCategories;
    float _accelerometerSampleInterval;
    NSMutableSet *_idleTimerDisabledReasons;
    unsigned int _expectsFaceContact:1;
    unsigned int _expectsFaceContactInLandscape:1;
    unsigned int _orientationChangedEventsEnabled:1;
    unsigned int _proximityEventsEnabled:1;
    unsigned int _isBeingDebugged:1;
    unsigned int _isRunning:1;
    unsigned int _isAnimatingActivation:1;
    unsigned int _isAnimatingDeactivation:1;
    unsigned int _showsProgress;
    int _applicationRestorationCheckState;
    float _minimumBrightnessLevel;
    NSArray *_domainsToPreheat;
    int _starkLaunchModes;
    long long _defaultStarkStatusBarStyle;
    NSMutableArray *_activationContextStack;
    NSMutableDictionary *_alertImpersonatorsByWorkspaceType;
    NSMutableSet *_screensThatNeedSnapshotsDownscaled;
    unsigned int _isRecentlyUpdated:3;
    unsigned int _isNewlyInstalled:3;
    unsigned int _hasBadgeValue:3;
    BKSApplicationDataStore *_dataStore;
    NSMutableDictionary *_currentSnoozingLocalNotificationAlerts;
    long long _appSnapshotSequenceID;
}

+ (id)defaultValueForKey:(id)arg1 displayIdentifier:(id)arg2 urlScheme:(id)arg3;
+ (void)setDefaultValue:(id)arg1 forKey:(id)arg2 displayIdentifier:(id)arg3;
+ (id)_defaultDisplayState;
+ (_Bool)shouldHaveContextsForActivationState:(int)arg1;
+ (_Bool)activationStateIsTransitory:(int)arg1;
+ (id)appStateKeysToPrefetch;
+ (void)initialize;
+ (id)_fallbackOrientationStringForOrientation:(long long)arg1 fallbackOrientation:(long long *)arg2;
+ (void)removalTimerFired:(id)arg1;
+ (void)setRemovalTimer:(double)arg1 forSnapshotWithPath:(id)arg2;
+ (void)removeCachedSnapshotsMatchingPath:(id)arg1;
+ (void)removeCachedSnapshotsForScreen:(id)arg1;
+ (void)removeCachedSnapshotSurfaceForPath:(id)arg1;
+ (void)removeCachedSnapshotSurface:(void *)arg1 forPath:(id)arg2;
+ (void)setCachedSnapshotSurface:(void *)arg1 forPath:(id)arg2;
+ (void)setCachedSnapshotSurface:(void *)arg1 forPath:(id)arg2 purgeAfter:(double)arg3;
+ (void *)cachedSnapshotSurfaceForPath:(id)arg1;
+ (id)systemSnapshotsDirectory;
@property(retain, nonatomic) BKSMachSendRight *xpcEventPort; // @synthesize xpcEventPort=_xpcEventPort;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void)windowContextManager:(id)arg1 didStopTrackingContextsForScreen:(id)arg2;
- (void)windowContextManager:(id)arg1 willStartTrackingContextsForScreen:(id)arg2;
- (_Bool)windowContextManager:(id)arg1 shouldAddContext:(id)arg2;
- (void)screenManager:(id)arg1 didReconnectScreen:(id)arg2;
- (void)screenManager:(id)arg1 didDisconnectScreen:(id)arg2;
- (void)screenManager:(id)arg1 didChangeSuppressionOfScreen:(id)arg2;
- (void)_screenManager:(id)arg1 didChangeSuppressionOfScreen:(id)arg2 creatingHostManagerIfNecessary:(_Bool)arg3;
- (void)_cleanupDefaultContextHostManagerForScreen:(id)arg1;
- (void)_clearDefunctScreenHostingForScreen:(id)arg1;
- (void)_hideContextsOnDefunctScreen:(id)arg1;
- (_Bool)canAccessScreen:(id)arg1;
- (_Bool)icon:(id)arg1 launchFromLocation:(int)arg2;
- (_Bool)iconAllowsLaunch:(id)arg1;
- (_Bool)iconCompleteUninstall:(id)arg1;
- (_Bool)iconAllowsUninstall:(id)arg1;
- (_Bool)iconIsRecentlyUpdated:(id)arg1;
- (id)iconFormattedAccessoryString:(id)arg1;
- (id)iconBadgeNumberOrString:(id)arg1;
- (int)iconAccessoryType:(id)arg1;
- (_Bool)iconProgressIsPaused:(id)arg1;
- (double)iconProgressPercent:(id)arg1;
- (long long)iconProgressState:(id)arg1;
- (_Bool)iconAppearsInNewsstand:(id)arg1;
- (_Bool)iconCanEllipsizeLabel:(id)arg1;
- (id)icon:(id)arg1 defaultImageWithFormat:(int)arg2;
- (id)icon:(id)arg1 imageWithFormat:(int)arg2;
- (unsigned long long)iconPriority:(id)arg1;
- (id)iconDisplayName:(id)arg1;
- (void)_noteIconDataSourceDidChange;
- (void)_removeAlertImpersonator:(id)arg1;
- (void)_setAlertImpersonator:(id)arg1 forWorkspaceType:(long long)arg2;
- (id)_alertImpersonatorForWorkspaceType:(long long)arg1;
- (_Bool)_hasAnyAlertImpersonator;
- (void)popActivationContext;
- (void)pushActivationContext;
- (_Bool)supportsStarkAudio;
- (_Bool)supportsStarkGateKeeper;
- (_Bool)supportsStarkFullScreen;
- (id)domainsToPreheat;
- (id)description;
- (id)deactivationSettings;
- (id)activationSettings;
- (id)launchSettings;
- (unsigned int)eventPort;
- (_Bool)hasStartedLaunching;
- (_Bool)isRunning;
- (_Bool)isRecordingAudio;
- (_Bool)suppressesControlCenter;
- (_Bool)suppressesNotificationCenter;
- (_Bool)suppressesBanners;
- (float)minimumBrightnessLevel;
- (_Bool)showSystemVolumeHUDForCategory:(id)arg1;
- (void)setSystemVolumeHUDEnabled:(_Bool)arg1 forCategory:(id)arg2;
- (_Bool)showsProgress;
- (void)setShowsProgress:(_Bool)arg1;
- (_Bool)proximityEventsEnabled;
- (void)setProximityEventsEnabled:(_Bool)arg1;
- (_Bool)orientationChangedEventsEnabled;
- (void)setOrientationChangedEventsEnabled:(_Bool)arg1;
- (double)accelerometerSampleInterval;
- (void)setAccelerometerSampleInterval:(double)arg1;
- (_Bool)expectsFaceContactInLandscape;
- (_Bool)expectsFaceContact;
- (void)setExpectsFaceContact:(_Bool)arg1 inLandscape:(_Bool)arg2;
- (void)deactivate;
- (void)activate;
- (void)setExpectsFaceContact:(_Bool)arg1;
- (id)idleTimerDisabledReasons;
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(id)arg2;
- (_Bool)isTranslucent;
- (long long)wallpaperStyle;
- (_Bool)setWallpaperStyleForBackgroundStyle:(long long)arg1;
- (long long)launchingInterfaceOrientationForCurrentOrientation;
- (_Bool)allowsEventOnlySuspension;
- (_Bool)deactivationFlag:(unsigned int)arg1;
- (id)deactivationValue:(unsigned int)arg1;
- (void)setDeactivationSetting:(unsigned int)arg1 value:(id)arg2;
- (void)setDeactivationSetting:(unsigned int)arg1 flag:(_Bool)arg2;
- (void)clearDeactivationSettings;
- (void)_bumpActivationCountBy:(long long)arg1;
- (id)_deactivationFlags;
- (id)_deactivationValues;
- (void)markUserLaunchInitiationTime;
- (_Bool)activationFlag:(unsigned int)arg1;
- (id)activationValue:(unsigned int)arg1;
- (void)setActivationSetting:(unsigned int)arg1 value:(id)arg2;
- (void)setActivationSetting:(unsigned int)arg1 flag:(_Bool)arg2;
- (void)clearActivationSettings;
- (id)_activationFlags;
- (id)_activationValues;
- (id)_displayFlags;
- (id)_displayValues;
- (_Bool)displayFlag:(unsigned int)arg1;
- (id)displayValue:(unsigned int)arg1;
- (void)setDisplaySetting:(unsigned int)arg1 value:(id)arg2;
- (void)setDisplaySetting:(unsigned int)arg1 flag:(_Bool)arg2;
- (void)clearDisplaySettings;
@property(copy, nonatomic) SBActivationContext *activationContext;
- (id)_newFlagTable;
- (id)_newValueTable;
- (id)urlScheme;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_protectedDataDidBecomeAvailable:(id)arg1;
- (void)_createDownscaledSnapshotFromFullSizeSnapshotForScreen:(id)arg1;
- (void)_noteSnapshotDidUpdate:(long long)arg1;
- (void)_noteSnapshotDidUpdate;
- (void)_deleteSnapshotForScreen:(id)arg1 name:(id)arg2;
- (void)_saveSnapshotForScreen:(id)arg1 frame:(struct CGRect)arg2 name:(id)arg3 overrideScale:(double)arg4;
- (void)_saveSuspendSnapshot:(id)arg1 forScreen:(id)arg2;
- (id)_snapshotCreationDeletionQueueForScreen:(id)arg1;
- (id)defaultImagePathForSnapshotWithName:(id)arg1 screen:(id)arg2 downscaled:(_Bool)arg3;
- (long long)interfaceOrientationForScreen:(id)arg1;
- (void)_suspendForPeriodicWakeTimerFired:(id)arg1;
- (void)_dropPeriodicWakeProcessAssertion;
- (void)_resumeForPeriodicWakeWithReason:(id)arg1;
- (id)_localizedGenreFromDictionary:(id)arg1;
- (id)_localizedGenreNameForID:(long long)arg1;
- (id)_copyApplicationMetadata;
- (void)_dropTransientProcessAssertion;
- (void)_cancelProcessAssertionForSimpleRemoteAction;
- (void)sendSimpleRemoteAction:(long long)arg1;
- (void)takeAssertionWithTimeoutForSimpleRemoteAction;
- (void)setNowPlayingWithAudio:(_Bool)arg1;
- (void)_transientSuspendForTimerFired:(id)arg1;
- (void)_transientResumeForType:(int)arg1;
- (double)_resumeDurationForTransientType:(int)arg1;
- (id)_transientIdentifier;
- (void)resumeForContentAvailable;
- (void)resumeToQuit;
- (void)notifyResumeActiveForReason:(int)arg1;
- (void)notifyResignActiveForReason:(int)arg1;
- (void)_terminationAssertionRemovedWithReason:(unsigned char)arg1;
- (void)_terminationAssertionAddedWithReason:(unsigned char)arg1;
- (_Bool)isCacheCleaningTerminationAssertionHeld;
- (_Bool)isAnyTerminationAssertionHeld;
- (void)resetLaunchAlertForType:(int)arg1;
- (_Bool)showLaunchAlertForType:(int)arg1;
- (void)_purgeRemoteApplication;
- (id)remoteApplication;
- (_Bool)isUninstalled;
- (void)prepareForUninstallation;
- (id)externalAccessoryProtocols;
- (_Bool)provisioningProfileValidated;
- (void)markApplicationIdentityAsTrusted;
- (int)applicationSignatureState;
- (id)signerIdentity;
- (_Bool)wantsUnboundedTaskCompletionAssertions;
- (_Bool)supportsContinuousBackgroundMode;
- (_Bool)supportsFetchBackgroundMode;
- (_Bool)supportsRemoteNotificationBackgroundMode;
- (_Bool)supportsEABackgroundMode;
- (_Bool)supportsVOIPBackgroundMode;
- (_Bool)supportsLocationBackgroundMode;
- (_Bool)supportsAudioBackgroundMode;
- (_Bool)isActivating;
- (int)activationState;
- (void)_calculateSupportedTypesFromInfoDictionary:(id)arg1;
- (void)_sendDidLaunchNotification:(_Bool)arg1;
- (void)_setActivationState:(int)arg1;
- (id)_activationStateToString;
- (id)_stringForActivationState:(int)arg1;
- (void)setHasBeenFrontmost:(_Bool)arg1;
- (_Bool)hasBeenFrontmost;
- (unsigned int)applicationState;
- (void)setApplicationState:(unsigned int)arg1;
- (id)_stringForApplicationState:(unsigned int)arg1;
- (id)preferenceDomain;
- (id)sandboxPath;
- (void)setSandboxPath:(id)arg1;
- (void)_unregisterRemoteViewsAndSheets;
- (void)hostContextsOnScreen:(id)arg1 forRequester:(id)arg2;
- (id)mainScreenContextHostManager;
- (void)_clearContextHostManagers;
- (void)_removeContextHostManager:(id)arg1;
- (void)_addContextHostManager:(id)arg1;
- (id)contextHostManagerForScreen:(id)arg1 creatingIfNecessary:(_Bool)arg2;
- (id)contextHostManagerForScreen:(id)arg1;
- (id)contextManagerCreatingIfNecessary:(_Bool)arg1;
- (id)_allContextHostManagersCreatingIfNecessary:(_Bool)arg1;
- (_Bool)disablesJailForScreen:(id)arg1;
- (void)_purgeCachedLocalNotifications;
- (id)getPendingLocalNotification;
- (void)systemLocalNotificationAlertShouldSnooze:(id)arg1;
- (void)systemLocalNotificationAlertShouldLaunch:(id)arg1;
- (void)_fireNotification:(id)arg1;
- (void)localNotificationTimerFired;
- (void)_updateLocalNotificationTimers;
- (void)_setMonitoringForLocaleAndTimeChanges:(_Bool)arg1;
- (id)_lastLocalNotificationFireDate;
- (void)_setLastLocalNotificationFireDate:(id)arg1;
- (void)_dismissAllSystemLocalNotificationAlerts;
- (double)lastBadgeClearTime;
- (void)setBadge:(id)arg1;
- (id)badgeNumberOrString;
- (_Bool)badgeHasBeenSetLocally;
- (void)noteBadgeSetLocally;
- (_Bool)usesLocalNotifications;
- (_Bool)supportsLocalNotifications;
- (void)cancelLocalNotification:(id)arg1;
- (void)scheduleLocalNotifications:(id)arg1 replaceExistingNotifications:(_Bool)arg2;
- (id)scheduledLocalNotifications;
- (void)_setPendingLocalNotificationFromBulletin:(id)arg1;
- (id)_copyUnexpiredScheduledLocalNotifications;
- (_Bool)_isLocalNotification:(id)arg1 scheduledToFireAfterDate:(id)arg2;
- (void)_setScheduledLocalNotifications:(id)arg1;
- (id)_scheduledLocalNotifications;
- (void)_endRequireLocalNotificationsCachingWithReason:(id)arg1;
- (void)_beginRequireLocalNotificationsCachingWithReason:(id)arg1;
- (void)_setupLocalNotificationLogging;
- (id)loggingIdentifier;
- (void)noteDidOpenURL:(id)arg1;
- (void)spdResumeForTrafficRequested;
- (void)wakeTimerFired;
- (void)_updateApplicationWakeTimers;
- (void)setApplicationNextWakeDate:(id)arg1;
- (id)applicationNextWakeDate;
- (_Bool)classicDefaultStatusBarHidden;
- (_Bool)classicAppZoomedInOrRequiresHiDPI;
- (_Bool)classicAppRequiresHiDPI;
- (_Bool)classicAppZoomedIn;
- (_Bool)supportsApplicationType:(int)arg1;
- (void)_setIsClassic:(_Bool)arg1;
- (_Bool)isClassic;
- (void)_calculateSupportedTypesLazilyIfNecessary;
- (long long)launchingInterfaceOrientationForOrientation:(long long)arg1;
- (void)removeDefaultInterfaceOrientationOverride;
- (void)overrideDefaultInterfaceOrientation:(long long)arg1;
- (long long)starkStatusBarStyle;
- (long long)statusBarOrientation;
- (_Bool)statusBarHidden;
- (_Bool)defaultStatusBarHidden;
- (id)statusBarEffectiveStyleRequestWithStyleOverrides:(int)arg1;
- (id)effectiveStatusBarStyleRequest;
- (long long)effectiveStatusBarStyle;
- (id)statusBarStyleRequest;
- (long long)statusBarStyle;
- (long long)defaultStatusBarStyle;
- (void)autoLaunchIfNecessaryOnBootOrInstall:(_Bool)arg1;
- (_Bool)shouldAutoRelaunchAfterExit;
- (_Bool)shouldAutoLaunchOnBootOrInstall;
- (_Bool)_shouldAutoLaunchOnBootOrInstall:(_Bool)arg1;
- (_Bool)_shouldAutoRelaunchForEA;
- (void)_setAutoLaunchForVoIP:(_Bool)arg1;
- (void)_setHasBeenLaunched;
- (void)_lockStateDidChange:(id)arg1;
- (void)_updateRecentlyUpdatedTimer;
- (void)markRecentlyUpdated;
- (void)_setRecentlyUpdated:(_Bool)arg1;
- (_Bool)_isRecentlyUpdated;
- (void)markNewlyInstalled;
- (void)_setNewlyInstalled:(_Bool)arg1;
- (_Bool)_isNewlyInstalled;
- (_Bool)_shouldAutoLaunchForVoIP;
- (void)didAnimateDeactivationOnStarkScreenController:(id)arg1;
- (void)willAnimateDeactivationOnStarkScreenController:(id)arg1;
- (void)didAnimateActivationOnStarkScreenController:(id)arg1;
- (void)willAnimateActivationOnStarkScreenController:(id)arg1;
- (void)didAnimateDeactivation;
- (void)willAnimateDeactivation:(_Bool)arg1;
- (void)didAnimateActivation;
- (void)willAnimateActivation;
- (void)finishedBackgroundContentFetchingWithInfo:(id)arg1;
- (void)didDeactivateForEventsOnly:(_Bool)arg1;
- (void)willDeactivateForEventsOnly:(_Bool)arg1;
- (void)didFailToActivate;
- (void)didActivate;
- (void)_updateOrientationForActivationIfNecessary;
- (void)willActivate;
- (void)didSuspend;
- (void)didExitWithInfo:(id)arg1 type:(int)arg2;
- (void)didLaunch:(id)arg1;
- (void)didBeginLaunch:(id)arg1;
- (void)setRunning:(_Bool)arg1;
- (void)setProcessInfo:(id)arg1;
- (void)_setRunning:(_Bool)arg1;
- (void)_setProcessInfo:(id)arg1;
- (id)fallbackFolderName;
- (id)folderNames;
- (int)ratingRank;
- (_Bool)isBeingDebugged;
- (void)setBeingDebugged:(_Bool)arg1;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (Class)iconClass;
- (id)_preferredImagePathInBundle:(id)arg1 baseResourceName:(id)arg2 ofType:(id)arg3 screen:(id)arg4 outScale:(double *)arg5;
- (id)_preferredImagePathByScaleInBundle:(id)arg1 resourceName:(id)arg2 ofType:(id)arg3 screen:(id)arg4 outScale:(double *)arg5;
- (id)defaultImageForScreen:(id)arg1 snapshot:(_Bool *)arg2 originalOrientation:(long long *)arg3 currentOrientation:(long long *)arg4 canUseIOSurface:(_Bool)arg5;
- (id)_pathIfFileExistsAtPath:(id)arg1;
- (id)_additionalDisplayQualification;
- (_Bool)shouldLaunchPNGless;
- (void)flushSnapshotsForScreen:(id)arg1;
- (void)flushSnapshotsForAllScreens;
- (id)appSnapshotPathForScreen:(id)arg1 downscaled:(_Bool)arg2;
- (id)_baseAppSnapshotPath;
- (id)customSpotlightIconPathsForKey:(id)arg1;
- (void)validateSystemProvisioningEntitlements:(CDStruct_6ad76789 *)arg1;
- (_Bool)isLaunchableDuringSetup;
- (_Bool)hasGameCenterData;
- (_Bool)isNowRecordingApplication;
- (_Bool)isNowPlayingApplication;
- (id)webClip;
- (_Bool)isWebApplication;
- (_Bool)behavesLikePhone;
- (_Bool)isFaceTime;
- (_Bool)isMobilePhone;
- (_Bool)isSystemProvisioningApplication;
- (_Bool)isInternalApplication;
- (_Bool)isSystemApplication;
- (void)_resetDataUsage;
- (void)setUsesWiFiNetwork:(_Bool)arg1;
- (void)setUsesEdgeNetwork:(_Bool)arg1;
- (void)_setDoingBackgroundNetworking:(unsigned int)arg1;
- (unsigned int)_doingBackgroundNetworking;
- (void)setUsesBackgroundNetwork:(_Bool)arg1;
- (void)_setDataUsage:(int)arg1;
- (void)setHasShownDataPlanAlertSinceLock:(_Bool)arg1;
- (_Bool)hasShownDataPlanAlertSinceLock;
- (int)dataUsage;
- (void)setAlertSuppressionContexts:(id)arg1;
- (id)alertSuppressionContexts;
- (void)setHasMiniAlerts:(_Bool)arg1;
- (_Bool)hasMiniAlerts;
- (id)tags;
- (void)setTags:(id)arg1;
- (_Bool)suspendingUnsupported;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)enabled;
- (id)bundleVersion;
- (void)purgeAllCaches;
- (void)purgeBundleCaches;
- (id)bundle;
- (double)modificationDate;
- (id)containerPath;
- (id)path;
- (id)bundleIdentifier;
- (_Bool)isSameExecutableAsApplication:(id)arg1;
- (void)dealloc;
- (double)autoLockTime;
- (double)autoDimTime;
- (_Bool)_idleTimerDisabledForAnyReason;
@property(copy) NSString *displayIdentifier; // @dynamic displayIdentifier;
- (id)_sortedLaunchImagesForMainScreen:(id)arg1 bundle:(id)arg2;
- (void)_assignDefaultLaunchImages:(id)arg1 forScreenType:(long long)arg2;
- (id)initWithBundleIdentifier:(id)arg1 webClip:(id)arg2 path:(id)arg3 bundle:(id)arg4 infoDictionary:(id)arg5 isSystemApplication:(_Bool)arg6 signerIdentity:(id)arg7 provisioningProfileValidated:(_Bool)arg8 entitlements:(id)arg9;
- (void)_configureDisplayNameForInfoDictionary:(id)arg1 atBundlePath:(id)arg2;
- (_Bool)isNewsstandApplication;
- (id)_infoplist_defaultPNGPathForScreen:(id)arg1 launchingOrientation:(long long)arg2 imageOrientation:(long long *)arg3 resultingScale:(double *)arg4;
- (_Bool)_infoplist_defaultPNGCalculateContainsCorgiImage;
- (struct CGSize)_screenSizeForScreen:(id)arg1;
- (id)_sanitizedImageNameFromName:(id)arg1 withExtension:(id)arg2 actualExtension:(out id *)arg3;
- (id)_pathForExistingImageInCandidates:(id)arg1 forScreen:(id)arg2 launchingOrientation:(long long)arg3 imageOrientation:(long long *)arg4 resultingScale:(double *)arg5;
- (void)_addImageName:(id)arg1 toImageNamesArray:(id)arg2 screen:(id)arg3;
- (id)_cachedImageForSnapshotPath:(id)arg1 screen:(id)arg2;
- (id)_imageForSnapshotAtPath:(id)arg1 fileOrientation:(long long *)arg2;
- (id)_defaultPNGNameUsingFallbacks:(id)arg1;
- (id)_defaultImageName:(id)arg1;
- (id)_scaleSuffixForScale:(double)arg1;
- (long long)_fallbackImageOrientationForLaunchingOrientation:(long long)arg1;
- (id)_fallbackOrientationImageTagForLaunchingOrientation:(long long)arg1;
- (id)_orientationImageTagForLaunchingOrientation:(long long)arg1;
- (void)_imageOrientationParametersForLaunchingOrientation:(long long)arg1 imageTag:(id *)arg2 fallbackImageTag:(id *)arg3 fallbackOrientation:(long long *)arg4;
- (id)_imageNamesFromInfoDictionary:(id)arg1;
- (_Bool)isSnapshotPresentForLaunchingInterfaceOrientation:(long long)arg1;
- (id)_defaultImageInfoForScreen:(id)arg1 launchingOrientation:(long long)arg2;
- (_Bool)_shouldUseSnapshotForAppLaunchIfPossible;
- (id)_defaultPNGImageInfoForScreen:(id)arg1 launchingOrientation:(long long)arg2;
- (id)_snapshotImageInfoForScreen:(id)arg1 named:(id)arg2 downscaled:(_Bool)arg3 launchingOrientation:(long long)arg4;
- (id)_snapshotImageInfoForScreen:(id)arg1 downscaled:(_Bool)arg2 launchingOrientation:(long long)arg3;
- (id)_defaultPNGForScreen:(id)arg1 launchingOrientation:(long long)arg2 orientation:(long long *)arg3;
- (id)_defaultPNGPathForScreen:(id)arg1 launchingOrientation:(long long)arg2 imageOrientation:(long long *)arg3 resultingScale:(double *)arg4;
- (id)_defaultPNGNameFromSuspensionSettings;
- (_Bool)_applicationDoesNotHaveRestorationArchive;
- (id)_defaultPNGNameWhenActivatingFromURLSetting:(id)arg1;
- (id)_defaultPNGNameFromSearchDomainLaunchInfo:(id)arg1;
- (id)_defaultPNGNameFromActivationSettings;
- (id)_snapshotImageWithImageName:(id)arg1 forScreen:(id)arg2 downscaled:(_Bool)arg3 launchingOrientation:(long long)arg4 originalOrientation:(long long *)arg5 currentOrientation:(long long *)arg6;
- (id)_snapshotImageForSnapshotImageInfo:(id)arg1 downscaled:(_Bool)arg2 originalOrientation:(out long long *)arg3 currentOrientation:(out long long *)arg4;
- (id)fileSnapshotForImageInfo:(id)arg1 downscaled:(_Bool)arg2 originalOrientation:(out long long *)arg3 currentOrientation:(out long long *)arg4;
- (id)cachedSnapshotForImageInfo:(id)arg1 downscaled:(_Bool)arg2 originalOrientation:(out long long *)arg3 currentOrientation:(out long long *)arg4;
- (id)snapshotImageInfosWithImageName:(id)arg1 forScreen:(id)arg2 launchingOrientation:(long long)arg3;

@end

