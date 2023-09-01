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
   Z_jetmass_JEC_tags_16->Range(-60,-0.1450749,340,1.305674);
   Z_jetmass_JEC_tags_16->SetFillColor(0);
   Z_jetmass_JEC_tags_16->SetBorderMode(0);
   Z_jetmass_JEC_tags_16->SetBorderSize(2);
   Z_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC__355 = new TH1D("VbbHcc_tags_Z_jetmass_JEC__355","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(4,0.2578641);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(5,1.105332);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(6,0.8063954);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(7,0.4532066);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(8,0.6512773);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(9,0.4454102);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(10,0.07985507);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(12,0.07761386);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(14,0.09024115);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(15,0.09546661);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(16,0.1733041);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(18,0.3595302);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(4,0.152332);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(5,0.3245639);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(6,0.2918076);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(7,0.206776);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(8,0.2504113);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(9,0.2260203);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(10,0.07985507);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(12,0.07761386);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(14,0.09024115);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(15,0.09546661);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(16,0.1269051);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(18,0.2078364);
   VbbHcc_tags_Z_jetmass_JEC__355->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_jetmass_JEC__355->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC__355->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC__355->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC__355->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__355->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_JEC__355->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__355->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__355->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__355->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__355->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_JEC__355->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__355->Draw("HIST");
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
