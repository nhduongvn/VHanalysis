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
   Z_jetmass_JEC_tags_18->Range(-60,-0.005313911,340,0.0478252);
   Z_jetmass_JEC_tags_18->SetFillColor(0);
   Z_jetmass_JEC_tags_18->SetBorderMode(0);
   Z_jetmass_JEC_tags_18->SetBorderSize(2);
   Z_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC__359 = new TH1D("VbbHcc_tags_Z_jetmass_JEC__359","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(4,0.004943145);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(5,0.01704377);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(6,0.04048694);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(7,0.03592693);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(8,0.02047546);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(9,0.03469546);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(10,0.006610502);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(11,0.01388041);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(12,0.003772776);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(13,0.00383355);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(14,0.002005537);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(16,0.003099963);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(17,0.003835449);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinContent(27,0.001908114);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(4,0.003535734);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(5,0.006480585);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(6,0.01055317);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(7,0.01035179);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(8,0.008136605);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(9,0.009381441);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(10,0.003829427);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(11,0.006512727);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(12,0.002668002);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(13,0.002715342);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(14,0.002005537);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(16,0.003099963);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(17,0.003835449);
   VbbHcc_tags_Z_jetmass_JEC__359->SetBinError(27,0.001908114);
   VbbHcc_tags_Z_jetmass_JEC__359->SetEntries(77);

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
