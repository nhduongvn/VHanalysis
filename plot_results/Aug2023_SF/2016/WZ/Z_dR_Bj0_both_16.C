#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_16/Z_dR_Bj0_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj0_both_16 = new TCanvas("Z_dR_Bj0_both_16", "Z_dR_Bj0_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_16->SetHighLightColor(2);
   Z_dR_Bj0_both_16->Range(-1.2,-0.1717674,6.8,1.545906);
   Z_dR_Bj0_both_16->SetFillColor(0);
   Z_dR_Bj0_both_16->SetBorderMode(0);
   Z_dR_Bj0_both_16->SetBorderSize(2);
   Z_dR_Bj0_both_16->SetLeftMargin(0.15);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_Bj0__910 = new TH1D("VbbHcc_both_Z_dR_Bj0__910","",30,0,6);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(1,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(2,1.090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(3,1.308704);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(4,0.4362346);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(5,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(6,0.2181173);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(7,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(8,0.2181173);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(9,0.4362346);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(10,0.4362346);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(11,0.2181173);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(12,0.2181173);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(13,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(14,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(15,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(16,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(17,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(19,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinContent(20,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(1,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(2,0.3448737);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(3,0.3777902);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(4,0.2181173);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(5,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(6,0.1542322);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(7,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(8,0.1542322);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(9,0.2181173);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(10,0.2181173);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(11,0.1542322);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(12,0.1542322);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(13,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(14,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(15,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(16,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(17,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(19,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetBinError(20,0.1090586);
   VbbHcc_both_Z_dR_Bj0__910->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj0__910->SetFillColor(ci);
   VbbHcc_both_Z_dR_Bj0__910->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_both_Z_dR_Bj0__910->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_Bj0__910->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__910->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0__910->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__910->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__910->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__910->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__910->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0__910->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__910->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_16->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->SetSelected(Z_dR_Bj0_both_16);
}
