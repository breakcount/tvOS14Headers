/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectID, NSString;

@interface PLLocalVideoKeyFrameGenerationJob : NSObject {

	BOOL _networkAccessAllowed;
	NSManagedObjectID* _assetObjectID;
	NSString* _libraryID;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSManagedObjectID * assetObjectID;              //@synthesize assetObjectID=_assetObjectID - In the implementation block
@property (assign,nonatomic) BOOL networkAccessAllowed;                      //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (nonatomic,copy) NSString * libraryID;                             //@synthesize libraryID=_libraryID - In the implementation block
@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSString *)libraryID;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(BOOL)isEqualToJob:(id)arg1 ;
-(NSManagedObjectID *)assetObjectID;
-(void)setAssetObjectID:(NSManagedObjectID *)arg1 ;
-(BOOL)networkAccessAllowed;
-(void)setLibraryID:(NSString *)arg1 ;
@end
