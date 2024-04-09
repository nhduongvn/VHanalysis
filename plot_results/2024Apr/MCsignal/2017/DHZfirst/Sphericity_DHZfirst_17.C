#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_17()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_17/Sphericity_DHZfirst_17
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_17 = new TCanvas("Sphericity_DHZfirst_17", "Sphericity_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_DHZfirst_17->SetHighLightColor(2);
   Sphericity_DHZfirst_17->Range(-0.2,-0.01090227,1.133333,0.0981204);
   Sphericity_DHZfirst_17->SetFillColor(0);
   Sphericity_DHZfirst_17->SetFillStyle(4000);
   Sphericity_DHZfirst_17->SetBorderMode(0);
   Sphericity_DHZfirst_17->SetBorderSize(2);
   Sphericity_DHZfirst_17->SetLeftMargin(0.15);
   Sphericity_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_17->SetFrameBorderMode(0);
   Sphericity_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__188 = new TH1D("VH_DHZfirst_Sphericity__188","",25,0,1);
   VH_DHZfirst_Sphericity__188->SetBinContent(1,0.08306489);
   VH_DHZfirst_Sphericity__188->SetBinContent(2,0.06830305);
   VH_DHZfirst_Sphericity__188->SetBinContent(3,0.04478864);
   VH_DHZfirst_Sphericity__188->SetBinContent(4,0.02714184);
   VH_DHZfirst_Sphericity__188->SetBinContent(5,0.02351778);
   VH_DHZfirst_Sphericity__188->SetBinContent(6,0.006925327);
   VH_DHZfirst_Sphericity__188->SetBinError(1,0.0110536);
   VH_DHZfirst_Sphericity__188->SetBinError(2,0.01040228);
   VH_DHZfirst_Sphericity__188->SetBinError(3,0.008133);
   VH_DHZfirst_Sphericity__188->SetBinError(4,0.005878046);
   VH_DHZfirst_Sphericity__188->SetBinError(5,0.005924318);
   VH_DHZfirst_Sphericity__188->SetBinError(6,0.003035898);
   VH_DHZfirst_Sphericity__188->SetEntries(199);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__188->SetLineColor(ci);
   VH_DHZfirst_Sphericity__188->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__188->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__188->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__188->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__188->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__188->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__188->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__188->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__188->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__188->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__188->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__188->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__188->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__188->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__188->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_DHZfirst_17->Modified();
   Sphericity_DHZfirst_17->cd();
   Sphericity_DHZfirst_17->SetSelected(Sphericity_DHZfirst_17);
}
