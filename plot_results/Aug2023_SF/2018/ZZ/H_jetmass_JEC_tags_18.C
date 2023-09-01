#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_tags_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_18/H_jetmass_JEC_tags_18
//=========  (Fri Sep  1 13:34:46 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_JEC_tags_18 = new TCanvas("H_jetmass_JEC_tags_18", "H_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_18->SetHighLightColor(2);
   H_jetmass_JEC_tags_18->Range(-60,-2.02509,340,18.22581);
   H_jetmass_JEC_tags_18->SetFillColor(0);
   H_jetmass_JEC_tags_18->SetBorderMode(0);
   H_jetmass_JEC_tags_18->SetBorderSize(2);
   H_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC__296 = new TH1D("VbbHcc_tags_H_jetmass_JEC__296","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(3,0.689876);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(4,9.049518);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(5,15.42926);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(6,15.16766);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(7,11.65879);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(8,8.982235);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(9,7.854953);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(10,4.344742);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(11,2.656449);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(12,1.576422);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(13,0.7692232);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(14,0.6954484);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(15,1.065427);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(16,0.2338011);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(17,0.1795767);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(18,0.3274169);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(19,0.2462847);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(21,0.1913849);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(25,0.3088019);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(27,0.2384906);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(30,0.35777);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(3,0.4981714);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(4,1.929201);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(5,2.646745);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(6,2.522035);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(7,2.130494);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(8,1.946958);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(9,1.722885);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(10,1.421469);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(11,0.9655329);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(12,0.6765261);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(13,0.5526354);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(14,0.5194273);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(15,0.8080674);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(16,0.2338011);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(17,0.1795767);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(18,0.3274169);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(19,0.2462847);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(21,0.1913849);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(25,0.3088019);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(27,0.2384906);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(30,0.35777);
   VbbHcc_tags_H_jetmass_JEC__296->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_jetmass_JEC__296->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC__296->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC__296->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC__296->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__296->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__296->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__296->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__296->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__296->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__296->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__296->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__296->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_18->Modified();
   H_jetmass_JEC_tags_18->cd();
   H_jetmass_JEC_tags_18->SetSelected(H_jetmass_JEC_tags_18);
}
