#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-1606.955,1.133333,14462.59);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__216 = new TH1D("VbbHcc_tags_Sphericity__216","",25,0,1);
   VbbHcc_tags_Sphericity__216->SetBinContent(1,12243.47);
   VbbHcc_tags_Sphericity__216->SetBinContent(2,9934.047);
   VbbHcc_tags_Sphericity__216->SetBinContent(3,5625.844);
   VbbHcc_tags_Sphericity__216->SetBinContent(4,3258.878);
   VbbHcc_tags_Sphericity__216->SetBinContent(5,1884.738);
   VbbHcc_tags_Sphericity__216->SetBinContent(6,1119.685);
   VbbHcc_tags_Sphericity__216->SetBinContent(7,682.9695);
   VbbHcc_tags_Sphericity__216->SetBinContent(8,420.8166);
   VbbHcc_tags_Sphericity__216->SetBinContent(9,290.172);
   VbbHcc_tags_Sphericity__216->SetBinContent(10,196.1802);
   VbbHcc_tags_Sphericity__216->SetBinContent(11,136.4855);
   VbbHcc_tags_Sphericity__216->SetBinContent(12,101.7503);
   VbbHcc_tags_Sphericity__216->SetBinContent(13,74.35932);
   VbbHcc_tags_Sphericity__216->SetBinContent(14,58.99093);
   VbbHcc_tags_Sphericity__216->SetBinContent(15,45.71853);
   VbbHcc_tags_Sphericity__216->SetBinContent(16,39.67214);
   VbbHcc_tags_Sphericity__216->SetBinContent(17,21.20127);
   VbbHcc_tags_Sphericity__216->SetBinContent(18,14.77956);
   VbbHcc_tags_Sphericity__216->SetBinContent(19,9.542916);
   VbbHcc_tags_Sphericity__216->SetBinContent(20,3.654236);
   VbbHcc_tags_Sphericity__216->SetBinContent(21,1.403796);
   VbbHcc_tags_Sphericity__216->SetBinContent(22,0.7686387);
   VbbHcc_tags_Sphericity__216->SetBinError(1,43.89359);
   VbbHcc_tags_Sphericity__216->SetBinError(2,37.89795);
   VbbHcc_tags_Sphericity__216->SetBinError(3,28.0821);
   VbbHcc_tags_Sphericity__216->SetBinError(4,21.47042);
   VbbHcc_tags_Sphericity__216->SetBinError(5,17.42426);
   VbbHcc_tags_Sphericity__216->SetBinError(6,12.52326);
   VbbHcc_tags_Sphericity__216->SetBinError(7,14.20858);
   VbbHcc_tags_Sphericity__216->SetBinError(8,8.202826);
   VbbHcc_tags_Sphericity__216->SetBinError(9,6.900962);
   VbbHcc_tags_Sphericity__216->SetBinError(10,5.206799);
   VbbHcc_tags_Sphericity__216->SetBinError(11,5.134827);
   VbbHcc_tags_Sphericity__216->SetBinError(12,3.570907);
   VbbHcc_tags_Sphericity__216->SetBinError(13,3.295967);
   VbbHcc_tags_Sphericity__216->SetBinError(14,2.804377);
   VbbHcc_tags_Sphericity__216->SetBinError(15,3.112183);
   VbbHcc_tags_Sphericity__216->SetBinError(16,6.715673);
   VbbHcc_tags_Sphericity__216->SetBinError(17,1.648331);
   VbbHcc_tags_Sphericity__216->SetBinError(18,1.445397);
   VbbHcc_tags_Sphericity__216->SetBinError(19,1.216897);
   VbbHcc_tags_Sphericity__216->SetBinError(20,0.6667096);
   VbbHcc_tags_Sphericity__216->SetBinError(21,0.3797877);
   VbbHcc_tags_Sphericity__216->SetBinError(22,0.401808);
   VbbHcc_tags_Sphericity__216->SetEntries(419014);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity__216->SetFillColor(ci);
   VbbHcc_tags_Sphericity__216->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__216->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__216->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__216->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__216->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__216->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__216->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__216->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__216->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__216->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__216->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
