void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Tue Aug 22 09:22:43 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-0.4065296,6.8,3.658767);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_9 = new TH1D("VbbHcc_both_H_dR_stack_9","",30,0,6);
   VbbHcc_both_H_dR_stack_9->SetBinContent(3,1.55514);
   VbbHcc_both_H_dR_stack_9->SetBinContent(4,2.860613);
   VbbHcc_both_H_dR_stack_9->SetBinContent(5,3.097369);
   VbbHcc_both_H_dR_stack_9->SetBinContent(6,2.620838);
   VbbHcc_both_H_dR_stack_9->SetBinContent(7,1.871216);
   VbbHcc_both_H_dR_stack_9->SetBinContent(8,1.397532);
   VbbHcc_both_H_dR_stack_9->SetBinContent(9,0.9725567);
   VbbHcc_both_H_dR_stack_9->SetBinContent(10,0.9189422);
   VbbHcc_both_H_dR_stack_9->SetBinContent(11,1.025104);
   VbbHcc_both_H_dR_stack_9->SetBinContent(12,1.331674);
   VbbHcc_both_H_dR_stack_9->SetBinContent(13,1.79069);
   VbbHcc_both_H_dR_stack_9->SetBinContent(14,2.356794);
   VbbHcc_both_H_dR_stack_9->SetBinContent(15,2.940073);
   VbbHcc_both_H_dR_stack_9->SetBinContent(16,2.901935);
   VbbHcc_both_H_dR_stack_9->SetBinContent(17,1.007329);
   VbbHcc_both_H_dR_stack_9->SetBinContent(18,0.3418872);
   VbbHcc_both_H_dR_stack_9->SetBinContent(19,0.1384207);
   VbbHcc_both_H_dR_stack_9->SetBinContent(20,0.07157791);
   VbbHcc_both_H_dR_stack_9->SetBinContent(21,0.04719281);
   VbbHcc_both_H_dR_stack_9->SetBinContent(22,0.01886794);
   VbbHcc_both_H_dR_stack_9->SetBinContent(23,0.01031393);
   VbbHcc_both_H_dR_stack_9->SetBinContent(24,0.005452216);
   VbbHcc_both_H_dR_stack_9->SetBinContent(26,0.002032795);
   VbbHcc_both_H_dR_stack_9->SetBinError(3,0.04285435);
   VbbHcc_both_H_dR_stack_9->SetBinError(4,0.05718448);
   VbbHcc_both_H_dR_stack_9->SetBinError(5,0.05905033);
   VbbHcc_both_H_dR_stack_9->SetBinError(6,0.05342019);
   VbbHcc_both_H_dR_stack_9->SetBinError(7,0.04461497);
   VbbHcc_both_H_dR_stack_9->SetBinError(8,0.0379355);
   VbbHcc_both_H_dR_stack_9->SetBinError(9,0.03182093);
   VbbHcc_both_H_dR_stack_9->SetBinError(10,0.03137874);
   VbbHcc_both_H_dR_stack_9->SetBinError(11,0.03299736);
   VbbHcc_both_H_dR_stack_9->SetBinError(12,0.0380086);
   VbbHcc_both_H_dR_stack_9->SetBinError(13,0.04435167);
   VbbHcc_both_H_dR_stack_9->SetBinError(14,0.05112119);
   VbbHcc_both_H_dR_stack_9->SetBinError(15,0.05686186);
   VbbHcc_both_H_dR_stack_9->SetBinError(16,0.05697556);
   VbbHcc_both_H_dR_stack_9->SetBinError(17,0.03320002);
   VbbHcc_both_H_dR_stack_9->SetBinError(18,0.01955745);
   VbbHcc_both_H_dR_stack_9->SetBinError(19,0.01235292);
   VbbHcc_both_H_dR_stack_9->SetBinError(20,0.008765437);
   VbbHcc_both_H_dR_stack_9->SetBinError(21,0.007213225);
   VbbHcc_both_H_dR_stack_9->SetBinError(22,0.004589852);
   VbbHcc_both_H_dR_stack_9->SetBinError(23,0.003290662);
   VbbHcc_both_H_dR_stack_9->SetBinError(24,0.00244036);
   VbbHcc_both_H_dR_stack_9->SetBinError(26,0.001438294);
   VbbHcc_both_H_dR_stack_9->SetEntries(28929);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_stack_9->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
