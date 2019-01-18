//
// Created by jwkim98 on 19. 1. 14.
//

#include "../../../includes/cpu_emulator/system_agent/process.hpp"
#include "../../../includes/cpu_emulator/processor_util/instruction_set.hpp"

namespace TakiMatrix::processor {

    void process::instruction_queue_push(
            const TakiMatrix::processor::isa& instruction)
    {
        m_instruction_queue.push(instruction);
    }

    isa process::instruction_queue_pop() { return m_instruction_queue.pop(); }

    void process::reservation_table_insert(const isa& instruction)
    {
        m_reservation_table.insert(instruction);
    }

    void process::instruction_queue_wait_until_empty()
    {
        m_instruction_queue.wait_until_empty();
    }

    std::deque<isa> process::reservation_table_scan()
    {
        std::deque<isa> start_list;
        m_reservation_table.scan(start_list);
        return start_list;
    }

} // namespace TakiMatrix::processor