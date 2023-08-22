void Aplanarity_algo_17_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Tue Aug 22 09:17:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-1.036139,1.133333,6.31495);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLogy();
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__435 = new TH1D("VbbHcc_algo_Aplanarity__435","",50,0,1);
   VbbHcc_algo_Aplanarity__435->SetBinContent(1,200582);
   VbbHcc_algo_Aplanarity__435->SetBinContent(2,26504);
   VbbHcc_algo_Aplanarity__435->SetBinContent(3,6100);
   VbbHcc_algo_Aplanarity__435->SetBinContent(4,1589);
   VbbHcc_algo_Aplanarity__435->SetBinContent(5,522);
   VbbHcc_algo_Aplanarity__435->SetBinContent(6,185);
   VbbHcc_algo_Aplanarity__435->SetBinContent(7,55);
   VbbHcc_algo_Aplanarity__435->SetBinContent(8,35);
   VbbHcc_algo_Aplanarity__435->SetBinContent(9,14);
   VbbHcc_algo_Aplanarity__435->SetBinContent(10,7);
   VbbHcc_algo_Aplanarity__435->SetBinContent(11,5);
   VbbHcc_algo_Aplanarity__435->SetBinContent(12,3);
   VbbHcc_algo_Aplanarity__435->SetBinContent(13,2);
   VbbHcc_algo_Aplanarity__435->SetBinContent(14,2);
   VbbHcc_algo_Aplanarity__435->SetBinContent(15,2);
   VbbHcc_algo_Aplanarity__435->SetBinContent(17,1);
   VbbHcc_algo_Aplanarity__435->SetBinContent(18,2);
   VbbHcc_algo_Aplanarity__435->SetEntries(235610);
   VbbHcc_algo_Aplanarity__435->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity__435->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity__435->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__435->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__435->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__435->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__435->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__435->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__435->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__435->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity__435->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__435->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__435->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__435->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__435->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__435->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
