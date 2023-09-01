#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-10400.51,1.133333,93604.61);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__228 = new TH1D("VbbHcc_tags_Aplanarity__228","",50,0,1);
   VbbHcc_tags_Aplanarity__228->SetBinContent(1,79242);
   VbbHcc_tags_Aplanarity__228->SetBinContent(2,9878);
   VbbHcc_tags_Aplanarity__228->SetBinContent(3,2843);
   VbbHcc_tags_Aplanarity__228->SetBinContent(4,1062);
   VbbHcc_tags_Aplanarity__228->SetBinContent(5,516);
   VbbHcc_tags_Aplanarity__228->SetBinContent(6,246);
   VbbHcc_tags_Aplanarity__228->SetBinContent(7,150);
   VbbHcc_tags_Aplanarity__228->SetBinContent(8,78);
   VbbHcc_tags_Aplanarity__228->SetBinContent(9,69);
   VbbHcc_tags_Aplanarity__228->SetBinContent(10,32);
   VbbHcc_tags_Aplanarity__228->SetBinContent(11,19);
   VbbHcc_tags_Aplanarity__228->SetBinContent(12,19);
   VbbHcc_tags_Aplanarity__228->SetBinContent(13,9);
   VbbHcc_tags_Aplanarity__228->SetBinContent(14,4);
   VbbHcc_tags_Aplanarity__228->SetBinContent(15,4);
   VbbHcc_tags_Aplanarity__228->SetBinContent(16,1);
   VbbHcc_tags_Aplanarity__228->SetBinContent(17,2);
   VbbHcc_tags_Aplanarity__228->SetEntries(94174);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
