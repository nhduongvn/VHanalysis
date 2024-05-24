#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_DHZfirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Sphericity_WZ_DHZfirst_2b1c_17/Sphericity_WZ_DHZfirst_2b1c_17
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_DHZfirst_2b1c_17 = new TCanvas("Sphericity_WZ_DHZfirst_2b1c_17", "Sphericity_WZ_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_DHZfirst_2b1c_17->SetHighLightColor(2);
   Sphericity_WZ_DHZfirst_2b1c_17->Range(-0.2,-0.6907458,1.133333,2.093479);
   Sphericity_WZ_DHZfirst_2b1c_17->SetFillColor(0);
   Sphericity_WZ_DHZfirst_2b1c_17->SetFillStyle(4000);
   Sphericity_WZ_DHZfirst_2b1c_17->SetBorderMode(0);
   Sphericity_WZ_DHZfirst_2b1c_17->SetBorderSize(2);
   Sphericity_WZ_DHZfirst_2b1c_17->SetLogy();
   Sphericity_WZ_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_WZ_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WZ_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_WZ_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WZ_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4046 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4046","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4046->SetBinContent(1,34.47524);
   VH_DHZfirst_2b1c_Sphericity__4046->SetBinContent(2,31.22959);
   VH_DHZfirst_2b1c_Sphericity__4046->SetBinContent(3,13.57137);
   VH_DHZfirst_2b1c_Sphericity__4046->SetBinContent(4,10.90758);
   VH_DHZfirst_2b1c_Sphericity__4046->SetBinContent(5,7.310519);
   VH_DHZfirst_2b1c_Sphericity__4046->SetBinContent(6,3.214586);
   VH_DHZfirst_2b1c_Sphericity__4046->SetBinContent(7,1.15663);
   VH_DHZfirst_2b1c_Sphericity__4046->SetBinContent(8,0.7739388);
   VH_DHZfirst_2b1c_Sphericity__4046->SetBinError(1,3.253239);
   VH_DHZfirst_2b1c_Sphericity__4046->SetBinError(2,2.923654);
   VH_DHZfirst_2b1c_Sphericity__4046->SetBinError(3,1.989006);
   VH_DHZfirst_2b1c_Sphericity__4046->SetBinError(4,2.163201);
   VH_DHZfirst_2b1c_Sphericity__4046->SetBinError(5,1.467916);
   VH_DHZfirst_2b1c_Sphericity__4046->SetBinError(6,0.9456884);
   VH_DHZfirst_2b1c_Sphericity__4046->SetBinError(7,0.7374357);
   VH_DHZfirst_2b1c_Sphericity__4046->SetBinError(8,0.7739388);
   VH_DHZfirst_2b1c_Sphericity__4046->SetEntries(446);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4046->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4046->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4046->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4046->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4046->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4046->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4046->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4046->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4046->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4046->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4046->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4046->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4046->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4046->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4046->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4046->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_DHZfirst_2b1c_17->Modified();
   Sphericity_WZ_DHZfirst_2b1c_17->cd();
   Sphericity_WZ_DHZfirst_2b1c_17->SetSelected(Sphericity_WZ_DHZfirst_2b1c_17);
}
