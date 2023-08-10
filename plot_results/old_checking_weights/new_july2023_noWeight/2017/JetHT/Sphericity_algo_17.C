void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug  3 12:24:52 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-11305.74,1.133333,101751.7);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__424 = new TH1D("VbbHcc_algo_Sphericity__424","",25,0,1);
   VbbHcc_algo_Sphericity__424->SetBinContent(1,86139);
   VbbHcc_algo_Sphericity__424->SetBinContent(2,77189);
   VbbHcc_algo_Sphericity__424->SetBinContent(3,43715);
   VbbHcc_algo_Sphericity__424->SetBinContent(4,24502);
   VbbHcc_algo_Sphericity__424->SetBinContent(5,13206);
   VbbHcc_algo_Sphericity__424->SetBinContent(6,6052);
   VbbHcc_algo_Sphericity__424->SetBinContent(7,2438);
   VbbHcc_algo_Sphericity__424->SetBinContent(8,993);
   VbbHcc_algo_Sphericity__424->SetBinContent(9,487);
   VbbHcc_algo_Sphericity__424->SetBinContent(10,235);
   VbbHcc_algo_Sphericity__424->SetBinContent(11,143);
   VbbHcc_algo_Sphericity__424->SetBinContent(12,79);
   VbbHcc_algo_Sphericity__424->SetBinContent(13,50);
   VbbHcc_algo_Sphericity__424->SetBinContent(14,40);
   VbbHcc_algo_Sphericity__424->SetBinContent(15,25);
   VbbHcc_algo_Sphericity__424->SetBinContent(16,13);
   VbbHcc_algo_Sphericity__424->SetBinContent(17,18);
   VbbHcc_algo_Sphericity__424->SetBinContent(18,3);
   VbbHcc_algo_Sphericity__424->SetBinContent(19,6);
   VbbHcc_algo_Sphericity__424->SetBinContent(20,5);
   VbbHcc_algo_Sphericity__424->SetBinContent(21,1);
   VbbHcc_algo_Sphericity__424->SetEntries(255339);
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
