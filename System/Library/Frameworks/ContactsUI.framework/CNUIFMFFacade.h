/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FMFSession;

@interface CNUIFMFFacade : NSObject {

	FMFSession* _fmfSession;

}

@property (nonatomic,readonly) FMFSession * fmfSession;              //@synthesize fmfSession=_fmfSession - In the implementation block
-(id)init;
-(id)initWithFMFSession:(id)arg1 ;
-(FMFSession *)fmfSession;
-(void)fetchFriendHandlesWithCompletionHandler:(/*^block*/id)arg1 ;
@end

