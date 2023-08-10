void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:29:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-1677.9,1.133333,15101.1);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__688 = new TH1D("VbbHcc_both_Sphericity__688","",25,0,1);
   VbbHcc_both_Sphericity__688->SetBinContent(1,12784);
   VbbHcc_both_Sphericity__688->SetBinContent(2,12339);
   VbbHcc_both_Sphericity__688->SetBinContent(3,9350);
   VbbHcc_both_Sphericity__688->SetBinContent(4,6994);
   VbbHcc_both_Sphericity__688->SetBinContent(5,5633);
   VbbHcc_both_Sphericity__688->SetBinContent(6,4542);
   VbbHcc_both_Sphericity__688->SetBinContent(7,3805);
   VbbHcc_both_Sphericity__688->SetBinContent(8,3211);
   VbbHcc_both_Sphericity__688->SetBinContent(9,2702);
   VbbHcc_both_Sphericity__688->SetBinContent(10,2140);
   VbbHcc_both_Sphericity__688->SetBinContent(11,1969);
   VbbHcc_both_Sphericity__688->SetBinContent(12,1671);
   VbbHcc_both_Sphericity__688->SetBinContent(13,1427);
   VbbHcc_both_Sphericity__688->SetBinContent(14,1134);
   VbbHcc_both_Sphericity__688->SetBinContent(15,960);
   VbbHcc_both_Sphericity__688->SetBinContent(16,753);
   VbbHcc_both_Sphericity__688->SetBinContent(17,546);
   VbbHcc_both_Sphericity__688->SetBinContent(18,417);
   VbbHcc_both_Sphericity__688->SetBinContent(19,261);
   VbbHcc_both_Sphericity__688->SetBinContent(20,88);
   VbbHcc_both_Sphericity__688->SetBinContent(21,33);
   VbbHcc_both_Sphericity__688->SetBinContent(22,14);
   VbbHcc_both_Sphericity__688->SetBinContent(23,5);
   VbbHcc_both_Sphericity__688->SetBinContent(24,1);
   VbbHcc_both_Sphericity__688->SetEntries(72779);
   VbbHcc_both_Sphericity__688->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity__688->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity__688->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__688->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__688->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__688->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__688->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__688->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__688->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__688->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity__688->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__688->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__688->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__688->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__688->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__688->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
