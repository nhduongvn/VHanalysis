#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_tags_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_18/Z_jetmass_JEC_tags_18
//=========  (Fri Sep  1 13:34:46 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_JEC_tags_18 = new TCanvas("Z_jetmass_JEC_tags_18", "Z_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_18->SetHighLightColor(2);
   Z_jetmass_JEC_tags_18->Range(-60,-0.8460402,340,7.614362);
   Z_jetmass_JEC_tags_18->SetFillColor(0);
   Z_jetmass_JEC_tags_18->SetBorderMode(0);
   Z_jetmass_JEC_tags_18->SetBorderSize(2);
   Z_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC__355 = new TH1D("VbbHcc_tags_Z_jetmass_JEC__355","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(3,0.5183212);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(4,0.5814054);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(5,6.44602);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(6,1.238038);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(7,2.044711);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(8,3.714008);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(9,1.290473);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(10,0.402246);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(11,2.12072);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(13,0.6143759);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(14,0.5004492);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinContent(15,0.9532567);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(3,0.5183212);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(4,0.5814054);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(5,3.139494);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(6,0.8806786);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(7,1.046641);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(8,1.996492);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(9,1.290473);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(10,0.402246);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(11,1.187596);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(13,0.6143759);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(14,0.5004492);
   VbbHcc_tags_Z_jetmass_JEC__355->SetBinError(15,0.9532567);
   VbbHcc_tags_Z_jetmass_JEC__355->SetEntries(26);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_18->Modified();
   Z_jetmass_JEC_tags_18->cd();
   Z_jetmass_JEC_tags_18->SetSelected(Z_jetmass_JEC_tags_18);
}
