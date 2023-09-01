#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_16/Z_dR_Bj1_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj1_both_16 = new TCanvas("Z_dR_Bj1_both_16", "Z_dR_Bj1_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_16->SetHighLightColor(2);
   Z_dR_Bj1_both_16->Range(-1.2,-0.03527194,6.8,0.3174475);
   Z_dR_Bj1_both_16->SetFillColor(0);
   Z_dR_Bj1_both_16->SetBorderMode(0);
   Z_dR_Bj1_both_16->SetBorderSize(2);
   Z_dR_Bj1_both_16->SetLeftMargin(0.15);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_Bj1__924 = new TH1D("VbbHcc_both_Z_dR_Bj1__924","",30,0,6);
   VbbHcc_both_Z_dR_Bj1__924->SetBinContent(3,0.2687386);
   VbbHcc_both_Z_dR_Bj1__924->SetBinContent(4,0.2687386);
   VbbHcc_both_Z_dR_Bj1__924->SetBinContent(5,0.2687386);
   VbbHcc_both_Z_dR_Bj1__924->SetBinContent(6,0.2687386);
   VbbHcc_both_Z_dR_Bj1__924->SetBinContent(7,0.1343693);
   VbbHcc_both_Z_dR_Bj1__924->SetBinContent(17,0.1343693);
   VbbHcc_both_Z_dR_Bj1__924->SetBinContent(21,0.1343693);
   VbbHcc_both_Z_dR_Bj1__924->SetBinError(3,0.1900269);
   VbbHcc_both_Z_dR_Bj1__924->SetBinError(4,0.1900269);
   VbbHcc_both_Z_dR_Bj1__924->SetBinError(5,0.1900269);
   VbbHcc_both_Z_dR_Bj1__924->SetBinError(6,0.1900269);
   VbbHcc_both_Z_dR_Bj1__924->SetBinError(7,0.1343693);
   VbbHcc_both_Z_dR_Bj1__924->SetBinError(17,0.1343693);
   VbbHcc_both_Z_dR_Bj1__924->SetBinError(21,0.1343693);
   VbbHcc_both_Z_dR_Bj1__924->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj1__924->SetFillColor(ci);
   VbbHcc_both_Z_dR_Bj1__924->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VbbHcc_both_Z_dR_Bj1__924->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_Bj1__924->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__924->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1__924->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__924->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__924->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__924->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__924->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1__924->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__924->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_both_16->Modified();
   Z_dR_Bj1_both_16->cd();
   Z_dR_Bj1_both_16->SetSelected(Z_dR_Bj1_both_16);
}
