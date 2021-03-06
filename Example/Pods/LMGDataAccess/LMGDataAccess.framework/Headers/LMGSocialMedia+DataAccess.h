//
//  LMGSocialMedia+DataAccess.h
//  Platform Client
//
//  Created by Myroslav Pomazan on 2018-07-10.
//  Copyright © 2018 GetintheLoop Marketing Ltd. All rights reserved.
//

@import LMGDomain;
#import "LMGDASocialMedia.h"

@interface LMGSocialMedia (DataAccess)

- (nonnull LMGDASocialMedia *)toDataAccess;

@end

@interface LMGDASocialMedia (DataAccess)

- (nonnull LMGSocialMedia *)toDomain;

@end
