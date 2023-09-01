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
   Z_jetmass_JEC_tags_18->Range(-60,-2.41831,340,21.76479);
   Z_jetmass_JEC_tags_18->SetFillColor(0);
   Z_jetmass_JEC_tags_18->SetBorderMode(0);
   Z_jetmass_JEC_tags_18->SetBorderSize(2);
   Z_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC__356 = new TH1D("VbbHcc_tags_Z_jetmass_JEC__356","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(4,2.331983);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(5,10.70111);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(6,18.42522);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(7,12.51156);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(8,10.88007);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(9,8.735879);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(10,6.451756);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(11,2.630091);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(12,2.544408);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(13,1.381636);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(14,1.790799);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(15,1.116678);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(16,0.05819662);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(18,0.2845501);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(19,0.7958533);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(20,0.8274357);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(23,0.1386308);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinContent(33,0.4176608);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(4,0.9789216);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(5,1.990331);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(6,2.863824);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(7,2.424891);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(8,2.067644);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(9,1.871053);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(10,1.559358);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(11,1.000595);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(12,0.9987339);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(13,0.8791652);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(14,0.8210957);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(15,0.5659467);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(16,0.05819662);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(18,0.2845501);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(19,0.4837655);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(20,0.5976794);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(23,0.1386308);
   VbbHcc_tags_Z_jetmass_JEC__356->SetBinError(33,0.4176608);
   VbbHcc_tags_Z_jetmass_JEC__356->SetEntries(230);

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
