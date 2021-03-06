/**
 * Copyright (c) 2011-2017 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN_DATABASE_SETTINGS_HPP
#define LIBBITCOIN_DATABASE_SETTINGS_HPP

#include <cstdint>
#include <boost/filesystem.hpp>
#include <bitcoin/database/define.hpp>

namespace libbitcoin {
namespace database {

/// Common database configuration settings, properties not thread safe.
class BCD_API settings
{
public:
    settings();
    settings(config::settings context);

    /// Properties.
    boost::filesystem::path directory;
    bool flush_writes;
    uint16_t file_growth_rate;
    uint32_t index_start_height;
    uint32_t block_table_buckets;
    uint32_t transaction_table_buckets;
    uint32_t spend_table_buckets;
    uint32_t history_table_buckets;
    uint32_t cache_capacity;
};

} // namespace database
} // namespace libbitcoin

#endif
