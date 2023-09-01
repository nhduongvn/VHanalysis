#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-0.3350909,1.133333,3.015818);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__943 = new TH1D("VbbHcc_both_Sphericity__943","",25,0,1);
   VbbHcc_both_Sphericity__943->SetBinContent(1,2.355161);
   VbbHcc_both_Sphericity__943->SetBinContent(2,2.553074);
   VbbHcc_both_Sphericity__943->SetBinContent(3,1.884054);
   VbbHcc_both_Sphericity__943->SetBinContent(4,1.453141);
   VbbHcc_both_Sphericity__943->SetBinContent(5,1.2787);
   VbbHcc_both_Sphericity__943->SetBinContent(6,1.026909);
   VbbHcc_both_Sphericity__943->SetBinContent(7,0.8504992);
   VbbHcc_both_Sphericity__943->SetBinContent(8,0.7465568);
   VbbHcc_both_Sphericity__943->SetBinContent(9,0.6339086);
   VbbHcc_both_Sphericity__943->SetBinContent(10,0.5553201);
   VbbHcc_both_Sphericity__943->SetBinContent(11,0.4752921);
   VbbHcc_both_Sphericity__943->SetBinContent(12,0.4017087);
   VbbHcc_both_Sphericity__943->SetBinContent(13,0.3435473);
   VbbHcc_both_Sphericity__943->SetBinContent(14,0.3049326);
   VbbHcc_both_Sphericity__943->SetBinContent(15,0.2387638);
   VbbHcc_both_Sphericity__943->SetBinContent(16,0.201145);
   VbbHcc_both_Sphericity__943->SetBinContent(17,0.1402412);
   VbbHcc_both_Sphericity__943->SetBinContent(18,0.1057792);
   VbbHcc_both_Sphericity__943->SetBinContent(19,0.06440419);
   VbbHcc_both_Sphericity__943->SetBinContent(20,0.02839028);
   VbbHcc_both_Sphericity__943->SetBinContent(21,0.006130582);
   VbbHcc_both_Sphericity__943->SetBinContent(22,0.002068461);
   VbbHcc_both_Sphericity__943->SetBinContent(23,0.0009326205);
   VbbHcc_both_Sphericity__943->SetBinError(1,0.0278358);
   VbbHcc_both_Sphericity__943->SetBinError(2,0.02881865);
   VbbHcc_both_Sphericity__943->SetBinError(3,0.02480668);
   VbbHcc_both_Sphericity__943->SetBinError(4,0.02175492);
   VbbHcc_both_Sphericity__943->SetBinError(5,0.02041951);
   VbbHcc_both_Sphericity__943->SetBinError(6,0.01833158);
   VbbHcc_both_Sphericity__943->SetBinError(7,0.0166416);
   VbbHcc_both_Sphericity__943->SetBinError(8,0.01558402);
   VbbHcc_both_Sphericity__943->SetBinError(9,0.0144127);
   VbbHcc_both_Sphericity__943->SetBinError(10,0.01346943);
   VbbHcc_both_Sphericity__943->SetBinError(11,0.01243892);
   VbbHcc_both_Sphericity__943->SetBinError(12,0.01143723);
   VbbHcc_both_Sphericity__943->SetBinError(13,0.01061655);
   VbbHcc_both_Sphericity__943->SetBinError(14,0.009962084);
   VbbHcc_both_Sphericity__943->SetBinError(15,0.008817087);
   VbbHcc_both_Sphericity__943->SetBinError(16,0.008119698);
   VbbHcc_both_Sphericity__943->SetBinError(17,0.006787965);
   VbbHcc_both_Sphericity__943->SetBinError(18,0.005866744);
   VbbHcc_both_Sphericity__943->SetBinError(19,0.004543682);
   VbbHcc_both_Sphericity__943->SetBinError(20,0.002987357);
   VbbHcc_both_Sphericity__943->SetBinError(21,0.00136493);
   VbbHcc_both_Sphericity__943->SetBinError(22,0.0007911514);
   VbbHcc_both_Sphericity__943->SetBinError(23,0.0005406896);
   VbbHcc_both_Sphericity__943->SetEntries(50200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity__943->SetFillColor(ci);
   VbbHcc_both_Sphericity__943->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity__943->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity__943->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__943->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__943->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__943->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__943->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__943->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__943->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__943->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__943->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
