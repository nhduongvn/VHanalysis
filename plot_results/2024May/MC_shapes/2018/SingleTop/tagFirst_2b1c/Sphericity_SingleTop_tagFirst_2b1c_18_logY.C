#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_tagFirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Sphericity_SingleTop_tagFirst_2b1c_18/Sphericity_SingleTop_tagFirst_2b1c_18
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_tagFirst_2b1c_18 = new TCanvas("Sphericity_SingleTop_tagFirst_2b1c_18", "Sphericity_SingleTop_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_tagFirst_2b1c_18->SetHighLightColor(2);
   Sphericity_SingleTop_tagFirst_2b1c_18->Range(-0.2,-1.191639,1.133333,5.289726);
   Sphericity_SingleTop_tagFirst_2b1c_18->SetFillColor(0);
   Sphericity_SingleTop_tagFirst_2b1c_18->SetFillStyle(4000);
   Sphericity_SingleTop_tagFirst_2b1c_18->SetBorderMode(0);
   Sphericity_SingleTop_tagFirst_2b1c_18->SetBorderSize(2);
   Sphericity_SingleTop_tagFirst_2b1c_18->SetLogy();
   Sphericity_SingleTop_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Sphericity_SingleTop_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Sphericity_SingleTop_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2601 = new TH1D("VH_tagFirst_2b1c_Sphericity__2601","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(1,23122.82);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(2,18849.63);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(3,11039.03);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(4,6475.519);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(5,3627.313);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(6,1961.713);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(7,1095.352);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(8,648.5869);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(9,400.6295);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(10,272.3858);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(11,207.8302);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(12,147.0384);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(13,100.9578);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(14,73.89997);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(15,54.1591);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(16,42.61784);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(17,31.33647);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(18,20.08784);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(19,13.02818);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(20,4.672587);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(21,2.789692);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinContent(22,0.5721733);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(1,93.82643);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(2,82.84324);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(3,63.66025);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(4,57.22283);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(5,36.38735);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(6,28.37398);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(7,22.15198);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(8,16.92709);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(9,12.60845);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(10,10.23137);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(11,11.59638);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(12,7.493164);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(13,5.641576);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(14,5.22547);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(15,3.930888);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(16,3.485468);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(17,3.319263);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(18,2.497168);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(19,2.014497);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(20,1.41668);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(21,0.8111813);
   VH_tagFirst_2b1c_Sphericity__2601->SetBinError(22,0.3277148);
   VH_tagFirst_2b1c_Sphericity__2601->SetEntries(511562);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2601->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2601->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2601->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2601->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2601->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2601->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2601->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2601->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2601->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2601->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2601->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2601->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2601->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2601->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2601->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2601->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_tagFirst_2b1c_18->Modified();
   Sphericity_SingleTop_tagFirst_2b1c_18->cd();
   Sphericity_SingleTop_tagFirst_2b1c_18->SetSelected(Sphericity_SingleTop_tagFirst_2b1c_18);
}
