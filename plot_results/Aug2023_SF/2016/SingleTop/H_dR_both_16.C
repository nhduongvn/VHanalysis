#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Fri Sep  1 13:23:42 2023) by ROOT version 6.28/04
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-8.400341,6.8,75.60306);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR__800 = new TH1D("VbbHcc_both_H_dR__800","",30,0,6);
   VbbHcc_both_H_dR__800->SetBinContent(3,15.33461);
   VbbHcc_both_H_dR__800->SetBinContent(4,23.13753);
   VbbHcc_both_H_dR__800->SetBinContent(5,22.23118);
   VbbHcc_both_H_dR__800->SetBinContent(6,24.0278);
   VbbHcc_both_H_dR__800->SetBinContent(7,25.62538);
   VbbHcc_both_H_dR__800->SetBinContent(8,29.78141);
   VbbHcc_both_H_dR__800->SetBinContent(9,37.57461);
   VbbHcc_both_H_dR__800->SetBinContent(10,32.74535);
   VbbHcc_both_H_dR__800->SetBinContent(11,37.93531);
   VbbHcc_both_H_dR__800->SetBinContent(12,44.63272);
   VbbHcc_both_H_dR__800->SetBinContent(13,47.15759);
   VbbHcc_both_H_dR__800->SetBinContent(14,56.94645);
   VbbHcc_both_H_dR__800->SetBinContent(15,64.00259);
   VbbHcc_both_H_dR__800->SetBinContent(16,59.38155);
   VbbHcc_both_H_dR__800->SetBinContent(17,39.41203);
   VbbHcc_both_H_dR__800->SetBinContent(18,20.28365);
   VbbHcc_both_H_dR__800->SetBinContent(19,13.94176);
   VbbHcc_both_H_dR__800->SetBinContent(20,11.17808);
   VbbHcc_both_H_dR__800->SetBinContent(21,7.818922);
   VbbHcc_both_H_dR__800->SetBinContent(22,4.024061);
   VbbHcc_both_H_dR__800->SetBinContent(23,3.486471);
   VbbHcc_both_H_dR__800->SetBinContent(24,1.22862);
   VbbHcc_both_H_dR__800->SetBinContent(25,0.8459879);
   VbbHcc_both_H_dR__800->SetBinContent(26,0.3727308);
   VbbHcc_both_H_dR__800->SetBinContent(27,0.0322977);
   VbbHcc_both_H_dR__800->SetBinContent(28,0.2129818);
   VbbHcc_both_H_dR__800->SetBinError(3,1.606183);
   VbbHcc_both_H_dR__800->SetBinError(4,1.971727);
   VbbHcc_both_H_dR__800->SetBinError(5,1.947833);
   VbbHcc_both_H_dR__800->SetBinError(6,1.923883);
   VbbHcc_both_H_dR__800->SetBinError(7,1.982174);
   VbbHcc_both_H_dR__800->SetBinError(8,2.128936);
   VbbHcc_both_H_dR__800->SetBinError(9,2.578199);
   VbbHcc_both_H_dR__800->SetBinError(10,2.287618);
   VbbHcc_both_H_dR__800->SetBinError(11,2.431273);
   VbbHcc_both_H_dR__800->SetBinError(12,2.719794);
   VbbHcc_both_H_dR__800->SetBinError(13,2.675906);
   VbbHcc_both_H_dR__800->SetBinError(14,3.000954);
   VbbHcc_both_H_dR__800->SetBinError(15,3.164121);
   VbbHcc_both_H_dR__800->SetBinError(16,3.035212);
   VbbHcc_both_H_dR__800->SetBinError(17,2.493906);
   VbbHcc_both_H_dR__800->SetBinError(18,1.619748);
   VbbHcc_both_H_dR__800->SetBinError(19,1.45315);
   VbbHcc_both_H_dR__800->SetBinError(20,1.315528);
   VbbHcc_both_H_dR__800->SetBinError(21,0.940393);
   VbbHcc_both_H_dR__800->SetBinError(22,0.674133);
   VbbHcc_both_H_dR__800->SetBinError(23,0.6888182);
   VbbHcc_both_H_dR__800->SetBinError(24,0.3351063);
   VbbHcc_both_H_dR__800->SetBinError(25,0.2585107);
   VbbHcc_both_H_dR__800->SetBinError(26,0.1269738);
   VbbHcc_both_H_dR__800->SetBinError(27,0.0322977);
   VbbHcc_both_H_dR__800->SetBinError(28,0.214244);
   VbbHcc_both_H_dR__800->SetEntries(9878);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR__800->SetFillColor(ci);
   VbbHcc_both_H_dR__800->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR__800->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR__800->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__800->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__800->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__800->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__800->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__800->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__800->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__800->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__800->Draw("HIST");
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
