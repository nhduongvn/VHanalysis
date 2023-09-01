#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-2282.7,1.133333,20544.3);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__933 = new TH1D("VbbHcc_both_Sphericity__933","",25,0,1);
   VbbHcc_both_Sphericity__933->SetBinContent(1,16933);
   VbbHcc_both_Sphericity__933->SetBinContent(2,17392);
   VbbHcc_both_Sphericity__933->SetBinContent(3,12938);
   VbbHcc_both_Sphericity__933->SetBinContent(4,9798);
   VbbHcc_both_Sphericity__933->SetBinContent(5,7674);
   VbbHcc_both_Sphericity__933->SetBinContent(6,6415);
   VbbHcc_both_Sphericity__933->SetBinContent(7,5226);
   VbbHcc_both_Sphericity__933->SetBinContent(8,4257);
   VbbHcc_both_Sphericity__933->SetBinContent(9,3556);
   VbbHcc_both_Sphericity__933->SetBinContent(10,2999);
   VbbHcc_both_Sphericity__933->SetBinContent(11,2583);
   VbbHcc_both_Sphericity__933->SetBinContent(12,2198);
   VbbHcc_both_Sphericity__933->SetBinContent(13,1910);
   VbbHcc_both_Sphericity__933->SetBinContent(14,1550);
   VbbHcc_both_Sphericity__933->SetBinContent(15,1252);
   VbbHcc_both_Sphericity__933->SetBinContent(16,977);
   VbbHcc_both_Sphericity__933->SetBinContent(17,767);
   VbbHcc_both_Sphericity__933->SetBinContent(18,555);
   VbbHcc_both_Sphericity__933->SetBinContent(19,307);
   VbbHcc_both_Sphericity__933->SetBinContent(20,140);
   VbbHcc_both_Sphericity__933->SetBinContent(21,45);
   VbbHcc_both_Sphericity__933->SetBinContent(22,14);
   VbbHcc_both_Sphericity__933->SetBinContent(23,5);
   VbbHcc_both_Sphericity__933->SetEntries(99491);
   VbbHcc_both_Sphericity__933->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity__933->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity__933->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__933->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__933->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__933->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__933->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__933->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__933->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__933->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__933->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
