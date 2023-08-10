void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Thu Aug 10 12:24:48 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-2.956304,6.8,26.60673);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_5 = new TH1D("VbbHcc_both_H_dR_stack_5","",30,0,6);
   VbbHcc_both_H_dR_stack_5->SetBinContent(3,9.74911);
   VbbHcc_both_H_dR_stack_5->SetBinContent(4,10.8117);
   VbbHcc_both_H_dR_stack_5->SetBinContent(5,15.48032);
   VbbHcc_both_H_dR_stack_5->SetBinContent(6,5.916608);
   VbbHcc_both_H_dR_stack_5->SetBinContent(7,9.467839);
   VbbHcc_both_H_dR_stack_5->SetBinContent(8,6.355294);
   VbbHcc_both_H_dR_stack_5->SetBinContent(9,10.04646);
   VbbHcc_both_H_dR_stack_5->SetBinContent(10,6.782224);
   VbbHcc_both_H_dR_stack_5->SetBinContent(11,12.89467);
   VbbHcc_both_H_dR_stack_5->SetBinContent(12,11.55295);
   VbbHcc_both_H_dR_stack_5->SetBinContent(13,14.84692);
   VbbHcc_both_H_dR_stack_5->SetBinContent(14,22.52422);
   VbbHcc_both_H_dR_stack_5->SetBinContent(15,21.67256);
   VbbHcc_both_H_dR_stack_5->SetBinContent(16,18.26546);
   VbbHcc_both_H_dR_stack_5->SetBinContent(17,11.07592);
   VbbHcc_both_H_dR_stack_5->SetBinContent(18,6.587121);
   VbbHcc_both_H_dR_stack_5->SetBinContent(19,3.906021);
   VbbHcc_both_H_dR_stack_5->SetBinContent(20,4.276945);
   VbbHcc_both_H_dR_stack_5->SetBinContent(21,3.183419);
   VbbHcc_both_H_dR_stack_5->SetBinContent(22,0.941826);
   VbbHcc_both_H_dR_stack_5->SetBinContent(23,0.4297517);
   VbbHcc_both_H_dR_stack_5->SetBinContent(24,1.767628);
   VbbHcc_both_H_dR_stack_5->SetBinContent(25,0.06830193);
   VbbHcc_both_H_dR_stack_5->SetBinContent(26,0.000296794);
   VbbHcc_both_H_dR_stack_5->SetBinError(3,1.450671);
   VbbHcc_both_H_dR_stack_5->SetBinError(4,2.122954);
   VbbHcc_both_H_dR_stack_5->SetBinError(5,7.349526);
   VbbHcc_both_H_dR_stack_5->SetBinError(6,1.274717);
   VbbHcc_both_H_dR_stack_5->SetBinError(7,2.022935);
   VbbHcc_both_H_dR_stack_5->SetBinError(8,0.861431);
   VbbHcc_both_H_dR_stack_5->SetBinError(9,2.31114);
   VbbHcc_both_H_dR_stack_5->SetBinError(10,0.8410467);
   VbbHcc_both_H_dR_stack_5->SetBinError(11,2.338732);
   VbbHcc_both_H_dR_stack_5->SetBinError(12,1.88304);
   VbbHcc_both_H_dR_stack_5->SetBinError(13,2.241309);
   VbbHcc_both_H_dR_stack_5->SetBinError(14,7.686726);
   VbbHcc_both_H_dR_stack_5->SetBinError(15,2.912904);
   VbbHcc_both_H_dR_stack_5->SetBinError(16,2.774198);
   VbbHcc_both_H_dR_stack_5->SetBinError(17,1.836142);
   VbbHcc_both_H_dR_stack_5->SetBinError(18,1.426478);
   VbbHcc_both_H_dR_stack_5->SetBinError(19,0.6841039);
   VbbHcc_both_H_dR_stack_5->SetBinError(20,1.288877);
   VbbHcc_both_H_dR_stack_5->SetBinError(21,1.32267);
   VbbHcc_both_H_dR_stack_5->SetBinError(22,0.2934072);
   VbbHcc_both_H_dR_stack_5->SetBinError(23,0.2068537);
   VbbHcc_both_H_dR_stack_5->SetBinError(24,1.123628);
   VbbHcc_both_H_dR_stack_5->SetBinError(25,0.06830193);
   VbbHcc_both_H_dR_stack_5->SetBinError(26,0.000296794);
   VbbHcc_both_H_dR_stack_5->SetEntries(3431);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_stack_5->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_5->Draw("HIST");
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
