void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 12:29:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-7630.219,1.133333,68671.97);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__691 = new TH1D("VbbHcc_both_Sphericity__691","",25,0,1);
   VbbHcc_both_Sphericity__691->SetBinContent(1,56518);
   VbbHcc_both_Sphericity__691->SetBinContent(2,58135);
   VbbHcc_both_Sphericity__691->SetBinContent(3,43214);
   VbbHcc_both_Sphericity__691->SetBinContent(4,32717);
   VbbHcc_both_Sphericity__691->SetBinContent(5,25564);
   VbbHcc_both_Sphericity__691->SetBinContent(6,20279);
   VbbHcc_both_Sphericity__691->SetBinContent(7,16647);
   VbbHcc_both_Sphericity__691->SetBinContent(8,13714);
   VbbHcc_both_Sphericity__691->SetBinContent(9,11283);
   VbbHcc_both_Sphericity__691->SetBinContent(10,9601);
   VbbHcc_both_Sphericity__691->SetBinContent(11,8128);
   VbbHcc_both_Sphericity__691->SetBinContent(12,6904);
   VbbHcc_both_Sphericity__691->SetBinContent(13,5941);
   VbbHcc_both_Sphericity__691->SetBinContent(14,4752);
   VbbHcc_both_Sphericity__691->SetBinContent(15,4041);
   VbbHcc_both_Sphericity__691->SetBinContent(16,3037);
   VbbHcc_both_Sphericity__691->SetBinContent(17,2505);
   VbbHcc_both_Sphericity__691->SetBinContent(18,1776);
   VbbHcc_both_Sphericity__691->SetBinContent(19,971);
   VbbHcc_both_Sphericity__691->SetBinContent(20,406);
   VbbHcc_both_Sphericity__691->SetBinContent(21,164);
   VbbHcc_both_Sphericity__691->SetBinContent(22,50);
   VbbHcc_both_Sphericity__691->SetBinContent(23,17);
   VbbHcc_both_Sphericity__691->SetBinContent(24,3);
   VbbHcc_both_Sphericity__691->SetBinContent(25,1);
   VbbHcc_both_Sphericity__691->SetEntries(326368);
   VbbHcc_both_Sphericity__691->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity__691->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity__691->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__691->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__691->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__691->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__691->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__691->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__691->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__691->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity__691->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__691->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__691->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__691->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__691->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__691->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
