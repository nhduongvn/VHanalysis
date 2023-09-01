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
   Z_jetmass_JEC_tags_16->Range(-60,-0.001893071,340,0.01703764);
   Z_jetmass_JEC_tags_16->SetFillColor(0);
   Z_jetmass_JEC_tags_16->SetBorderMode(0);
   Z_jetmass_JEC_tags_16->SetBorderSize(2);
   Z_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC__359 = new TH1D("VbbHcc_tags_Z_jetmass_JEC__359","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(4,0.007532907);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(5,0.01413157);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(6,0.0144234);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(7,0.01371193);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(8,0.01324848);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(9,0.002318411);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(11,0.004842991);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(12,0.002530526);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(14,0.002352597);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(16,0.001927266);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(22,0.002340957);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(4,0.004421901);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(5,0.005414544);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(6,0.005574486);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(7,0.00571126);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(8,0.005522585);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(9,0.002318411);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(11,0.003425283);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(12,0.002530526);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(14,0.002352597);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(16,0.001927266);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(22,0.002340957);
   VbbHcc_tags_Z_jetmass_JEC__359->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_jetmass_JEC__359->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC__359->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC__359->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC__359->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__359->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_JEC__359->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__359->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__359->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__359->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__359->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_JEC__359->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__359->Draw("HIST");
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
