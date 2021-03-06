//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PDPassLibraryExportedInterface.h"

@class NSMutableArray, NSXPCConnection, PDBulletinManager, PDCardFileManager, PDDatabaseManager, PDEntitlementWhitelist, PDPaymentWebServiceCoordinator, PDRelevantPassProvider, PDSecureElement;

@interface PDPassLibrary : NSObject <PDPassLibraryExportedInterface>
{
    PDEntitlementWhitelist *_whitelist;
    NSMutableArray *_userNotifications;
    id <PDPassLibraryDelegate> _delegate;
    PDSecureElement *_secureElement;
    PDPaymentWebServiceCoordinator *_paymentWebServicesCoordinator;
    PDCardFileManager *_cardFileManager;
    PDDatabaseManager *_databaseManager;
    PDBulletinManager *_bulletinManager;
    PDRelevantPassProvider *_relevantPassProvider;
    NSXPCConnection *_connection;
}

@property(readonly, retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) PDRelevantPassProvider *relevantPassProvider; // @synthesize relevantPassProvider=_relevantPassProvider;
@property(retain, nonatomic) PDBulletinManager *bulletinManager; // @synthesize bulletinManager=_bulletinManager;
@property(retain, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) PDCardFileManager *cardFileManager; // @synthesize cardFileManager=_cardFileManager;
@property(retain, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServicesCoordinator; // @synthesize paymentWebServicesCoordinator=_paymentWebServicesCoordinator;
@property(retain, nonatomic) PDSecureElement *secureElement; // @synthesize secureElement=_secureElement;
@property(nonatomic) id <PDPassLibraryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)nukeDatabaseAndExit;
- (void)shuffleGroups:(int)arg1;
- (void)removePassesOfType:(unsigned int)arg1;
- (void)noteAccountDeletedWithHandler:(CDUnknownBlockType)arg1;
- (void)noteAccountChangedWithHandler:(CDUnknownBlockType)arg1;
- (void)introduceDatabaseIntegrityProblem;
- (void)addFakeBulletin;
- (void)getDiffForPassBulletinWithRecordID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)_writePass:(id)arg1 withSettings:(int)arg2 error:(id *)arg3;
- (void)_addPasses:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (BOOL)_entitledForPassTypeID:(id)arg1 teamID:(id)arg2;
- (BOOL)_entitledForUniqueID:(id)arg1;
- (BOOL)_entitledForObject:(id)arg1;
- (id)_entitlementFilteredPasses:(id)arg1;
- (id)_sanitizePassesInSet:(id)arg1;
- (id)_identifyDevicePaymentAppAndSanitizePassIfNeeded:(id)arg1;
- (void)logDelayExitReasons;
- (void)librarySuspended;
- (void)libraryResumed;
- (void)migrateDataWithHandler:(CDUnknownBlockType)arg1;
- (void)recomputeRelevantPassesWithSearchMode:(int)arg1;
- (void)updateObjectWithUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addPassesWithData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removePassWithUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)noteObjectSharedWithUniqueID:(id)arg1;
- (void)updateSettings:(int)arg1 forObjectWithUniqueID:(id)arg2;
- (void)ingestPassDatas:(id)arg1 settings:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)getImageSetForUniqueID:(id)arg1 ofType:(int)arg2 displayProfile:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)getContentForUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)replacePassWithPassData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getManifestHashAndSettingsForPassTypeID:(id)arg1 serialNumber:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)getRouteRelevantPassesForLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getPassWithPassTypeID:(id)arg1 serialNumber:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)getArchivedObjectWithUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)countPassesOfType:(unsigned int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)hasPassesOfType:(unsigned int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)inAppPaymentPassesForNetworks:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getPassWithUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)sendPassbookUIServiceLaunched;
- (void)sendUserEditedCatalog:(id)arg1;
- (void)getPassesAndCatalog:(BOOL)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)isPaymentPassActivationAvailableWithHandler:(CDUnknownBlockType)arg1;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPassWithUniqueID:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)getPassesOfType:(unsigned int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getPassesWithHandler:(CDUnknownBlockType)arg1;
- (void)sendCatalogChanged:(id)arg1;
- (void)sendPassRemoved:(id)arg1 catalog:(id)arg2;
- (void)sendPassUpdated:(id)arg1 catalog:(id)arg2;
- (void)sendPassAdded:(id)arg1 catalog:(id)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

@end

