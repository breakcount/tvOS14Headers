/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSData, NSString, NSArray;


@protocol CoreDAVLeafDataPayload <NSObject>
@property (nonatomic,retain) NSURL * serverID; 
@property (nonatomic,readonly) NSData * dataPayload; 
@property (nonatomic,readonly) NSString * syncKey; 
@property (nonatomic,readonly) NSArray * childrenOrder; 
@property (nonatomic,retain) NSURL * sourceURL; 
@property (nonatomic,retain) NSURL * destinationURL; 
@optional
-(NSURL *)destinationURL;
-(void)setDestinationURL:(id)arg1;
-(NSURL *)sourceURL;
-(void)setSourceURL:(id)arg1;
-(NSArray *)childrenOrder;

@required
-(void)setServerID:(id)arg1;
-(NSURL *)serverID;
-(NSString *)syncKey;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
-(NSData *)dataPayload;

@end

