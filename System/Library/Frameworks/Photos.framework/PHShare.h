/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHShare.h>
@class NSURL, NSDate;


@protocol PHShare <NSObject>
@property (nonatomic,readonly) unsigned short status; 
@property (nonatomic,readonly) short publicPermission; 
@property (nonatomic,readonly) unsigned short trashedState; 
@property (nonatomic,readonly) short publishState; 
@property (nonatomic,readonly) NSURL * shareURL; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * expiryDate; 
@required
-(NSDate *)creationDate;
-(unsigned short)status;
-(NSDate *)expiryDate;
-(NSURL *)shareURL;
-(short)publicPermission;
-(unsigned short)trashedState;
-(short)publishState;

@end


@class NSURL, NSDate, NSString;

@interface PHShare : NSObject <PHShare> {

	NSString* _singletonPhotoLibraryPath;

}

@property (nonatomic,readonly) unsigned short status; 
@property (nonatomic,readonly) short publicPermission; 
@property (nonatomic,readonly) unsigned short trashedState; 
@property (nonatomic,readonly) short publishState; 
@property (nonatomic,readonly) NSURL * shareURL; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * expiryDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)acceptShareWithUUID:(id)arg1 photoLibrary:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)publishShareWithUUID:(id)arg1 photoLibrary:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)PHShareErrorFromError:(id)arg1 ;
-(id)init;
@end

