#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_DHZfirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_WZ_DHZfirst_2b1c_16/Sphericity_WZ_DHZfirst_2b1c_16
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_DHZfirst_2b1c_16 = new TCanvas("Sphericity_WZ_DHZfirst_2b1c_16", "Sphericity_WZ_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_DHZfirst_2b1c_16->SetHighLightColor(2);
   Sphericity_WZ_DHZfirst_2b1c_16->Range(-0.2,-1.861349,1.133333,2.563301);
   Sphericity_WZ_DHZfirst_2b1c_16->SetFillColor(0);
   Sphericity_WZ_DHZfirst_2b1c_16->SetFillStyle(4000);
   Sphericity_WZ_DHZfirst_2b1c_16->SetBorderMode(0);
   Sphericity_WZ_DHZfirst_2b1c_16->SetBorderSize(2);
   Sphericity_WZ_DHZfirst_2b1c_16->SetLogy();
   Sphericity_WZ_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_WZ_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WZ_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_WZ_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WZ_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4045 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4045","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinContent(1,69.70867);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinContent(2,56.12525);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinContent(3,29.81623);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinContent(4,18.15099);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinContent(5,11.04466);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinContent(6,5.174436);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinContent(7,1.354592);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinContent(8,0.2013884);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinContent(9,0.1657982);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinContent(10,0.07702813);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinContent(13,0.07623354);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinError(1,2.530379);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinError(2,2.245574);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinError(3,1.63253);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinError(4,1.292276);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinError(5,1.002231);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinError(6,0.6919568);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinError(7,0.3576502);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinError(8,0.1223262);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinError(9,0.1173169);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinError(10,0.07702813);
   VH_DHZfirst_2b1c_Sphericity__4045->SetBinError(13,0.07623354);
   VH_DHZfirst_2b1c_Sphericity__4045->SetEntries(2193);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4045->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4045->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4045->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4045->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4045->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4045->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4045->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4045->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4045->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4045->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4045->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4045->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4045->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4045->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4045->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4045->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_DHZfirst_2b1c_16->Modified();
   Sphericity_WZ_DHZfirst_2b1c_16->cd();
   Sphericity_WZ_DHZfirst_2b1c_16->SetSelected(Sphericity_WZ_DHZfirst_2b1c_16);
}
