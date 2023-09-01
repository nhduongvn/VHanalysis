#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-6926.304,1.133333,62336.73);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__214 = new TH1D("VbbHcc_tags_Sphericity__214","",25,0,1);
   VbbHcc_tags_Sphericity__214->SetBinContent(1,52771.83);
   VbbHcc_tags_Sphericity__214->SetBinContent(2,41415.14);
   VbbHcc_tags_Sphericity__214->SetBinContent(3,22022.52);
   VbbHcc_tags_Sphericity__214->SetBinContent(4,14580.19);
   VbbHcc_tags_Sphericity__214->SetBinContent(5,4995.311);
   VbbHcc_tags_Sphericity__214->SetBinContent(6,4237.915);
   VbbHcc_tags_Sphericity__214->SetBinContent(7,1035.327);
   VbbHcc_tags_Sphericity__214->SetBinContent(8,996.3474);
   VbbHcc_tags_Sphericity__214->SetBinContent(9,543.9481);
   VbbHcc_tags_Sphericity__214->SetBinContent(10,212.5856);
   VbbHcc_tags_Sphericity__214->SetBinContent(11,212.0802);
   VbbHcc_tags_Sphericity__214->SetBinContent(12,154.9168);
   VbbHcc_tags_Sphericity__214->SetBinContent(13,137.4981);
   VbbHcc_tags_Sphericity__214->SetBinContent(14,74.43111);
   VbbHcc_tags_Sphericity__214->SetBinContent(15,76.98351);
   VbbHcc_tags_Sphericity__214->SetBinContent(16,86.82043);
   VbbHcc_tags_Sphericity__214->SetBinContent(17,48.5363);
   VbbHcc_tags_Sphericity__214->SetBinContent(18,40.6394);
   VbbHcc_tags_Sphericity__214->SetBinContent(19,17.3163);
   VbbHcc_tags_Sphericity__214->SetBinError(1,3833.367);
   VbbHcc_tags_Sphericity__214->SetBinError(2,3273.476);
   VbbHcc_tags_Sphericity__214->SetBinError(3,2621.93);
   VbbHcc_tags_Sphericity__214->SetBinError(4,1706.586);
   VbbHcc_tags_Sphericity__214->SetBinError(5,699.5735);
   VbbHcc_tags_Sphericity__214->SetBinError(6,1179.326);
   VbbHcc_tags_Sphericity__214->SetBinError(7,223.1742);
   VbbHcc_tags_Sphericity__214->SetBinError(8,248.3563);
   VbbHcc_tags_Sphericity__214->SetBinError(9,236.2077);
   VbbHcc_tags_Sphericity__214->SetBinError(10,51.32556);
   VbbHcc_tags_Sphericity__214->SetBinError(11,55.82792);
   VbbHcc_tags_Sphericity__214->SetBinError(12,43.01599);
   VbbHcc_tags_Sphericity__214->SetBinError(13,40.8853);
   VbbHcc_tags_Sphericity__214->SetBinError(14,29.09473);
   VbbHcc_tags_Sphericity__214->SetBinError(15,20.86758);
   VbbHcc_tags_Sphericity__214->SetBinError(16,30.63861);
   VbbHcc_tags_Sphericity__214->SetBinError(17,24.81505);
   VbbHcc_tags_Sphericity__214->SetBinError(18,24.83107);
   VbbHcc_tags_Sphericity__214->SetBinError(19,8.541741);
   VbbHcc_tags_Sphericity__214->SetEntries(9563);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity__214->SetFillColor(ci);
   VbbHcc_tags_Sphericity__214->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__214->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__214->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__214->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__214->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__214->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__214->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__214->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__214->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__214->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__214->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
