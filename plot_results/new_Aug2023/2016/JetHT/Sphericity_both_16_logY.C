void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Tue Aug 22 09:18:45 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-0.1170548,1.133333,5.032893);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLogy();
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__685 = new TH1D("VbbHcc_both_Sphericity__685","",25,0,1);
   VbbHcc_both_Sphericity__685->SetBinContent(1,16933);
   VbbHcc_both_Sphericity__685->SetBinContent(2,17392);
   VbbHcc_both_Sphericity__685->SetBinContent(3,12938);
   VbbHcc_both_Sphericity__685->SetBinContent(4,9798);
   VbbHcc_both_Sphericity__685->SetBinContent(5,7674);
   VbbHcc_both_Sphericity__685->SetBinContent(6,6415);
   VbbHcc_both_Sphericity__685->SetBinContent(7,5226);
   VbbHcc_both_Sphericity__685->SetBinContent(8,4257);
   VbbHcc_both_Sphericity__685->SetBinContent(9,3556);
   VbbHcc_both_Sphericity__685->SetBinContent(10,2999);
   VbbHcc_both_Sphericity__685->SetBinContent(11,2583);
   VbbHcc_both_Sphericity__685->SetBinContent(12,2198);
   VbbHcc_both_Sphericity__685->SetBinContent(13,1910);
   VbbHcc_both_Sphericity__685->SetBinContent(14,1550);
   VbbHcc_both_Sphericity__685->SetBinContent(15,1252);
   VbbHcc_both_Sphericity__685->SetBinContent(16,977);
   VbbHcc_both_Sphericity__685->SetBinContent(17,767);
   VbbHcc_both_Sphericity__685->SetBinContent(18,555);
   VbbHcc_both_Sphericity__685->SetBinContent(19,307);
   VbbHcc_both_Sphericity__685->SetBinContent(20,140);
   VbbHcc_both_Sphericity__685->SetBinContent(21,45);
   VbbHcc_both_Sphericity__685->SetBinContent(22,14);
   VbbHcc_both_Sphericity__685->SetBinContent(23,5);
   VbbHcc_both_Sphericity__685->SetEntries(99491);
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
