/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalDAV/CalDAVOperation.h>

@protocol CalDAVAccountDelegatesRefreshDelegate;
@interface CalDAVAccountDelegatesRefreshOperation : CalDAVOperation {

	id<CalDAVAccountDelegatesRefreshDelegate> _mdelegate;

}

@property (assign,nonatomic) id<CalDAVAccountDelegatesRefreshDelegate> mdelegate;              //@synthesize mdelegate=_mdelegate - In the implementation block
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setMdelegate:(id<CalDAVAccountDelegatesRefreshDelegate>)arg1 ;
-(void)refreshDelegates;
-(id<CalDAVAccountDelegatesRefreshDelegate>)mdelegate;
@end

