#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Fri Sep  1 13:23:38 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-37415.05,1.133333,336735.4);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__573 = new TH1D("VbbHcc_algo_Sphericity__573","",25,0,1);
   VbbHcc_algo_Sphericity__573->SetBinContent(1,285067);
   VbbHcc_algo_Sphericity__573->SetBinContent(2,248308);
   VbbHcc_algo_Sphericity__573->SetBinContent(3,141154);
   VbbHcc_algo_Sphericity__573->SetBinContent(4,79814);
   VbbHcc_algo_Sphericity__573->SetBinContent(5,42573);
   VbbHcc_algo_Sphericity__573->SetBinContent(6,19368);
   VbbHcc_algo_Sphericity__573->SetBinContent(7,7314);
   VbbHcc_algo_Sphericity__573->SetBinContent(8,2783);
   VbbHcc_algo_Sphericity__573->SetBinContent(9,1191);
   VbbHcc_algo_Sphericity__573->SetBinContent(10,669);
   VbbHcc_algo_Sphericity__573->SetBinContent(11,375);
   VbbHcc_algo_Sphericity__573->SetBinContent(12,257);
   VbbHcc_algo_Sphericity__573->SetBinContent(13,143);
   VbbHcc_algo_Sphericity__573->SetBinContent(14,110);
   VbbHcc_algo_Sphericity__573->SetBinContent(15,87);
   VbbHcc_algo_Sphericity__573->SetBinContent(16,58);
   VbbHcc_algo_Sphericity__573->SetBinContent(17,41);
   VbbHcc_algo_Sphericity__573->SetBinContent(18,23);
   VbbHcc_algo_Sphericity__573->SetBinContent(19,22);
   VbbHcc_algo_Sphericity__573->SetBinContent(20,7);
   VbbHcc_algo_Sphericity__573->SetBinContent(21,3);
   VbbHcc_algo_Sphericity__573->SetEntries(829367);
   VbbHcc_algo_Sphericity__573->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__573->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__573->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__573->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__573->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__573->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__573->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__573->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__573->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__573->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__573->Draw("HIST");
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
