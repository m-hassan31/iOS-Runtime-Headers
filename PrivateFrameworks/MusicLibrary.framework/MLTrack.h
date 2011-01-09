/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */



@interface MLTrack : NSObject <NSCopying>
{
    void *_trackInfoContext;
}

@property(copy) NSString *lyrics;


- (id)comments;
- (id)grouping;
- (unsigned long)number;
- (unsigned long)year;
- (id)path;
- (id)title;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (NSInteger)duration;
- (BOOL)isHidden;
- (void)dealloc;
- (id)initWithTrackContext:(void*)arg1;
- (void*)trackInfoContext;
- (BOOL)isEqualToTrack:(id)arg1;
- (double)timeValueForProperty:(unsigned long)arg1;
- (unsigned long long)globalID;
- (unsigned long long)albumPID;
- (unsigned long long)artistPID;
- (id)filePath;
- (BOOL)_isFilePathPlayable;
- (id)mobileArtworkCacheFolder;
- (id)artist;
- (id)albumArtist;
- (id)album;
- (id)composer;
- (id)genre;
- (id)infoShortDescription;
- (id)copyright;
- (double)releaseDate;
- (id)sortTitle;
- (id)sortArtist;
- (id)sortAlbum;
- (id)sortAlbumArtist;
- (id)sortComposer;
- (id)sortSeriesDisplayName;
- (id)podcastName;
- (id)podcastDirectStoreURL;
- (unsigned long long)storeItemAdamID;
- (unsigned long long)storePlaylistAdamID;
- (id)podcastURL;
- (id)lyrics;
- (void)setLyrics:(id)arg1;
- (unsigned long)bpm;
- (id)audioBookName;
- (id)seriesDisplayName;
- (id)seasonDisplayName;
- (NSUInteger)seasonNumber;
- (NSUInteger)episodeNumber;
- (unsigned long)audibleDRMGroupID;
- (BOOL)isAudibleAudioBook;
- (unsigned long)trackIndexInAlbum;
- (unsigned long)numberOfTracksInAlbum;
- (unsigned long)discNumber;
- (unsigned long)numberOfDiscs;
- (id)contentRatingInfo;
- (id)movieInfo;
- (unsigned long)ratingLevel;
- (unsigned long long)accountID;
- (unsigned long long)genreID;
- (unsigned long)mediaType;
- (BOOL)isCompilationTrack;
- (BOOL)isExcludedFromShuffle;
- (BOOL)isOTAPurchasedContent;
- (BOOL)isITunesU;
- (BOOL)hasLyrics;
- (BOOL)hasVideoData;
- (BOOL)isRental;
- (BOOL)isDemoRental;
- (double)demoRentalDuration;
- (double)demoRentalPlaybackDuration;
- (double)demoRentalPlaybackStartTime;
- (double)demoRentalStartTime;
- (BOOL)fakeAsDemoRental;
- (id)eqPresetName;
- (id)eqPreset;
- (float)volumeAdjustment;
- (float)volumeNormalization;
- (NSInteger)durationInMS;
- (NSInteger)startTimeInMS;
- (NSInteger)stopTimeInMS;
- (NSInteger)customStopTimeInMS;
- (NSInteger)totalTimeInMS;
- (void)gaplessHeuristicInfo:(NSUInteger*)arg1 duration:(NSUInteger*)arg2 lastPacketsResync:(NSUInteger*)arg3 encodingDelay:(NSUInteger*)arg4 encodingDrain:(NSUInteger*)arg5;
- (id)chapterTOC;
- (BOOL)hasChapterData;
- (BOOL)hasChapterArtwork;
- (BOOL)videoHasAlternateAudio;
- (BOOL)videoHasSubtitles;
- (NSUInteger)videoAudioTrackID;
- (void)setVideoAudioTrackID:(NSUInteger)arg1;
- (NSUInteger)videoSubtitleTrackID;
- (void)setVideoSubtitleTrackID:(NSUInteger)arg1;
- (BOOL)hasDataForArtworkType:(NSInteger)arg1;
- (BOOL)sharesArtworkWithTrack:(id)arg1 artworkType:(NSInteger)arg2 formatID:(NSUInteger)arg3 timeInMS:(NSUInteger)arg4 missingAlwaysComparesEqual:(BOOL)arg5;
- (id)_getImageDataForImageType:(NSInteger)arg1 artworkFormatID:(NSUInteger)arg2 size:(struct CGSize { float x1; float x2; })arg3 timeInMS:(NSUInteger)arg4 artworkInstanceInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { NSUInteger x_1_1_1; NSUInteger x_1_1_2; NSUInteger x_1_1_3; NSUInteger x_1_1_4; NSInteger x_1_1_5; NSInteger x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg5;
- (id)bestImageDataForImageType:(NSInteger)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)bestImageDataForImageType:(NSInteger)arg1 size:(struct CGSize { float x1; float x2; })arg2 timeInMS:(NSUInteger)arg3 artworkInstanceInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { NSUInteger x_1_1_1; NSUInteger x_1_1_2; NSUInteger x_1_1_3; NSUInteger x_1_1_4; NSInteger x_1_1_5; NSInteger x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg4;
- (id)imageDataForImageType:(NSInteger)arg1 artworkFormatID:(NSUInteger)arg2 timeInMS:(NSUInteger)arg3 artworkInstanceInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { NSUInteger x_1_1_1; NSUInteger x_1_1_2; NSUInteger x_1_1_3; NSUInteger x_1_1_4; NSInteger x_1_1_5; NSInteger x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg4;
- (id)availableArtworkForImageType:(NSInteger)arg1 formatIDsForTimeInMS:(NSUInteger)arg2;
- (BOOL)rating;
- (void)setRating:(BOOL)arg1;
- (BOOL)hasNominalAmountBeenPlayed;
- (double)nominalHasBeenPlayedThresholdInSeconds;
- (void)markNominalAmountHasBeenPlayed;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL*)arg2;
- (void)incrementSkipCount;
- (NSUInteger)skipCount;
- (double)lastSkippedDate;
- (BOOL)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementPlayCountForPlayingToEnd;
- (NSUInteger)playCount;
- (double)lastPlayedDate;
- (BOOL)markAsDeleted;
- (BOOL)isExplicitBasedOnCurrentRestrictions;
- (BOOL)shouldBookmarkLastPlayedTime;
- (BOOL)hasLastPlayedBookmarkTime;
- (void)clearLastPlayedBookmarkTime;
- (void)setLastPlayedBookmarkTimeInSeconds:(double)arg1;
- (double)lastPlayedBookmarkTimeInSeconds;
- (id)infoDescription;
- (unsigned long long)persistentUID;
- (id)stringValueForProperty:(unsigned long)arg1;
- (unsigned long long)unsignedValueForProperty:(unsigned long)arg1;
- (unsigned long)uniqueID;
- (unsigned long)imageDBRecordID:(NSInteger)arg1;
- (unsigned long long)fileSize;

@end
