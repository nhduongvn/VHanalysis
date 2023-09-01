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
   Sphericity_algo_16->Range(-0.2,-2.957767,1.133333,26.6199);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__579 = new TH1D("VbbHcc_algo_Sphericity__579","",25,0,1);
   VbbHcc_algo_Sphericity__579->SetBinContent(1,22.53537);
   VbbHcc_algo_Sphericity__579->SetBinContent(2,17.43764);
   VbbHcc_algo_Sphericity__579->SetBinContent(3,9.080655);
   VbbHcc_algo_Sphericity__579->SetBinContent(4,6.614482);
   VbbHcc_algo_Sphericity__579->SetBinContent(5,3.872951);
   VbbHcc_algo_Sphericity__579->SetBinContent(6,2.045518);
   VbbHcc_algo_Sphericity__579->SetBinContent(7,0.6598954);
   VbbHcc_algo_Sphericity__579->SetBinContent(8,0.1081408);
   VbbHcc_algo_Sphericity__579->SetBinContent(9,0.1051598);
   VbbHcc_algo_Sphericity__579->SetBinContent(10,0.06968364);
   VbbHcc_algo_Sphericity__579->SetBinContent(11,0.08772261);
   VbbHcc_algo_Sphericity__579->SetBinError(1,1.622859);
   VbbHcc_algo_Sphericity__579->SetBinError(2,1.399227);
   VbbHcc_algo_Sphericity__579->SetBinError(3,1.005981);
   VbbHcc_algo_Sphericity__579->SetBinError(4,0.8648432);
   VbbHcc_algo_Sphericity__579->SetBinError(5,0.6740095);
   VbbHcc_algo_Sphericity__579->SetBinError(6,0.5097342);
   VbbHcc_algo_Sphericity__579->SetBinError(7,0.2705801);
   VbbHcc_algo_Sphericity__579->SetBinError(8,0.1081408);
   VbbHcc_algo_Sphericity__579->SetBinError(9,0.1051598);
   VbbHcc_algo_Sphericity__579->SetBinError(10,0.06968364);
   VbbHcc_algo_Sphericity__579->SetBinError(11,0.08772261);
   VbbHcc_algo_Sphericity__579->SetEntries(573);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Sphericity__579->SetFillColor(ci);
   VbbHcc_algo_Sphericity__579->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__579->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__579->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__579->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__579->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__579->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__579->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__579->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__579->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__579->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__579->Draw("HIST");
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
