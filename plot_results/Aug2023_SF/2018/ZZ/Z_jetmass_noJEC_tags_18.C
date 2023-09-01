#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_tags_18()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_18/Z_jetmass_noJEC_tags_18
//=========  (Fri Sep  1 13:34:46 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_noJEC_tags_18 = new TCanvas("Z_jetmass_noJEC_tags_18", "Z_jetmass_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_18->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_18->Range(-60,-2.102973,340,18.92675);
   Z_jetmass_noJEC_tags_18->SetFillColor(0);
   Z_jetmass_noJEC_tags_18->SetBorderMode(0);
   Z_jetmass_noJEC_tags_18->SetBorderSize(2);
   Z_jetmass_noJEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC__341 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC__341","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(4,5.942613);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(5,12.25695);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(6,16.02265);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(7,11.125);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(8,8.500854);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(9,7.840564);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(10,7.010619);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(11,3.259801);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(12,2.747338);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(13,2.016481);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(14,1.661657);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(15,1.116678);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(17,0.4387166);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(18,0.2845501);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(19,0.1690486);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(20,0.7463035);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(21,0.3274169);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(22,0.1386308);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinContent(32,0.4176608);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(4,1.654959);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(5,2.203426);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(6,2.568749);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(7,2.199679);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(8,1.967016);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(9,1.7561);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(10,1.660613);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(11,1.093299);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(12,1.070634);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(13,1.000507);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(14,0.7552365);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(15,0.5659467);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(17,0.3849445);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(18,0.2845501);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(19,0.1690486);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(20,0.5573822);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(21,0.3274169);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(22,0.1386308);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetBinError(32,0.4176608);
   VbbHcc_tags_Z_jetmass_noJEC__341->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_jetmass_noJEC__341->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC__341->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__341->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__341->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_tags_18->Modified();
   Z_jetmass_noJEC_tags_18->cd();
   Z_jetmass_noJEC_tags_18->SetSelected(Z_jetmass_noJEC_tags_18);
}
