/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHAssetResourceRequestDelegate.h>
#import <libobjc.A.dylib/PHAssetResourceRequest.h>

@protocol PHAssetResourceRequestDelegate;
@class PHAssetResource, PHAssetResourceRequestOptions, NSDictionary, NSString, PHAssetResourceRequest, NSError, NSURL;

@interface PHAssetResourceWriteRequest : NSObject <PHAssetResourceRequestDelegate, PHAssetResourceRequest> {

	PHAssetResourceRequest* _dataRequest;
	NSError* _error;
	os_unfair_lock_s _completionHandlerLock;
	int _requestID;
	PHAssetResource* _assetResource;
	PHAssetResourceRequestOptions* _options;
	unsigned long long _managerID;
	id<PHAssetResourceRequestDelegate> _delegate;
	/*^block*/id _completionHandler;
	NSDictionary* _info;
	NSString* _taskIdentifier;
	NSURL* _destinationFileURL;

}

@property (nonatomic,readonly) NSURL * destinationFileURL;                                      //@synthesize destinationFileURL=_destinationFileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PHAssetResource * assetResource;                                 //@synthesize assetResource=_assetResource - In the implementation block
@property (nonatomic,readonly) PHAssetResourceRequestOptions * options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) int requestID;                                                   //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) unsigned long long managerID;                                    //@synthesize managerID=_managerID - In the implementation block
@property (nonatomic,__weak,readonly) id<PHAssetResourceRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * info;                                             //@synthesize info=_info - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,copy) NSString * taskIdentifier;                                           //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
-(id<PHAssetResourceRequestDelegate>)delegate;
-(void)cancel;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(NSString *)taskIdentifier;
-(PHAssetResourceRequestOptions *)options;
-(BOOL)isCancelled;
-(NSDictionary *)info;
-(id)completionHandler;
-(int)requestID;
-(NSURL *)destinationFileURL;
-(void)startRequest;
-(void)setErrorIfNone:(id)arg1 ;
-(unsigned long long)managerID;
-(PHAssetResource *)assetResource;
-(void)assetResourceRequest:(id)arg1 didFindFileURL:(id)arg2 ;
-(void)assetResourceRequest:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithAssetResource:(id)arg1 destinationFileURL:(id)arg2 options:(id)arg3 requestID:(int)arg4 managerID:(unsigned long long)arg5 delegate:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
@end

