/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext;

@interface AXSSDatabaseManager : NSObject {

	int _lockNotificationToken;
	BOOL _isScreenedLocked;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,readonly) BOOL canSave; 
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
+(id)sharedDatabase;
-(id)init;
-(void)dealloc;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(BOOL)canSave;
-(id)cloudObjectFromLocalObjects:(id)arg1 withTable:(id)arg2 andObjectID:(id)arg3 ;
-(void)userAuthChanged;
@end

