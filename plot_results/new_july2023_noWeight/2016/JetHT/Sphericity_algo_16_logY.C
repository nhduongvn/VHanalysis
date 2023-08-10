void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 12:32:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-0.5197598,1.133333,6.43875);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__421 = new TH1D("VbbHcc_algo_Sphericity__421","",25,0,1);
   VbbHcc_algo_Sphericity__421->SetBinContent(1,291978);
   VbbHcc_algo_Sphericity__421->SetBinContent(2,254247);
   VbbHcc_algo_Sphericity__421->SetBinContent(3,144572);
   VbbHcc_algo_Sphericity__421->SetBinContent(4,81643);
   VbbHcc_algo_Sphericity__421->SetBinContent(5,43504);
   VbbHcc_algo_Sphericity__421->SetBinContent(6,19759);
   VbbHcc_algo_Sphericity__421->SetBinContent(7,7499);
   VbbHcc_algo_Sphericity__421->SetBinContent(8,2858);
   VbbHcc_algo_Sphericity__421->SetBinContent(9,1216);
   VbbHcc_algo_Sphericity__421->SetBinContent(10,675);
   VbbHcc_algo_Sphericity__421->SetBinContent(11,380);
   VbbHcc_algo_Sphericity__421->SetBinContent(12,264);
   VbbHcc_algo_Sphericity__421->SetBinContent(13,148);
   VbbHcc_algo_Sphericity__421->SetBinContent(14,113);
   VbbHcc_algo_Sphericity__421->SetBinContent(15,88);
   VbbHcc_algo_Sphericity__421->SetBinContent(16,61);
   VbbHcc_algo_Sphericity__421->SetBinContent(17,41);
   VbbHcc_algo_Sphericity__421->SetBinContent(18,24);
   VbbHcc_algo_Sphericity__421->SetBinContent(19,23);
   VbbHcc_algo_Sphericity__421->SetBinContent(20,8);
   VbbHcc_algo_Sphericity__421->SetBinContent(21,3);
   VbbHcc_algo_Sphericity__421->SetEntries(849104);
   VbbHcc_algo_Sphericity__421->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__421->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__421->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__421->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__421->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__421->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__421->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__421->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__421->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__421->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity__421->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__421->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__421->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__421->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__421->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__421->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
