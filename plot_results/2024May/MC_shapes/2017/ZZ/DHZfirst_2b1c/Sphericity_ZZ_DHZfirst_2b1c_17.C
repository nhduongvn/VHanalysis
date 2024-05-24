#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZZ_DHZfirst_2b1c_17()
{
//=========Macro generated from canvas: Sphericity_ZZ_DHZfirst_2b1c_17/Sphericity_ZZ_DHZfirst_2b1c_17
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZZ_DHZfirst_2b1c_17 = new TCanvas("Sphericity_ZZ_DHZfirst_2b1c_17", "Sphericity_ZZ_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZZ_DHZfirst_2b1c_17->SetHighLightColor(2);
   Sphericity_ZZ_DHZfirst_2b1c_17->Range(-0.2,-3.646089,1.133333,32.8148);
   Sphericity_ZZ_DHZfirst_2b1c_17->SetFillColor(0);
   Sphericity_ZZ_DHZfirst_2b1c_17->SetFillStyle(4000);
   Sphericity_ZZ_DHZfirst_2b1c_17->SetBorderMode(0);
   Sphericity_ZZ_DHZfirst_2b1c_17->SetBorderSize(2);
   Sphericity_ZZ_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_ZZ_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZZ_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_ZZ_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZZ_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4049 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4049","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4049->SetBinContent(1,27.77972);
   VH_DHZfirst_2b1c_Sphericity__4049->SetBinContent(2,19.34586);
   VH_DHZfirst_2b1c_Sphericity__4049->SetBinContent(3,13.47346);
   VH_DHZfirst_2b1c_Sphericity__4049->SetBinContent(4,9.352859);
   VH_DHZfirst_2b1c_Sphericity__4049->SetBinContent(5,8.71767);
   VH_DHZfirst_2b1c_Sphericity__4049->SetBinContent(6,2.865199);
   VH_DHZfirst_2b1c_Sphericity__4049->SetBinContent(7,0.1700492);
   VH_DHZfirst_2b1c_Sphericity__4049->SetBinError(1,2.910224);
   VH_DHZfirst_2b1c_Sphericity__4049->SetBinError(2,2.523685);
   VH_DHZfirst_2b1c_Sphericity__4049->SetBinError(3,2.257401);
   VH_DHZfirst_2b1c_Sphericity__4049->SetBinError(4,1.879659);
   VH_DHZfirst_2b1c_Sphericity__4049->SetBinError(5,1.759075);
   VH_DHZfirst_2b1c_Sphericity__4049->SetBinError(6,0.9357434);
   VH_DHZfirst_2b1c_Sphericity__4049->SetBinError(7,0.1700492);
   VH_DHZfirst_2b1c_Sphericity__4049->SetEntries(334);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4049->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4049->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4049->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4049->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4049->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4049->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4049->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4049->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4049->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4049->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4049->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4049->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4049->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4049->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4049->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4049->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZZ_DHZfirst_2b1c_17->Modified();
   Sphericity_ZZ_DHZfirst_2b1c_17->cd();
   Sphericity_ZZ_DHZfirst_2b1c_17->SetSelected(Sphericity_ZZ_DHZfirst_2b1c_17);
}
