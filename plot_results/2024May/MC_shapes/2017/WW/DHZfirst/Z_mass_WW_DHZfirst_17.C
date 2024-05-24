#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_WW_DHZfirst_17()
{
//=========Macro generated from canvas: Z_mass_WW_DHZfirst_17/Z_mass_WW_DHZfirst_17
//=========  (Fri May 24 12:42:26 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_WW_DHZfirst_17 = new TCanvas("Z_mass_WW_DHZfirst_17", "Z_mass_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_WW_DHZfirst_17->SetHighLightColor(2);
   Z_mass_WW_DHZfirst_17->Range(-60,-0.06422694,340,0.5780424);
   Z_mass_WW_DHZfirst_17->SetFillColor(0);
   Z_mass_WW_DHZfirst_17->SetFillStyle(4000);
   Z_mass_WW_DHZfirst_17->SetBorderMode(0);
   Z_mass_WW_DHZfirst_17->SetBorderSize(2);
   Z_mass_WW_DHZfirst_17->SetLeftMargin(0.15);
   Z_mass_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_mass_WW_DHZfirst_17->SetFrameBorderMode(0);
   Z_mass_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_mass_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_mass__1463 = new TH1D("VH_DHZfirst_Z_mass__1463","",200,0,2000);
   VH_DHZfirst_Z_mass__1463->SetBinContent(7,0.3529121);
   VH_DHZfirst_Z_mass__1463->SetBinContent(8,0.4228507);
   VH_DHZfirst_Z_mass__1463->SetBinContent(14,0.152338);
   VH_DHZfirst_Z_mass__1463->SetBinContent(16,0.2028034);
   VH_DHZfirst_Z_mass__1463->SetBinContent(17,0.4075966);
   VH_DHZfirst_Z_mass__1463->SetBinContent(20,0.2776511);
   VH_DHZfirst_Z_mass__1463->SetBinContent(21,0.4893481);
   VH_DHZfirst_Z_mass__1463->SetBinContent(33,0.2353289);
   VH_DHZfirst_Z_mass__1463->SetBinContent(35,0.2037551);
   VH_DHZfirst_Z_mass__1463->SetBinContent(57,0.4922072);
   VH_DHZfirst_Z_mass__1463->SetBinContent(63,0.4956396);
   VH_DHZfirst_Z_mass__1463->SetBinContent(201,0.3069869);
   VH_DHZfirst_Z_mass__1463->SetBinError(7,0.3529121);
   VH_DHZfirst_Z_mass__1463->SetBinError(8,0.3053895);
   VH_DHZfirst_Z_mass__1463->SetBinError(14,0.152338);
   VH_DHZfirst_Z_mass__1463->SetBinError(16,0.2028034);
   VH_DHZfirst_Z_mass__1463->SetBinError(17,0.2884964);
   VH_DHZfirst_Z_mass__1463->SetBinError(20,0.2776511);
   VH_DHZfirst_Z_mass__1463->SetBinError(21,0.4893481);
   VH_DHZfirst_Z_mass__1463->SetBinError(33,0.2353289);
   VH_DHZfirst_Z_mass__1463->SetBinError(35,0.2037551);
   VH_DHZfirst_Z_mass__1463->SetBinError(57,0.4922072);
   VH_DHZfirst_Z_mass__1463->SetBinError(63,0.4956396);
   VH_DHZfirst_Z_mass__1463->SetBinError(201,0.2419603);
   VH_DHZfirst_Z_mass__1463->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_mass__1463->SetLineColor(ci);
   VH_DHZfirst_Z_mass__1463->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VH_DHZfirst_Z_mass__1463->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_mass__1463->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__1463->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__1463->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__1463->GetYaxis()->SetTitle("Events/10.0 GeV");
   VH_DHZfirst_Z_mass__1463->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__1463->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_mass__1463->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_mass__1463->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_mass__1463->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__1463->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__1463->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__1463->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__1463->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_WW_DHZfirst_17->Modified();
   Z_mass_WW_DHZfirst_17->cd();
   Z_mass_WW_DHZfirst_17->SetSelected(Z_mass_WW_DHZfirst_17);
}
