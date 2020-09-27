/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDInteractionAdvising;
@interface _CDInteractionAdvisorSimple : NSObject {

	id<_CDInteractionAdvising> _interactionAdvisor;

}

@property (retain) id<_CDInteractionAdvising> interactionAdvisor;              //@synthesize interactionAdvisor=_interactionAdvisor - In the implementation block
+(id)advisorSettingsForMatchingHandles:(id)arg1 mechanism:(long long)arg2 date:(id)arg3 count:(long long)arg4 ;
+(id)advisorSettingsForMatchingPersonID:(id)arg1 mechanism:(long long)arg2 date:(id)arg3 count:(long long)arg4 ;
+(id)advisorSettingsForMatchingDisplayName:(id)arg1 mechanism:(long long)arg2 date:(id)arg3 count:(long long)arg4 ;
-(id)init;
-(id<_CDInteractionAdvising>)interactionAdvisor;
-(id)initWithCoreDuetDaemon;
-(id)initWithInteractionAdvisor:(id)arg1 ;
-(void)setInteractionAdvisor:(id<_CDInteractionAdvising>)arg1 ;
-(id)rankedInteractionsForHandles:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 date:(id)arg4 ;
-(id)rankedInteractionsForPersonId:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 date:(id)arg4 ;
-(id)rankedInteractionsForDisplayName:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 date:(id)arg4 ;
-(id)initWithCoreDuetDatabase;
-(id)bestInteractionMatchingHandles:(id)arg1 mechanism:(long long)arg2 ;
-(id)bestInteractionMatchingContactID:(id)arg1 mechanism:(long long)arg2 ;
-(id)bestInteractionMatchingDisplayName:(id)arg1 mechanism:(long long)arg2 ;
-(id)rankedInteractionsForHandles:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 ;
-(id)rankedInteractionsForPersonId:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 ;
-(id)rankedInteractionsForDisplayName:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 ;
@end

