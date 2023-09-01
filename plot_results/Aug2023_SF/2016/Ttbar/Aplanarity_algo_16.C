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
   Aplanarity_algo_16->Range(-0.2,-35079.97,1.133333,315719.7);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__591 = new TH1D("VbbHcc_algo_Aplanarity__591","",50,0,1);
   VbbHcc_algo_Aplanarity__591->SetBinContent(1,267276);
   VbbHcc_algo_Aplanarity__591->SetBinContent(2,35732.32);
   VbbHcc_algo_Aplanarity__591->SetBinContent(3,7492.457);
   VbbHcc_algo_Aplanarity__591->SetBinContent(4,2114.776);
   VbbHcc_algo_Aplanarity__591->SetBinContent(5,705.033);
   VbbHcc_algo_Aplanarity__591->SetBinContent(6,280.1215);
   VbbHcc_algo_Aplanarity__591->SetBinContent(7,124.7421);
   VbbHcc_algo_Aplanarity__591->SetBinContent(8,57.01359);
   VbbHcc_algo_Aplanarity__591->SetBinContent(9,30.27849);
   VbbHcc_algo_Aplanarity__591->SetBinContent(10,14.24845);
   VbbHcc_algo_Aplanarity__591->SetBinContent(11,9.15364);
   VbbHcc_algo_Aplanarity__591->SetBinContent(12,5.16017);
   VbbHcc_algo_Aplanarity__591->SetBinContent(13,3.568742);
   VbbHcc_algo_Aplanarity__591->SetBinContent(14,1.681098);
   VbbHcc_algo_Aplanarity__591->SetBinContent(15,1.035069);
   VbbHcc_algo_Aplanarity__591->SetBinContent(16,0.5366877);
   VbbHcc_algo_Aplanarity__591->SetBinContent(17,0.3476945);
   VbbHcc_algo_Aplanarity__591->SetBinContent(18,0.2415103);
   VbbHcc_algo_Aplanarity__591->SetBinContent(19,0.03581466);
   VbbHcc_algo_Aplanarity__591->SetBinContent(22,0.03072364);
   VbbHcc_algo_Aplanarity__591->SetBinError(1,118.0181);
   VbbHcc_algo_Aplanarity__591->SetBinError(2,42.54281);
   VbbHcc_algo_Aplanarity__591->SetBinError(3,19.30642);
   VbbHcc_algo_Aplanarity__591->SetBinError(4,10.16298);
   VbbHcc_algo_Aplanarity__591->SetBinError(5,5.807465);
   VbbHcc_algo_Aplanarity__591->SetBinError(6,3.649411);
   VbbHcc_algo_Aplanarity__591->SetBinError(7,2.421952);
   VbbHcc_algo_Aplanarity__591->SetBinError(8,1.621198);
   VbbHcc_algo_Aplanarity__591->SetBinError(9,1.186048);
   VbbHcc_algo_Aplanarity__591->SetBinError(10,0.7986853);
   VbbHcc_algo_Aplanarity__591->SetBinError(11,0.647524);
   VbbHcc_algo_Aplanarity__591->SetBinError(12,0.4868574);
   VbbHcc_algo_Aplanarity__591->SetBinError(13,0.4123619);
   VbbHcc_algo_Aplanarity__591->SetBinError(14,0.2785664);
   VbbHcc_algo_Aplanarity__591->SetBinError(15,0.2091496);
   VbbHcc_algo_Aplanarity__591->SetBinError(16,0.1606668);
   VbbHcc_algo_Aplanarity__591->SetBinError(17,0.1274772);
   VbbHcc_algo_Aplanarity__591->SetBinError(18,0.09940655);
   VbbHcc_algo_Aplanarity__591->SetBinError(19,0.03581466);
   VbbHcc_algo_Aplanarity__591->SetBinError(22,0.03072364);
   VbbHcc_algo_Aplanarity__591->SetEntries(6564600);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity__591->SetFillColor(ci);
   VbbHcc_algo_Aplanarity__591->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity__591->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity__591->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__591->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__591->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__591->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__591->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__591->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__591->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__591->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__591->Draw("HIST");
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
