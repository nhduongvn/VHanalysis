void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:25:06 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-2357.906,1.133333,21221.16);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__685 = new TH1D("VbbHcc_both_Sphericity__685","",25,0,1);
   VbbHcc_both_Sphericity__685->SetBinContent(1,17528);
   VbbHcc_both_Sphericity__685->SetBinContent(2,17965);
   VbbHcc_both_Sphericity__685->SetBinContent(3,13382);
   VbbHcc_both_Sphericity__685->SetBinContent(4,10101);
   VbbHcc_both_Sphericity__685->SetBinContent(5,7931);
   VbbHcc_both_Sphericity__685->SetBinContent(6,6572);
   VbbHcc_both_Sphericity__685->SetBinContent(7,5376);
   VbbHcc_both_Sphericity__685->SetBinContent(8,4387);
   VbbHcc_both_Sphericity__685->SetBinContent(9,3684);
   VbbHcc_both_Sphericity__685->SetBinContent(10,3093);
   VbbHcc_both_Sphericity__685->SetBinContent(11,2646);
   VbbHcc_both_Sphericity__685->SetBinContent(12,2259);
   VbbHcc_both_Sphericity__685->SetBinContent(13,1970);
   VbbHcc_both_Sphericity__685->SetBinContent(14,1589);
   VbbHcc_both_Sphericity__685->SetBinContent(15,1302);
   VbbHcc_both_Sphericity__685->SetBinContent(16,1011);
   VbbHcc_both_Sphericity__685->SetBinContent(17,786);
   VbbHcc_both_Sphericity__685->SetBinContent(18,571);
   VbbHcc_both_Sphericity__685->SetBinContent(19,318);
   VbbHcc_both_Sphericity__685->SetBinContent(20,145);
   VbbHcc_both_Sphericity__685->SetBinContent(21,46);
   VbbHcc_both_Sphericity__685->SetBinContent(22,14);
   VbbHcc_both_Sphericity__685->SetBinContent(23,5);
   VbbHcc_both_Sphericity__685->SetEntries(102681);
   VbbHcc_both_Sphericity__685->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity__685->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity__685->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__685->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__685->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__685->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__685->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__685->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__685->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__685->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity__685->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__685->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__685->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__685->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__685->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__685->Draw("HIST");
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
