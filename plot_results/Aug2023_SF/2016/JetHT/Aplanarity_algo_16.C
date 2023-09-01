#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Fri Sep  1 13:23:38 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-93487.54,1.133333,841387.8);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__588 = new TH1D("VbbHcc_algo_Aplanarity__588","",50,0,1);
   VbbHcc_algo_Aplanarity__588->SetBinContent(1,712286);
   VbbHcc_algo_Aplanarity__588->SetBinContent(2,89434);
   VbbHcc_algo_Aplanarity__588->SetBinContent(3,19863);
   VbbHcc_algo_Aplanarity__588->SetBinContent(4,5257);
   VbbHcc_algo_Aplanarity__588->SetBinContent(5,1524);
   VbbHcc_algo_Aplanarity__588->SetBinContent(6,548);
   VbbHcc_algo_Aplanarity__588->SetBinContent(7,220);
   VbbHcc_algo_Aplanarity__588->SetBinContent(8,99);
   VbbHcc_algo_Aplanarity__588->SetBinContent(9,56);
   VbbHcc_algo_Aplanarity__588->SetBinContent(10,32);
   VbbHcc_algo_Aplanarity__588->SetBinContent(11,21);
   VbbHcc_algo_Aplanarity__588->SetBinContent(12,8);
   VbbHcc_algo_Aplanarity__588->SetBinContent(13,7);
   VbbHcc_algo_Aplanarity__588->SetBinContent(14,3);
   VbbHcc_algo_Aplanarity__588->SetBinContent(15,2);
   VbbHcc_algo_Aplanarity__588->SetBinContent(16,4);
   VbbHcc_algo_Aplanarity__588->SetBinContent(17,1);
   VbbHcc_algo_Aplanarity__588->SetBinContent(18,2);
   VbbHcc_algo_Aplanarity__588->SetEntries(829367);
   VbbHcc_algo_Aplanarity__588->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity__588->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity__588->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__588->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__588->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__588->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__588->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__588->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__588->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__588->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__588->Draw("HIST");
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
