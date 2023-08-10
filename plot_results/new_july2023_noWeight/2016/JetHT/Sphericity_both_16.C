void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:29:31 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-2340.581,1.133333,21065.23);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__685 = new TH1D("VbbHcc_both_Sphericity__685","",25,0,1);
   VbbHcc_both_Sphericity__685->SetBinContent(1,17424);
   VbbHcc_both_Sphericity__685->SetBinContent(2,17833);
   VbbHcc_both_Sphericity__685->SetBinContent(3,13291);
   VbbHcc_both_Sphericity__685->SetBinContent(4,10025);
   VbbHcc_both_Sphericity__685->SetBinContent(5,7873);
   VbbHcc_both_Sphericity__685->SetBinContent(6,6537);
   VbbHcc_both_Sphericity__685->SetBinContent(7,5342);
   VbbHcc_both_Sphericity__685->SetBinContent(8,4356);
   VbbHcc_both_Sphericity__685->SetBinContent(9,3673);
   VbbHcc_both_Sphericity__685->SetBinContent(10,3083);
   VbbHcc_both_Sphericity__685->SetBinContent(11,2627);
   VbbHcc_both_Sphericity__685->SetBinContent(12,2248);
   VbbHcc_both_Sphericity__685->SetBinContent(13,1961);
   VbbHcc_both_Sphericity__685->SetBinContent(14,1576);
   VbbHcc_both_Sphericity__685->SetBinContent(15,1287);
   VbbHcc_both_Sphericity__685->SetBinContent(16,1008);
   VbbHcc_both_Sphericity__685->SetBinContent(17,776);
   VbbHcc_both_Sphericity__685->SetBinContent(18,573);
   VbbHcc_both_Sphericity__685->SetBinContent(19,316);
   VbbHcc_both_Sphericity__685->SetBinContent(20,145);
   VbbHcc_both_Sphericity__685->SetBinContent(21,45);
   VbbHcc_both_Sphericity__685->SetBinContent(22,14);
   VbbHcc_both_Sphericity__685->SetBinContent(23,5);
   VbbHcc_both_Sphericity__685->SetEntries(102018);
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
