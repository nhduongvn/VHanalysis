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
   Aplanarity_tags_18->Range(-0.2,-34147.45,1.133333,307327);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__228 = new TH1D("VbbHcc_tags_Aplanarity__228","",50,0,1);
   VbbHcc_tags_Aplanarity__228->SetBinContent(1,260171);
   VbbHcc_tags_Aplanarity__228->SetBinContent(2,33265);
   VbbHcc_tags_Aplanarity__228->SetBinContent(3,8461);
   VbbHcc_tags_Aplanarity__228->SetBinContent(4,2918);
   VbbHcc_tags_Aplanarity__228->SetBinContent(5,1242);
   VbbHcc_tags_Aplanarity__228->SetBinContent(6,676);
   VbbHcc_tags_Aplanarity__228->SetBinContent(7,331);
   VbbHcc_tags_Aplanarity__228->SetBinContent(8,194);
   VbbHcc_tags_Aplanarity__228->SetBinContent(9,104);
   VbbHcc_tags_Aplanarity__228->SetBinContent(10,69);
   VbbHcc_tags_Aplanarity__228->SetBinContent(11,55);
   VbbHcc_tags_Aplanarity__228->SetBinContent(12,26);
   VbbHcc_tags_Aplanarity__228->SetBinContent(13,24);
   VbbHcc_tags_Aplanarity__228->SetBinContent(14,16);
   VbbHcc_tags_Aplanarity__228->SetBinContent(15,7);
   VbbHcc_tags_Aplanarity__228->SetBinContent(16,7);
   VbbHcc_tags_Aplanarity__228->SetBinContent(17,6);
   VbbHcc_tags_Aplanarity__228->SetBinContent(20,2);
   VbbHcc_tags_Aplanarity__228->SetEntries(307574);
   VbbHcc_tags_Aplanarity__228->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__228->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__228->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__228->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__228->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__228->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__228->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__228->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__228->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__228->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__228->Draw("HIST");
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
