#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity()
{
//=========Macro generated from canvas: Aplanarity/Aplanarity
//=========  (Fri Mar 29 15:50:01 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity = new TCanvas("Aplanarity", "Aplanarity",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity->SetHighLightColor(2);
   Aplanarity->Range(-0.2,-0.6160097,1.133333,5.544087);
   Aplanarity->SetFillColor(0);
   Aplanarity->SetFillStyle(4000);
   Aplanarity->SetBorderMode(0);
   Aplanarity->SetBorderSize(2);
   Aplanarity->SetLeftMargin(0.15);
   Aplanarity->SetFrameFillStyle(1000);
   Aplanarity->SetFrameBorderMode(0);
   Aplanarity->SetFrameFillStyle(1000);
   Aplanarity->SetFrameBorderMode(0);
   
   TH1D *VH_MCjet_ideal_Aplanarity__16 = new TH1D("VH_MCjet_ideal_Aplanarity__16","",50,0,1);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(1,4.693407);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(2,3.041593);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(3,1.963728);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(4,1.273959);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(5,0.8931412);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(6,0.6172517);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(7,0.4897428);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(8,0.3152627);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(9,0.2594027);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(10,0.1509128);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(11,0.1164118);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(12,0.06876295);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(13,0.06960034);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(14,0.04044122);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(15,0.03402806);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(16,0.02887674);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(17,0.01616658);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(18,0.004365706);
   VH_MCjet_ideal_Aplanarity__16->SetBinContent(19,0.005026329);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(1,0.1316179);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(2,0.097851);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(3,0.08748552);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(4,0.06070564);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(5,0.05140592);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(6,0.04369681);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(7,0.03614167);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(8,0.02917303);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(9,0.02725924);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(10,0.01974131);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(11,0.01721191);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(12,0.01280898);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(13,0.01258585);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(14,0.009822375);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(15,0.01084059);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(16,0.009296439);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(17,0.0060377);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(18,0.002554569);
   VH_MCjet_ideal_Aplanarity__16->SetBinError(19,0.003454717);
   VH_MCjet_ideal_Aplanarity__16->SetEntries(5357);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_MCjet_ideal_Aplanarity__16->SetLineColor(ci);
   VH_MCjet_ideal_Aplanarity__16->GetXaxis()->SetTitle("Aplanarity");
   VH_MCjet_ideal_Aplanarity__16->GetXaxis()->SetRange(1,50);
   VH_MCjet_ideal_Aplanarity__16->GetXaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Aplanarity__16->GetXaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_Aplanarity__16->GetXaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Aplanarity__16->GetYaxis()->SetTitle("Events/0.02");
   VH_MCjet_ideal_Aplanarity__16->GetYaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Aplanarity__16->GetYaxis()->SetLabelSize(0.05);
   VH_MCjet_ideal_Aplanarity__16->GetYaxis()->SetTitleSize(0.057);
   VH_MCjet_ideal_Aplanarity__16->GetYaxis()->SetTitleOffset(1.2);
   VH_MCjet_ideal_Aplanarity__16->GetYaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Aplanarity__16->GetZaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Aplanarity__16->GetZaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_Aplanarity__16->GetZaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Aplanarity__16->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity->Modified();
   Aplanarity->cd();
   Aplanarity->SetSelected(Aplanarity);
}
