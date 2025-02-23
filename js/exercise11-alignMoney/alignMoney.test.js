import { expect, describe, it, vi, beforeAll } from "vitest";
import alignMoney from "./alignMoney.js";

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

describe("key", () => {
	let key;
	beforeAll(async () => {
		try {
			key = await import("./etc/.key/exercise11-alignMoney.js").then(module => module.main);
		} catch (error) {
			console.warn("Key file not found. Skipping key tests.");
			key = null;
		}
	});

	if (!key) {
		it.skip("Key file not found. Skipping key tests.");
	}
	else {
		it("Should print the correct output to the console", () => {
			const stdoutSpy = vi.spyOn(process.stdout, "write");
			key();
			expect(stdoutSpy).toHaveBeenCalledTimes(3);
			expect(stdoutSpy.mock.calls[0][0]).toBe("$ 124.45\t$ 321.31\n");
			expect(stdoutSpy.mock.calls[1][0]).toBe("$   1.74\t$   4.21\n");
			expect(stdoutSpy.mock.calls[2][0]).toBe("$7539.12\t$  54.92\n");
			stdoutSpy.mockRestore();
		});
	}
});
