#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_TT_tagFirst_17_logY()
{
//=========Macro generated from canvas: Aplanarity_TT_tagFirst_17/Aplanarity_TT_tagFirst_17
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_TT_tagFirst_17 = new TCanvas("Aplanarity_TT_tagFirst_17", "Aplanarity_TT_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_TT_tagFirst_17->SetHighLightColor(2);
   Aplanarity_TT_tagFirst_17->Range(-0.2,-1.631994,1.133333,6.480249);
   Aplanarity_TT_tagFirst_17->SetFillColor(0);
   Aplanarity_TT_tagFirst_17->SetFillStyle(4000);
   Aplanarity_TT_tagFirst_17->SetBorderMode(0);
   Aplanarity_TT_tagFirst_17->SetBorderSize(2);
   Aplanarity_TT_tagFirst_17->SetLogy();
   Aplanarity_TT_tagFirst_17->SetLeftMargin(0.15);
   Aplanarity_TT_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_TT_tagFirst_17->SetFrameBorderMode(0);
   Aplanarity_TT_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_TT_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__467 = new TH1D("VH_tagFirst_Aplanarity__467","",50,0,1);
   VH_tagFirst_Aplanarity__467->SetBinContent(0,0.06949146);
   VH_tagFirst_Aplanarity__467->SetBinContent(1,246306.4);
   VH_tagFirst_Aplanarity__467->SetBinContent(2,33708.03);
   VH_tagFirst_Aplanarity__467->SetBinContent(3,8858.182);
   VH_tagFirst_Aplanarity__467->SetBinContent(4,3237.53);
   VH_tagFirst_Aplanarity__467->SetBinContent(5,1456.651);
   VH_tagFirst_Aplanarity__467->SetBinContent(6,753.687);
   VH_tagFirst_Aplanarity__467->SetBinContent(7,420.0064);
   VH_tagFirst_Aplanarity__467->SetBinContent(8,250.5683);
   VH_tagFirst_Aplanarity__467->SetBinContent(9,155.1806);
   VH_tagFirst_Aplanarity__467->SetBinContent(10,98.59566);
   VH_tagFirst_Aplanarity__467->SetBinContent(11,63.54314);
   VH_tagFirst_Aplanarity__467->SetBinContent(12,40.90726);
   VH_tagFirst_Aplanarity__467->SetBinContent(13,28.10359);
   VH_tagFirst_Aplanarity__467->SetBinContent(14,17.05814);
   VH_tagFirst_Aplanarity__467->SetBinContent(15,11.30061);
   VH_tagFirst_Aplanarity__467->SetBinContent(16,6.210942);
   VH_tagFirst_Aplanarity__467->SetBinContent(17,4.197122);
   VH_tagFirst_Aplanarity__467->SetBinContent(18,1.696317);
   VH_tagFirst_Aplanarity__467->SetBinContent(19,0.7504878);
   VH_tagFirst_Aplanarity__467->SetBinContent(20,0.7124123);
   VH_tagFirst_Aplanarity__467->SetBinContent(21,0.3818539);
   VH_tagFirst_Aplanarity__467->SetBinContent(22,0.3021764);
   VH_tagFirst_Aplanarity__467->SetBinError(0,0.06949146);
   VH_tagFirst_Aplanarity__467->SetBinError(1,154.7014);
   VH_tagFirst_Aplanarity__467->SetBinError(2,56.61585);
   VH_tagFirst_Aplanarity__467->SetBinError(3,29.22322);
   VH_tagFirst_Aplanarity__467->SetBinError(4,17.71946);
   VH_tagFirst_Aplanarity__467->SetBinError(5,11.88669);
   VH_tagFirst_Aplanarity__467->SetBinError(6,8.641403);
   VH_tagFirst_Aplanarity__467->SetBinError(7,6.372329);
   VH_tagFirst_Aplanarity__467->SetBinError(8,5.119247);
   VH_tagFirst_Aplanarity__467->SetBinError(9,4.015576);
   VH_tagFirst_Aplanarity__467->SetBinError(10,3.186758);
   VH_tagFirst_Aplanarity__467->SetBinError(11,2.410728);
   VH_tagFirst_Aplanarity__467->SetBinError(12,1.994978);
   VH_tagFirst_Aplanarity__467->SetBinError(13,1.739494);
   VH_tagFirst_Aplanarity__467->SetBinError(14,1.278268);
   VH_tagFirst_Aplanarity__467->SetBinError(15,1.062936);
   VH_tagFirst_Aplanarity__467->SetBinError(16,0.712047);
   VH_tagFirst_Aplanarity__467->SetBinError(17,0.7329766);
   VH_tagFirst_Aplanarity__467->SetBinError(18,0.3416367);
   VH_tagFirst_Aplanarity__467->SetBinError(19,0.2177242);
   VH_tagFirst_Aplanarity__467->SetBinError(20,0.2052389);
   VH_tagFirst_Aplanarity__467->SetBinError(21,0.2060527);
   VH_tagFirst_Aplanarity__467->SetBinError(22,0.2150108);
   VH_tagFirst_Aplanarity__467->SetEntries(4351060);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__467->SetLineColor(ci);
   VH_tagFirst_Aplanarity__467->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__467->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__467->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__467->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__467->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__467->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__467->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__467->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__467->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__467->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__467->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__467->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__467->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__467->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__467->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_TT_tagFirst_17->Modified();
   Aplanarity_TT_tagFirst_17->cd();
   Aplanarity_TT_tagFirst_17->SetSelected(Aplanarity_TT_tagFirst_17);
}
