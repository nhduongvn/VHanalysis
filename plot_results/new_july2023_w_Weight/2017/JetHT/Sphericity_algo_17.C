void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:24:18 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-10393.16,1.133333,93538.46);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__424 = new TH1D("VbbHcc_algo_Sphericity__424","",25,0,1);
   VbbHcc_algo_Sphericity__424->SetBinContent(1,79186);
   VbbHcc_algo_Sphericity__424->SetBinContent(2,71143);
   VbbHcc_algo_Sphericity__424->SetBinContent(3,40133);
   VbbHcc_algo_Sphericity__424->SetBinContent(4,22522);
   VbbHcc_algo_Sphericity__424->SetBinContent(5,12140);
   VbbHcc_algo_Sphericity__424->SetBinContent(6,5586);
   VbbHcc_algo_Sphericity__424->SetBinContent(7,2270);
   VbbHcc_algo_Sphericity__424->SetBinContent(8,897);
   VbbHcc_algo_Sphericity__424->SetBinContent(9,450);
   VbbHcc_algo_Sphericity__424->SetBinContent(10,217);
   VbbHcc_algo_Sphericity__424->SetBinContent(11,136);
   VbbHcc_algo_Sphericity__424->SetBinContent(12,73);
   VbbHcc_algo_Sphericity__424->SetBinContent(13,50);
   VbbHcc_algo_Sphericity__424->SetBinContent(14,39);
   VbbHcc_algo_Sphericity__424->SetBinContent(15,23);
   VbbHcc_algo_Sphericity__424->SetBinContent(16,12);
   VbbHcc_algo_Sphericity__424->SetBinContent(17,17);
   VbbHcc_algo_Sphericity__424->SetBinContent(18,3);
   VbbHcc_algo_Sphericity__424->SetBinContent(19,5);
   VbbHcc_algo_Sphericity__424->SetBinContent(20,5);
   VbbHcc_algo_Sphericity__424->SetBinContent(21,1);
   VbbHcc_algo_Sphericity__424->SetEntries(234908);
   VbbHcc_algo_Sphericity__424->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__424->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__424->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__424->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__424->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__424->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__424->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__424->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__424->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__424->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity__424->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__424->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__424->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__424->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__424->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__424->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
