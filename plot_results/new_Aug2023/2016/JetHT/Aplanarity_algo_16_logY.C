void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Tue Aug 22 09:17:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-1.104934,1.133333,6.934108);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__432 = new TH1D("VbbHcc_algo_Aplanarity__432","",50,0,1);
   VbbHcc_algo_Aplanarity__432->SetBinContent(1,712286);
   VbbHcc_algo_Aplanarity__432->SetBinContent(2,89434);
   VbbHcc_algo_Aplanarity__432->SetBinContent(3,19863);
   VbbHcc_algo_Aplanarity__432->SetBinContent(4,5257);
   VbbHcc_algo_Aplanarity__432->SetBinContent(5,1524);
   VbbHcc_algo_Aplanarity__432->SetBinContent(6,548);
   VbbHcc_algo_Aplanarity__432->SetBinContent(7,220);
   VbbHcc_algo_Aplanarity__432->SetBinContent(8,99);
   VbbHcc_algo_Aplanarity__432->SetBinContent(9,56);
   VbbHcc_algo_Aplanarity__432->SetBinContent(10,32);
   VbbHcc_algo_Aplanarity__432->SetBinContent(11,21);
   VbbHcc_algo_Aplanarity__432->SetBinContent(12,8);
   VbbHcc_algo_Aplanarity__432->SetBinContent(13,7);
   VbbHcc_algo_Aplanarity__432->SetBinContent(14,3);
   VbbHcc_algo_Aplanarity__432->SetBinContent(15,2);
   VbbHcc_algo_Aplanarity__432->SetBinContent(16,4);
   VbbHcc_algo_Aplanarity__432->SetBinContent(17,1);
   VbbHcc_algo_Aplanarity__432->SetBinContent(18,2);
   VbbHcc_algo_Aplanarity__432->SetEntries(829367);
   VbbHcc_algo_Aplanarity__432->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity__432->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity__432->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__432->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__432->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__432->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__432->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__432->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__432->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__432->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity__432->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__432->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__432->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__432->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__432->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__432->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
