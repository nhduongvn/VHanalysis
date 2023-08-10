void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug 10 12:32:17 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-1.106216,1.133333,6.94564);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__432 = new TH1D("VbbHcc_algo_Aplanarity__432","",50,0,1);
   VbbHcc_algo_Aplanarity__432->SetBinContent(1,729299);
   VbbHcc_algo_Aplanarity__432->SetBinContent(2,91528);
   VbbHcc_algo_Aplanarity__432->SetBinContent(3,20331);
   VbbHcc_algo_Aplanarity__432->SetBinContent(4,5375);
   VbbHcc_algo_Aplanarity__432->SetBinContent(5,1557);
   VbbHcc_algo_Aplanarity__432->SetBinContent(6,551);
   VbbHcc_algo_Aplanarity__432->SetBinContent(7,225);
   VbbHcc_algo_Aplanarity__432->SetBinContent(8,99);
   VbbHcc_algo_Aplanarity__432->SetBinContent(9,55);
   VbbHcc_algo_Aplanarity__432->SetBinContent(10,34);
   VbbHcc_algo_Aplanarity__432->SetBinContent(11,21);
   VbbHcc_algo_Aplanarity__432->SetBinContent(12,10);
   VbbHcc_algo_Aplanarity__432->SetBinContent(13,7);
   VbbHcc_algo_Aplanarity__432->SetBinContent(14,3);
   VbbHcc_algo_Aplanarity__432->SetBinContent(15,2);
   VbbHcc_algo_Aplanarity__432->SetBinContent(16,4);
   VbbHcc_algo_Aplanarity__432->SetBinContent(17,1);
   VbbHcc_algo_Aplanarity__432->SetBinContent(18,2);
   VbbHcc_algo_Aplanarity__432->SetEntries(849104);
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
