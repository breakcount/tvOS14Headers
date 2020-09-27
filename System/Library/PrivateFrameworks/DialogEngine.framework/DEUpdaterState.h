/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSData, NSString, DEFilter;

@interface DEUpdaterState : NSObject {

	BOOL _disabled;
	NSData* _builtinVersion;
	NSData* _syncedVersion;
	NSString* _publicationURL;
	NSString* _publicationId;
	DEFilter* _filter;
	NSData* _latestVersion;
	NSData* _promotedVersion;

}

@property (nonatomic,retain) NSData * builtinVersion;                //@synthesize builtinVersion=_builtinVersion - In the implementation block
@property (nonatomic,retain) NSData * syncedVersion;                 //@synthesize syncedVersion=_syncedVersion - In the implementation block
@property (nonatomic,retain) NSString * publicationURL;              //@synthesize publicationURL=_publicationURL - In the implementation block
@property (nonatomic,retain) NSString * publicationId;               //@synthesize publicationId=_publicationId - In the implementation block
@property (assign,nonatomic) BOOL disabled;                          //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) DEFilter * filter;                      //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSData * latestVersion;                 //@synthesize latestVersion=_latestVersion - In the implementation block
@property (nonatomic,retain) NSData * promotedVersion;               //@synthesize promotedVersion=_promotedVersion - In the implementation block
+(id)stateFromPb:(const State*)arg1 ;
+(void)stateToPb:(id)arg1 statePb:(State*)arg2 ;
-(DEFilter *)filter;
-(void)setFilter:(DEFilter *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)disabled;
-(NSData *)latestVersion;
-(NSString *)publicationURL;
-(void)setPublicationURL:(NSString *)arg1 ;
-(NSData *)builtinVersion;
-(NSString *)publicationId;
-(void)setBuiltinVersion:(NSData *)arg1 ;
-(void)setSyncedVersion:(NSData *)arg1 ;
-(void)setLatestVersion:(NSData *)arg1 ;
-(void)setPromotedVersion:(NSData *)arg1 ;
-(void)setPublicationId:(NSString *)arg1 ;
-(NSData *)syncedVersion;
-(NSData *)promotedVersion;
@end

