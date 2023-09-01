#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_tags_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_16/Z_jetmass_JEC_tags_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_JEC_tags_16 = new TCanvas("Z_jetmass_JEC_tags_16", "Z_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_16->SetHighLightColor(2);
   Z_jetmass_JEC_tags_16->Range(-60,-1.166605,340,10.49944);
   Z_jetmass_JEC_tags_16->SetFillColor(0);
   Z_jetmass_JEC_tags_16->SetBorderMode(0);
   Z_jetmass_JEC_tags_16->SetBorderSize(2);
   Z_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC__356 = new TH1D("VbbHcc_tags_Z_jetmass_JEC__356","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(3,0.1549685);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(4,1.052084);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(5,8.888415);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(6,8.806966);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(7,5.759935);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(8,4.498761);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(9,2.43888);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(10,0.9623574);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(11,1.787898);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(12,0.9521195);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(13,0.1956644);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(14,0.4593686);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(16,0.2516465);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(17,0.2001095);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(20,0.2382862);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(3,0.1549685);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(4,0.4785075);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(5,1.404877);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(6,1.409254);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(7,1.113691);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(8,1.004956);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(9,0.7125318);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(10,0.4540176);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(11,0.6821708);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(12,0.4276423);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(13,0.1956644);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(14,0.3334417);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(16,0.2516465);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(17,0.2001095);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(20,0.2382862);
   VbbHcc_tags_Z_jetmass_JEC__356->SetEntries(173);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_jetmass_JEC__356->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC__356->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC__356->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC__356->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__356->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_JEC__356->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__356->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__356->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__356->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__356->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_JEC__356->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__356->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_16->Modified();
   Z_jetmass_JEC_tags_16->cd();
   Z_jetmass_JEC_tags_16->SetSelected(Z_jetmass_JEC_tags_16);
}
