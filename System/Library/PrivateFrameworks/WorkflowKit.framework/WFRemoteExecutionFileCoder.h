/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFFileCoder.h>

@class NSMutableArray, NSString, NSURL, WFRemoteExecutionCoordinator;

@interface WFRemoteExecutionFileCoder : WFFileCoder {

	NSMutableArray* _transferIdentifiers;
	NSString* _requestIdentifier;
	NSURL* _fileURL;
	/*^block*/id _fileAvailabilityHandler;
	WFRemoteExecutionCoordinator* _coordinator;

}

@property (nonatomic,retain) NSMutableArray * transferIdentifiers;                           //@synthesize transferIdentifiers=_transferIdentifiers - In the implementation block
@property (nonatomic,copy) id fileAvailabilityHandler;                                       //@synthesize fileAvailabilityHandler=_fileAvailabilityHandler - In the implementation block
@property (assign,nonatomic,__weak) WFRemoteExecutionCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) NSString * requestIdentifier;                                   //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                                //@synthesize fileURL=_fileURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(WFRemoteExecutionCoordinator *)coordinator;
-(NSString *)requestIdentifier;
-(long long)targetPlatform;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(void)setCoordinator:(WFRemoteExecutionCoordinator *)arg1 ;
-(void)archiveFileAtURL:(id)arg1 fileIsTemporary:(BOOL)arg2 withCoder:(id)arg3 ;
-(id)decodeFileWithCoder:(id)arg1 fileIsTemporary:(BOOL*)arg2 ;
-(void)waitForFileAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithCoordinator:(id)arg1 requestIdentifier:(id)arg2 ;
-(void)cancelOutstandingTransfers;
-(void)fileAvailabilityChanged;
-(NSMutableArray *)transferIdentifiers;
-(void)setTransferIdentifiers:(NSMutableArray *)arg1 ;
-(id)fileAvailabilityHandler;
-(void)setFileAvailabilityHandler:(id)arg1 ;
@end

