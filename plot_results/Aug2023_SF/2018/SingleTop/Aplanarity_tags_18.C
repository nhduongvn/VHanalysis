#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-271.9409,1.133333,1722.917);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__230 = new TH1D("VbbHcc_tags_Aplanarity__230","",50,0,1);
   VbbHcc_tags_Aplanarity__230->SetBinContent(1,1447.436);
   VbbHcc_tags_Aplanarity__230->SetBinContent(2,192.1701);
   VbbHcc_tags_Aplanarity__230->SetBinContent(3,58.8835);
   VbbHcc_tags_Aplanarity__230->SetBinContent(4,17.33831);
   VbbHcc_tags_Aplanarity__230->SetBinContent(5,12.46444);
   VbbHcc_tags_Aplanarity__230->SetBinContent(6,3.385927);
   VbbHcc_tags_Aplanarity__230->SetBinContent(7,3.378652);
   VbbHcc_tags_Aplanarity__230->SetBinContent(8,2.224569);
   VbbHcc_tags_Aplanarity__230->SetBinContent(9,1.179357);
   VbbHcc_tags_Aplanarity__230->SetBinContent(10,0.7423163);
   VbbHcc_tags_Aplanarity__230->SetBinContent(11,0.08698704);
   VbbHcc_tags_Aplanarity__230->SetBinContent(12,0.05502477);
   VbbHcc_tags_Aplanarity__230->SetBinContent(13,0.203191);
   VbbHcc_tags_Aplanarity__230->SetBinContent(14,0.4549307);
   VbbHcc_tags_Aplanarity__230->SetBinContent(17,-0.07936056);
   VbbHcc_tags_Aplanarity__230->SetBinError(1,24.14703);
   VbbHcc_tags_Aplanarity__230->SetBinError(2,10.88285);
   VbbHcc_tags_Aplanarity__230->SetBinError(3,5.149825);
   VbbHcc_tags_Aplanarity__230->SetBinError(4,1.962559);
   VbbHcc_tags_Aplanarity__230->SetBinError(5,2.544798);
   VbbHcc_tags_Aplanarity__230->SetBinError(6,0.9793181);
   VbbHcc_tags_Aplanarity__230->SetBinError(7,1.071141);
   VbbHcc_tags_Aplanarity__230->SetBinError(8,0.8114882);
   VbbHcc_tags_Aplanarity__230->SetBinError(9,0.9109604);
   VbbHcc_tags_Aplanarity__230->SetBinError(10,0.429473);
   VbbHcc_tags_Aplanarity__230->SetBinError(11,0.08698704);
   VbbHcc_tags_Aplanarity__230->SetBinError(12,0.2148255);
   VbbHcc_tags_Aplanarity__230->SetBinError(13,0.157925);
   VbbHcc_tags_Aplanarity__230->SetBinError(14,0.4198054);
   VbbHcc_tags_Aplanarity__230->SetBinError(17,0.07936056);
   VbbHcc_tags_Aplanarity__230->SetEntries(13198);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity__230->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__230->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__230->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__230->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__230->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__230->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__230->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__230->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__230->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__230->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__230->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__230->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
