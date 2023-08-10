void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 12:24:18 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-93165.46,1.133333,838489.1);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__427 = new TH1D("VbbHcc_algo_Sphericity__427","",25,0,1);
   VbbHcc_algo_Sphericity__427->SetBinContent(1,709832);
   VbbHcc_algo_Sphericity__427->SetBinContent(2,662437);
   VbbHcc_algo_Sphericity__427->SetBinContent(3,380801);
   VbbHcc_algo_Sphericity__427->SetBinContent(4,210431);
   VbbHcc_algo_Sphericity__427->SetBinContent(5,105666);
   VbbHcc_algo_Sphericity__427->SetBinContent(6,44463);
   VbbHcc_algo_Sphericity__427->SetBinContent(7,15455);
   VbbHcc_algo_Sphericity__427->SetBinContent(8,5579);
   VbbHcc_algo_Sphericity__427->SetBinContent(9,2418);
   VbbHcc_algo_Sphericity__427->SetBinContent(10,1304);
   VbbHcc_algo_Sphericity__427->SetBinContent(11,747);
   VbbHcc_algo_Sphericity__427->SetBinContent(12,493);
   VbbHcc_algo_Sphericity__427->SetBinContent(13,344);
   VbbHcc_algo_Sphericity__427->SetBinContent(14,225);
   VbbHcc_algo_Sphericity__427->SetBinContent(15,181);
   VbbHcc_algo_Sphericity__427->SetBinContent(16,137);
   VbbHcc_algo_Sphericity__427->SetBinContent(17,67);
   VbbHcc_algo_Sphericity__427->SetBinContent(18,60);
   VbbHcc_algo_Sphericity__427->SetBinContent(19,24);
   VbbHcc_algo_Sphericity__427->SetBinContent(20,13);
   VbbHcc_algo_Sphericity__427->SetBinContent(21,8);
   VbbHcc_algo_Sphericity__427->SetBinContent(22,1);
   VbbHcc_algo_Sphericity__427->SetEntries(2140686);
   VbbHcc_algo_Sphericity__427->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__427->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__427->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__427->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__427->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__427->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__427->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__427->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__427->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__427->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity__427->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__427->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__427->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__427->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__427->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__427->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
