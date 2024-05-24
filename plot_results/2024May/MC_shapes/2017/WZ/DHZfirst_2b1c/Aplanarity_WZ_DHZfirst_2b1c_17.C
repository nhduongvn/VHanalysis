#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_DHZfirst_2b1c_17()
{
//=========Macro generated from canvas: Aplanarity_WZ_DHZfirst_2b1c_17/Aplanarity_WZ_DHZfirst_2b1c_17
//=========  (Fri May 24 12:43:08 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_DHZfirst_2b1c_17 = new TCanvas("Aplanarity_WZ_DHZfirst_2b1c_17", "Aplanarity_WZ_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_DHZfirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_WZ_DHZfirst_2b1c_17->Range(-0.2,-12.56003,1.133333,113.0403);
   Aplanarity_WZ_DHZfirst_2b1c_17->SetFillColor(0);
   Aplanarity_WZ_DHZfirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_WZ_DHZfirst_2b1c_17->SetBorderMode(0);
   Aplanarity_WZ_DHZfirst_2b1c_17->SetBorderSize(2);
   Aplanarity_WZ_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_WZ_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WZ_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_WZ_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WZ_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4076 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4076","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4076->SetBinContent(1,95.69546);
   VH_DHZfirst_2b1c_Aplanarity__4076->SetBinContent(2,4.700698);
   VH_DHZfirst_2b1c_Aplanarity__4076->SetBinContent(3,2.243298);
   VH_DHZfirst_2b1c_Aplanarity__4076->SetBinError(1,5.490424);
   VH_DHZfirst_2b1c_Aplanarity__4076->SetBinError(2,1.086835);
   VH_DHZfirst_2b1c_Aplanarity__4076->SetBinError(3,0.7955063);
   VH_DHZfirst_2b1c_Aplanarity__4076->SetEntries(446);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4076->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4076->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4076->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4076->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4076->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4076->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4076->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4076->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4076->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4076->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4076->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4076->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4076->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4076->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4076->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4076->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_DHZfirst_2b1c_17->Modified();
   Aplanarity_WZ_DHZfirst_2b1c_17->cd();
   Aplanarity_WZ_DHZfirst_2b1c_17->SetSelected(Aplanarity_WZ_DHZfirst_2b1c_17);
}
