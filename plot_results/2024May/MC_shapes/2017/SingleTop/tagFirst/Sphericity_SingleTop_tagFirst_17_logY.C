#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_tagFirst_17_logY()
{
//=========Macro generated from canvas: Sphericity_SingleTop_tagFirst_17/Sphericity_SingleTop_tagFirst_17
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_tagFirst_17 = new TCanvas("Sphericity_SingleTop_tagFirst_17", "Sphericity_SingleTop_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_tagFirst_17->SetHighLightColor(2);
   Sphericity_SingleTop_tagFirst_17->Range(-0.2,-1.575226,1.133333,4.666942);
   Sphericity_SingleTop_tagFirst_17->SetFillColor(0);
   Sphericity_SingleTop_tagFirst_17->SetFillStyle(4000);
   Sphericity_SingleTop_tagFirst_17->SetBorderMode(0);
   Sphericity_SingleTop_tagFirst_17->SetBorderSize(2);
   Sphericity_SingleTop_tagFirst_17->SetLogy();
   Sphericity_SingleTop_tagFirst_17->SetLeftMargin(0.15);
   Sphericity_SingleTop_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagFirst_17->SetFrameBorderMode(0);
   Sphericity_SingleTop_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__440 = new TH1D("VH_tagFirst_Sphericity__440","",25,0,1);
   VH_tagFirst_Sphericity__440->SetBinContent(1,5823.389);
   VH_tagFirst_Sphericity__440->SetBinContent(2,4690.114);
   VH_tagFirst_Sphericity__440->SetBinContent(3,2742.903);
   VH_tagFirst_Sphericity__440->SetBinContent(4,1588.483);
   VH_tagFirst_Sphericity__440->SetBinContent(5,910.2625);
   VH_tagFirst_Sphericity__440->SetBinContent(6,500.673);
   VH_tagFirst_Sphericity__440->SetBinContent(7,284.3475);
   VH_tagFirst_Sphericity__440->SetBinContent(8,169.3838);
   VH_tagFirst_Sphericity__440->SetBinContent(9,101.281);
   VH_tagFirst_Sphericity__440->SetBinContent(10,76.131);
   VH_tagFirst_Sphericity__440->SetBinContent(11,52.82767);
   VH_tagFirst_Sphericity__440->SetBinContent(12,39.65309);
   VH_tagFirst_Sphericity__440->SetBinContent(13,25.83086);
   VH_tagFirst_Sphericity__440->SetBinContent(14,20.67601);
   VH_tagFirst_Sphericity__440->SetBinContent(15,15.4252);
   VH_tagFirst_Sphericity__440->SetBinContent(16,11.36425);
   VH_tagFirst_Sphericity__440->SetBinContent(17,8.055487);
   VH_tagFirst_Sphericity__440->SetBinContent(18,7.459662);
   VH_tagFirst_Sphericity__440->SetBinContent(19,3.399935);
   VH_tagFirst_Sphericity__440->SetBinContent(20,0.8148002);
   VH_tagFirst_Sphericity__440->SetBinContent(21,0.9921312);
   VH_tagFirst_Sphericity__440->SetBinContent(22,0.2238827);
   VH_tagFirst_Sphericity__440->SetBinError(1,35.65354);
   VH_tagFirst_Sphericity__440->SetBinError(2,31.19683);
   VH_tagFirst_Sphericity__440->SetBinError(3,24.07603);
   VH_tagFirst_Sphericity__440->SetBinError(4,18.71742);
   VH_tagFirst_Sphericity__440->SetBinError(5,14.1568);
   VH_tagFirst_Sphericity__440->SetBinError(6,10.7964);
   VH_tagFirst_Sphericity__440->SetBinError(7,8.440471);
   VH_tagFirst_Sphericity__440->SetBinError(8,6.573269);
   VH_tagFirst_Sphericity__440->SetBinError(9,4.882667);
   VH_tagFirst_Sphericity__440->SetBinError(10,4.399659);
   VH_tagFirst_Sphericity__440->SetBinError(11,3.56524);
   VH_tagFirst_Sphericity__440->SetBinError(12,3.182978);
   VH_tagFirst_Sphericity__440->SetBinError(13,2.238413);
   VH_tagFirst_Sphericity__440->SetBinError(14,2.180245);
   VH_tagFirst_Sphericity__440->SetBinError(15,1.888924);
   VH_tagFirst_Sphericity__440->SetBinError(16,1.972963);
   VH_tagFirst_Sphericity__440->SetBinError(17,1.090194);
   VH_tagFirst_Sphericity__440->SetBinError(18,1.96037);
   VH_tagFirst_Sphericity__440->SetBinError(19,0.8224659);
   VH_tagFirst_Sphericity__440->SetBinError(20,0.3315434);
   VH_tagFirst_Sphericity__440->SetBinError(21,0.5050933);
   VH_tagFirst_Sphericity__440->SetBinError(22,0.2238827);
   VH_tagFirst_Sphericity__440->SetEntries(209648);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__440->SetLineColor(ci);
   VH_tagFirst_Sphericity__440->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__440->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__440->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__440->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__440->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__440->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__440->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__440->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__440->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__440->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__440->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__440->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__440->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__440->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__440->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_tagFirst_17->Modified();
   Sphericity_SingleTop_tagFirst_17->cd();
   Sphericity_SingleTop_tagFirst_17->SetSelected(Sphericity_SingleTop_tagFirst_17);
}
