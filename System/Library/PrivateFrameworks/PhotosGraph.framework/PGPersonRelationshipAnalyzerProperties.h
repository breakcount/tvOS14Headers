/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PGPersonRelationshipAnalyzerProperties : NSObject {

	BOOL _hasParentContactName;
	BOOL _hasSameFamilyNameAsMePerson;
	BOOL _hasAnniversaryDate;
	BOOL _isTopTwoPersonSocialGroup;
	BOOL _isTopPerson;
	BOOL _personAgeDifferentThanMeNode;
	BOOL _personOldEnoughToBeMeNodeParentOrGrandparent;
	BOOL _personYoungEnoughToBeMeNodeChild;
	double _oneOnOneTripAttendanceRatio;
	double _tripAttendanceRatio;
	double _familyHolidayAttendanceRatio;
	unsigned long long _numberOfMomentsAtHome;
	unsigned long long _numberOfLoveEmojisExchanged;
	double _friendNightOutAttendanceRatio;
	double _weekendAppearanceRatio;
	double _calendarEventAttendanceRatio;
	double _momentsAtWorkAppearancesRatio;
	double _partnerScore;
	double _familyScore;
	double _parentScore;
	double _friendScore;
	double _coworkerScore;
	double _childScore;

}

@property (assign,nonatomic) double familyHolidayAttendanceRatio;                            //@synthesize familyHolidayAttendanceRatio=_familyHolidayAttendanceRatio - In the implementation block
@property (assign,nonatomic) BOOL hasParentContactName;                                      //@synthesize hasParentContactName=_hasParentContactName - In the implementation block
@property (assign,nonatomic) BOOL hasSameFamilyNameAsMePerson;                               //@synthesize hasSameFamilyNameAsMePerson=_hasSameFamilyNameAsMePerson - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMomentsAtHome;                       //@synthesize numberOfMomentsAtHome=_numberOfMomentsAtHome - In the implementation block
@property (assign,nonatomic) BOOL hasAnniversaryDate;                                        //@synthesize hasAnniversaryDate=_hasAnniversaryDate - In the implementation block
@property (assign,nonatomic) BOOL isTopTwoPersonSocialGroup;                                 //@synthesize isTopTwoPersonSocialGroup=_isTopTwoPersonSocialGroup - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLoveEmojisExchanged;                 //@synthesize numberOfLoveEmojisExchanged=_numberOfLoveEmojisExchanged - In the implementation block
@property (assign,nonatomic) BOOL isTopPerson;                                               //@synthesize isTopPerson=_isTopPerson - In the implementation block
@property (assign,nonatomic) double friendNightOutAttendanceRatio;                           //@synthesize friendNightOutAttendanceRatio=_friendNightOutAttendanceRatio - In the implementation block
@property (assign,nonatomic) double oneOnOneTripAttendanceRatio;                             //@synthesize oneOnOneTripAttendanceRatio=_oneOnOneTripAttendanceRatio - In the implementation block
@property (assign,nonatomic) double tripAttendanceRatio;                                     //@synthesize tripAttendanceRatio=_tripAttendanceRatio - In the implementation block
@property (assign,nonatomic) double weekendAppearanceRatio;                                  //@synthesize weekendAppearanceRatio=_weekendAppearanceRatio - In the implementation block
@property (assign,nonatomic) double calendarEventAttendanceRatio;                            //@synthesize calendarEventAttendanceRatio=_calendarEventAttendanceRatio - In the implementation block
@property (assign,nonatomic) double momentsAtWorkAppearancesRatio;                           //@synthesize momentsAtWorkAppearancesRatio=_momentsAtWorkAppearancesRatio - In the implementation block
@property (assign,nonatomic) BOOL personAgeDifferentThanMeNode;                              //@synthesize personAgeDifferentThanMeNode=_personAgeDifferentThanMeNode - In the implementation block
@property (assign,nonatomic) BOOL personOldEnoughToBeMeNodeParentOrGrandparent;              //@synthesize personOldEnoughToBeMeNodeParentOrGrandparent=_personOldEnoughToBeMeNodeParentOrGrandparent - In the implementation block
@property (assign,nonatomic) BOOL personYoungEnoughToBeMeNodeChild;                          //@synthesize personYoungEnoughToBeMeNodeChild=_personYoungEnoughToBeMeNodeChild - In the implementation block
@property (nonatomic,readonly) double partnerScore;                                          //@synthesize partnerScore=_partnerScore - In the implementation block
@property (nonatomic,readonly) double familyScore;                                           //@synthesize familyScore=_familyScore - In the implementation block
@property (nonatomic,readonly) double parentScore;                                           //@synthesize parentScore=_parentScore - In the implementation block
@property (nonatomic,readonly) double childScore;                                            //@synthesize childScore=_childScore - In the implementation block
@property (nonatomic,readonly) double friendScore;                                           //@synthesize friendScore=_friendScore - In the implementation block
@property (nonatomic,readonly) double coworkerScore;                                         //@synthesize coworkerScore=_coworkerScore - In the implementation block
-(id)description;
-(BOOL)hasParentContactName;
-(BOOL)hasSameFamilyNameAsMePerson;
-(unsigned long long)numberOfMomentsAtHome;
-(BOOL)hasAnniversaryDate;
-(unsigned long long)numberOfLoveEmojisExchanged;
-(BOOL)isTopPerson;
-(double)weekendAppearanceRatio;
-(id)edgeProperties;
-(void)registerAttendance:(unsigned long long)arg1 amongFamilyHolidays:(unsigned long long)arg2 ;
-(void)registerParentContactName;
-(void)registerSameFamilyNameAsMePerson;
-(void)registerNumberOfMomentsAtHome:(unsigned long long)arg1 amongMomentsAtHome:(unsigned long long)arg2 ;
-(void)registerAnniversaryDate;
-(void)registerTopTwoPersonSocialGroup;
-(void)registerNumberOfExchangedLoveEmojis:(unsigned long long)arg1 amongExchangedLoveEmojis:(unsigned long long)arg2 ;
-(void)registerTopPersonAmongTopPeople:(unsigned long long)arg1 ;
-(void)registerNumberOfNightsOut:(unsigned long long)arg1 amongNightsOut:(unsigned long long)arg2 ;
-(void)registerOneOnOneTripAppearance:(unsigned long long)arg1 amongOneOnOneTrips:(unsigned long long)arg2 ;
-(void)registerNumberOfTrips:(unsigned long long)arg1 withTripsScore:(double)arg2 amongTrips:(unsigned long long)arg3 ;
-(void)registerNumberOfWeekendMoments:(unsigned long long)arg1 amongWeekends:(unsigned long long)arg2 ;
-(void)registerAttendance:(unsigned long long)arg1 amongWorkCalendarEvents:(unsigned long long)arg2 ;
-(void)registerNumberOfMomentsAtWork:(unsigned long long)arg1 amongMomentsAtWork:(unsigned long long)arg2 ;
-(void)registerPersonOldEnoughToBeMeNodeParentOrMyGrandparent;
-(void)penalizePersonAgeCategoryDifferentThanMeNode;
-(void)registerPersonYoungEnoughToBeMeNodeChild;
-(double)oneOnOneTripAttendanceRatio;
-(void)setOneOnOneTripAttendanceRatio:(double)arg1 ;
-(double)tripAttendanceRatio;
-(void)setTripAttendanceRatio:(double)arg1 ;
-(double)familyHolidayAttendanceRatio;
-(void)setFamilyHolidayAttendanceRatio:(double)arg1 ;
-(void)setHasParentContactName:(BOOL)arg1 ;
-(void)setHasSameFamilyNameAsMePerson:(BOOL)arg1 ;
-(void)setNumberOfMomentsAtHome:(unsigned long long)arg1 ;
-(void)setHasAnniversaryDate:(BOOL)arg1 ;
-(BOOL)isTopTwoPersonSocialGroup;
-(void)setIsTopTwoPersonSocialGroup:(BOOL)arg1 ;
-(void)setNumberOfLoveEmojisExchanged:(unsigned long long)arg1 ;
-(void)setIsTopPerson:(BOOL)arg1 ;
-(double)friendNightOutAttendanceRatio;
-(void)setFriendNightOutAttendanceRatio:(double)arg1 ;
-(void)setWeekendAppearanceRatio:(double)arg1 ;
-(double)calendarEventAttendanceRatio;
-(void)setCalendarEventAttendanceRatio:(double)arg1 ;
-(double)momentsAtWorkAppearancesRatio;
-(void)setMomentsAtWorkAppearancesRatio:(double)arg1 ;
-(BOOL)personAgeDifferentThanMeNode;
-(void)setPersonAgeDifferentThanMeNode:(BOOL)arg1 ;
-(BOOL)personOldEnoughToBeMeNodeParentOrGrandparent;
-(void)setPersonOldEnoughToBeMeNodeParentOrGrandparent:(BOOL)arg1 ;
-(BOOL)personYoungEnoughToBeMeNodeChild;
-(void)setPersonYoungEnoughToBeMeNodeChild:(BOOL)arg1 ;
-(double)partnerScore;
-(double)familyScore;
-(double)parentScore;
-(double)friendScore;
-(double)coworkerScore;
-(double)childScore;
@end

