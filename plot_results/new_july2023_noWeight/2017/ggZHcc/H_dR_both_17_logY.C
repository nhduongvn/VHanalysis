void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Thu Aug 10 12:32:46 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,-4.245927,6.8,-1.624561);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLogy();
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.002076057);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.003114085);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.005605353);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.005812958);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.006850987);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.003944507);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.003114085);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.003944507);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.004359719);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.003529296);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.00332169);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.003529296);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.004982536);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.004359719);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.001660845);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.00145324);
   VbbHcc_both_H_dR_stack_12->SetBinContent(19,0.000622817);
   VbbHcc_both_H_dR_stack_12->SetBinContent(20,0.000622817);
   VbbHcc_both_H_dR_stack_12->SetBinContent(21,0.000622817);
   VbbHcc_both_H_dR_stack_12->SetBinContent(23,0.0002076057);
   VbbHcc_both_H_dR_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.0006565067);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.0008040532);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.001078751);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.001098546);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.001192604);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.0009049321);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.0008040532);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.0009049321);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.0009513686);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.00085598);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.0008304226);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.00085598);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.001017056);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.0009513686);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0005871975);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.0005492729);
   VbbHcc_both_H_dR_stack_12->SetBinError(19,0.0003595835);
   VbbHcc_both_H_dR_stack_12->SetBinError(20,0.0003595835);
   VbbHcc_both_H_dR_stack_12->SetBinError(21,0.0003595835);
   VbbHcc_both_H_dR_stack_12->SetBinError(23,0.0002076057);
   VbbHcc_both_H_dR_stack_12->SetBinError(24,0.0002076057);
   VbbHcc_both_H_dR_stack_12->SetEntries(308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
