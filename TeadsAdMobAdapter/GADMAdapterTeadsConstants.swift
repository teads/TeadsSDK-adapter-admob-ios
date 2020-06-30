//
//  GADMAdapterTeadsConstants.swift
//  TeadsAdMobAdapter
//
//  Created by Gwendal Madouas on 21/11/2019.
//  Copyright © 2019 teads. All rights reserved.
//

import Foundation

/// Structure defining constants used by Teads adapter.
public struct GADMAdapterTeadsConstants {
    static let teadsAdapterErrorDomain  = "tv.teads.adapter.admob"
    static let teadsAdContainerKey      = "adContainer"
}

/// Enumeration defining possible errors in Teads adapter.
public enum TeadsAdapterErrorCode: Int {
    case pidNotFound
    case loadingFailure
}

extension NSError {

    static func from(code: TeadsAdapterErrorCode,
                     description: String) -> Error {

        let userInfo = [NSLocalizedDescriptionKey: description,
                        NSLocalizedFailureReasonErrorKey: description]

        return NSError(domain: GADMAdapterTeadsConstants.teadsAdapterErrorDomain,
                       code: code.rawValue,
                       userInfo: userInfo)
    }
}
