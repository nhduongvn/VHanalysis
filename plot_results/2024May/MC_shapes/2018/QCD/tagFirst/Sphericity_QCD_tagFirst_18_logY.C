#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_tagFirst_18_logY()
{
//=========Macro generated from canvas: Sphericity_QCD_tagFirst_18/Sphericity_QCD_tagFirst_18
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_tagFirst_18 = new TCanvas("Sphericity_QCD_tagFirst_18", "Sphericity_QCD_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_tagFirst_18->SetHighLightColor(2);
   Sphericity_QCD_tagFirst_18->Range(-0.2,0.4227671,1.133333,6.915747);
   Sphericity_QCD_tagFirst_18->SetFillColor(0);
   Sphericity_QCD_tagFirst_18->SetFillStyle(4000);
   Sphericity_QCD_tagFirst_18->SetBorderMode(0);
   Sphericity_QCD_tagFirst_18->SetBorderSize(2);
   Sphericity_QCD_tagFirst_18->SetLogy();
   Sphericity_QCD_tagFirst_18->SetLeftMargin(0.15);
   Sphericity_QCD_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_QCD_tagFirst_18->SetFrameBorderMode(0);
   Sphericity_QCD_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_QCD_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__429 = new TH1D("VH_tagFirst_Sphericity__429","",25,0,1);
   VH_tagFirst_Sphericity__429->SetBinContent(1,974764.5);
   VH_tagFirst_Sphericity__429->SetBinContent(2,722685.4);
   VH_tagFirst_Sphericity__429->SetBinContent(3,397349.5);
   VH_tagFirst_Sphericity__429->SetBinContent(4,289975.1);
   VH_tagFirst_Sphericity__429->SetBinContent(5,134987.1);
   VH_tagFirst_Sphericity__429->SetBinContent(6,70751.3);
   VH_tagFirst_Sphericity__429->SetBinContent(7,27932.59);
   VH_tagFirst_Sphericity__429->SetBinContent(8,25571.84);
   VH_tagFirst_Sphericity__429->SetBinContent(9,14701.38);
   VH_tagFirst_Sphericity__429->SetBinContent(10,9124.645);
   VH_tagFirst_Sphericity__429->SetBinContent(11,9728.264);
   VH_tagFirst_Sphericity__429->SetBinContent(12,4627.921);
   VH_tagFirst_Sphericity__429->SetBinContent(13,2688.654);
   VH_tagFirst_Sphericity__429->SetBinContent(14,3513.253);
   VH_tagFirst_Sphericity__429->SetBinContent(15,1901.979);
   VH_tagFirst_Sphericity__429->SetBinContent(16,4473.758);
   VH_tagFirst_Sphericity__429->SetBinContent(17,661.5918);
   VH_tagFirst_Sphericity__429->SetBinContent(18,887.9737);
   VH_tagFirst_Sphericity__429->SetBinContent(19,383.6028);
   VH_tagFirst_Sphericity__429->SetBinContent(20,114.0327);
   VH_tagFirst_Sphericity__429->SetBinContent(21,55.63537);
   VH_tagFirst_Sphericity__429->SetBinContent(23,23.60995);
   VH_tagFirst_Sphericity__429->SetBinError(1,29759.44);
   VH_tagFirst_Sphericity__429->SetBinError(2,18814.11);
   VH_tagFirst_Sphericity__429->SetBinError(3,13285.17);
   VH_tagFirst_Sphericity__429->SetBinError(4,22042.99);
   VH_tagFirst_Sphericity__429->SetBinError(5,8267.989);
   VH_tagFirst_Sphericity__429->SetBinError(6,5250.443);
   VH_tagFirst_Sphericity__429->SetBinError(7,2353.024);
   VH_tagFirst_Sphericity__429->SetBinError(8,4721.587);
   VH_tagFirst_Sphericity__429->SetBinError(9,2375.382);
   VH_tagFirst_Sphericity__429->SetBinError(10,1189.715);
   VH_tagFirst_Sphericity__429->SetBinError(11,2240.564);
   VH_tagFirst_Sphericity__429->SetBinError(12,908.667);
   VH_tagFirst_Sphericity__429->SetBinError(13,299.8866);
   VH_tagFirst_Sphericity__429->SetBinError(14,922.3075);
   VH_tagFirst_Sphericity__429->SetBinError(15,314.982);
   VH_tagFirst_Sphericity__429->SetBinError(16,3578.92);
   VH_tagFirst_Sphericity__429->SetBinError(17,111.5944);
   VH_tagFirst_Sphericity__429->SetBinError(18,272.2979);
   VH_tagFirst_Sphericity__429->SetBinError(19,118.6523);
   VH_tagFirst_Sphericity__429->SetBinError(20,78.07736);
   VH_tagFirst_Sphericity__429->SetBinError(21,54.68032);
   VH_tagFirst_Sphericity__429->SetBinError(23,23.60995);
   VH_tagFirst_Sphericity__429->SetEntries(100082);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__429->SetLineColor(ci);
   VH_tagFirst_Sphericity__429->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__429->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__429->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__429->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__429->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__429->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__429->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__429->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__429->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__429->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__429->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__429->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__429->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__429->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__429->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_tagFirst_18->Modified();
   Sphericity_QCD_tagFirst_18->cd();
   Sphericity_QCD_tagFirst_18->SetSelected(Sphericity_QCD_tagFirst_18);
}
