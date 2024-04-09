#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_17()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_17/Aplanarity_tagFirst_17
//=========  (Mon Apr  8 11:27:51 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagFirst_17 = new TCanvas("Aplanarity_tagFirst_17", "Aplanarity_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tagFirst_17->SetHighLightColor(2);
   Aplanarity_tagFirst_17->Range(-0.2,-0.1720038,1.133333,1.548034);
   Aplanarity_tagFirst_17->SetFillColor(0);
   Aplanarity_tagFirst_17->SetFillStyle(4000);
   Aplanarity_tagFirst_17->SetBorderMode(0);
   Aplanarity_tagFirst_17->SetBorderSize(2);
   Aplanarity_tagFirst_17->SetLeftMargin(0.15);
   Aplanarity_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_17->SetFrameBorderMode(0);
   Aplanarity_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__47 = new TH1D("VH_tagFirst_Aplanarity__47","",50,0,1);
   VH_tagFirst_Aplanarity__47->SetBinContent(1,1.310505);
   VH_tagFirst_Aplanarity__47->SetBinContent(2,0.1171994);
   VH_tagFirst_Aplanarity__47->SetBinContent(3,0.02448301);
   VH_tagFirst_Aplanarity__47->SetBinContent(4,0.01407391);
   VH_tagFirst_Aplanarity__47->SetBinContent(5,0.003769742);
   VH_tagFirst_Aplanarity__47->SetBinContent(6,0.001290917);
   VH_tagFirst_Aplanarity__47->SetBinContent(7,0.0001481517);
   VH_tagFirst_Aplanarity__47->SetBinContent(9,0.001064883);
   VH_tagFirst_Aplanarity__47->SetBinContent(11,0.0009156332);
   VH_tagFirst_Aplanarity__47->SetBinError(1,0.04545116);
   VH_tagFirst_Aplanarity__47->SetBinError(2,0.01369033);
   VH_tagFirst_Aplanarity__47->SetBinError(3,0.006655205);
   VH_tagFirst_Aplanarity__47->SetBinError(4,0.004561593);
   VH_tagFirst_Aplanarity__47->SetBinError(5,0.002177518);
   VH_tagFirst_Aplanarity__47->SetBinError(6,0.001290917);
   VH_tagFirst_Aplanarity__47->SetBinError(7,0.0001481517);
   VH_tagFirst_Aplanarity__47->SetBinError(9,0.001064883);
   VH_tagFirst_Aplanarity__47->SetBinError(11,0.0009156332);
   VH_tagFirst_Aplanarity__47->SetEntries(1123);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__47->SetLineColor(ci);
   VH_tagFirst_Aplanarity__47->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__47->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__47->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__47->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__47->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__47->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__47->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__47->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__47->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__47->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__47->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__47->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__47->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__47->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__47->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tagFirst_17->Modified();
   Aplanarity_tagFirst_17->cd();
   Aplanarity_tagFirst_17->SetSelected(Aplanarity_tagFirst_17);
}
