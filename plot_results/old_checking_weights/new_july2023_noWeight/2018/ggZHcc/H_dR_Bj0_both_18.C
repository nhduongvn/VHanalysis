void H_dR_Bj0_both_18()
{
//=========Macro generated from canvas: H_dR_Bj0_both_18/H_dR_Bj0_both_18
//=========  (Thu Aug  3 12:26:07 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_18 = new TCanvas("H_dR_Bj0_both_18", "H_dR_Bj0_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_both_18->SetHighLightColor(2);
   H_dR_Bj0_both_18->Range(-1.2,-0.002202478,6.8,0.0198223);
   H_dR_Bj0_both_18->SetFillColor(0);
   H_dR_Bj0_both_18->SetBorderMode(0);
   H_dR_Bj0_both_18->SetBorderSize(2);
   H_dR_Bj0_both_18->SetLeftMargin(0.15);
   H_dR_Bj0_both_18->SetFrameBorderMode(0);
   H_dR_Bj0_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(1,0.003595882);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(2,0.01378421);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(3,0.01678078);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(4,0.01468318);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(5,0.01018833);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(6,0.00839039);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(7,0.005393822);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(8,0.006292793);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(9,0.002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(10,0.002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(11,0.002397254);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(12,0.002397254);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(13,0.002097598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(14,0.001198627);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(15,0.002097598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(16,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(17,0.002097598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(18,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(20,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(1,0.001038042);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(2,0.002032371);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(3,0.002242426);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(4,0.002097598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(5,0.001747284);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(6,0.001585635);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(7,0.001271336);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(8,0.0013732);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(9,0.000947598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(10,0.000947598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(11,0.0008475574);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(12,0.0008475574);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(13,0.0007928174);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(14,0.0005993136);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(15,0.0007928174);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(16,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(17,0.0007928174);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(18,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(20,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetEntries(330);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_12->SetFillColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_both_18->Modified();
   H_dR_Bj0_both_18->cd();
   H_dR_Bj0_both_18->SetSelected(H_dR_Bj0_both_18);
}
