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
   Sphericity_algo_16->Range(-0.2,-5.600404,1.133333,50.40363);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__581 = new TH1D("VbbHcc_algo_Sphericity__581","",25,0,1);
   VbbHcc_algo_Sphericity__581->SetBinContent(1,42.66974);
   VbbHcc_algo_Sphericity__581->SetBinContent(2,40.60925);
   VbbHcc_algo_Sphericity__581->SetBinContent(3,24.15904);
   VbbHcc_algo_Sphericity__581->SetBinContent(4,13.17004);
   VbbHcc_algo_Sphericity__581->SetBinContent(5,8.712966);
   VbbHcc_algo_Sphericity__581->SetBinContent(6,3.326403);
   VbbHcc_algo_Sphericity__581->SetBinContent(7,0.8479719);
   VbbHcc_algo_Sphericity__581->SetBinContent(8,0.1969647);
   VbbHcc_algo_Sphericity__581->SetBinContent(10,0.3390991);
   VbbHcc_algo_Sphericity__581->SetBinContent(11,0.2047516);
   VbbHcc_algo_Sphericity__581->SetBinError(1,3.002233);
   VbbHcc_algo_Sphericity__581->SetBinError(2,2.908577);
   VbbHcc_algo_Sphericity__581->SetBinError(3,2.262857);
   VbbHcc_algo_Sphericity__581->SetBinError(4,1.67582);
   VbbHcc_algo_Sphericity__581->SetBinError(5,1.354871);
   VbbHcc_algo_Sphericity__581->SetBinError(6,0.8430488);
   VbbHcc_algo_Sphericity__581->SetBinError(7,0.4259943);
   VbbHcc_algo_Sphericity__581->SetBinError(8,0.1969647);
   VbbHcc_algo_Sphericity__581->SetBinError(10,0.2397969);
   VbbHcc_algo_Sphericity__581->SetBinError(11,0.2047516);
   VbbHcc_algo_Sphericity__581->SetEntries(665);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity__581->SetFillColor(ci);
   VbbHcc_algo_Sphericity__581->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__581->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__581->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__581->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__581->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__581->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__581->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__581->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__581->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__581->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__581->Draw("HIST");
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
