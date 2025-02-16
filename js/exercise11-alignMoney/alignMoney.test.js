import { expect, describe, it, vi } from "vitest";
import alignMoney from "./alignMoney.js";
import { alignMoney as key } from "./etc/.key/exercise11-alignMoney.js";

describe("alignMoney", () => {
	it("Should print the correct output to the console", () => {
		const stdoutSpy = vi.spyOn(process.stdout, "write");
		alignMoney();
		expect(stdoutSpy).toHaveBeenCalledTimes(3);
		expect(stdoutSpy.mock.calls[0][0]).toBe("$ 124.45\t$ 321.31\n");
		expect(stdoutSpy.mock.calls[1][0]).toBe("$   1.74\t$   4.21\n");
		expect(stdoutSpy.mock.calls[2][0]).toBe("$7539.12\t$  54.92\n");
		stdoutSpy.mockRestore();
	});
});

if (key) { // 'stretch-programs-keys' is in the same dir as 'stretch-programs'
	describe("key", () => {
		it("Should print the correct output to the console", () => {
			const stdoutSpy = vi.spyOn(process.stdout, "write");
			key();
			expect(stdoutSpy).toHaveBeenCalledTimes(3);
			expect(stdoutSpy.mock.calls[0][0]).toBe("$ 124.45\t$ 321.31\n");
			expect(stdoutSpy.mock.calls[1][0]).toBe("$   1.74\t$   4.21\n");
			expect(stdoutSpy.mock.calls[2][0]).toBe("$7539.12\t$  54.92\n");
			stdoutSpy.mockRestore();
		});
	});
}
