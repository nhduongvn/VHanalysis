#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-8031.319,1.133333,72281.87);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__948 = new TH1D("VbbHcc_both_Aplanarity__948","",50,0,1);
   VbbHcc_both_Aplanarity__948->SetBinContent(1,61191);
   VbbHcc_both_Aplanarity__948->SetBinContent(2,17372);
   VbbHcc_both_Aplanarity__948->SetBinContent(3,8299);
   VbbHcc_both_Aplanarity__948->SetBinContent(4,4483);
   VbbHcc_both_Aplanarity__948->SetBinContent(5,2808);
   VbbHcc_both_Aplanarity__948->SetBinContent(6,1789);
   VbbHcc_both_Aplanarity__948->SetBinContent(7,1136);
   VbbHcc_both_Aplanarity__948->SetBinContent(8,779);
   VbbHcc_both_Aplanarity__948->SetBinContent(9,541);
   VbbHcc_both_Aplanarity__948->SetBinContent(10,380);
   VbbHcc_both_Aplanarity__948->SetBinContent(11,259);
   VbbHcc_both_Aplanarity__948->SetBinContent(12,168);
   VbbHcc_both_Aplanarity__948->SetBinContent(13,98);
   VbbHcc_both_Aplanarity__948->SetBinContent(14,71);
   VbbHcc_both_Aplanarity__948->SetBinContent(15,44);
   VbbHcc_both_Aplanarity__948->SetBinContent(16,32);
   VbbHcc_both_Aplanarity__948->SetBinContent(17,19);
   VbbHcc_both_Aplanarity__948->SetBinContent(18,13);
   VbbHcc_both_Aplanarity__948->SetBinContent(19,8);
   VbbHcc_both_Aplanarity__948->SetBinContent(20,1);
   VbbHcc_both_Aplanarity__948->SetEntries(99491);
   VbbHcc_both_Aplanarity__948->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity__948->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity__948->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__948->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__948->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__948->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__948->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__948->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__948->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__948->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__948->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
