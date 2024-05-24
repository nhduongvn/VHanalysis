#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_TT_DHZfirst_17()
{
//=========Macro generated from canvas: Aplanarity_TT_DHZfirst_17/Aplanarity_TT_DHZfirst_17
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_TT_DHZfirst_17 = new TCanvas("Aplanarity_TT_DHZfirst_17", "Aplanarity_TT_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_TT_DHZfirst_17->SetHighLightColor(2);
   Aplanarity_TT_DHZfirst_17->Range(-0.2,-1629.428,1.133333,14664.85);
   Aplanarity_TT_DHZfirst_17->SetFillColor(0);
   Aplanarity_TT_DHZfirst_17->SetFillStyle(4000);
   Aplanarity_TT_DHZfirst_17->SetBorderMode(0);
   Aplanarity_TT_DHZfirst_17->SetBorderSize(2);
   Aplanarity_TT_DHZfirst_17->SetLeftMargin(0.15);
   Aplanarity_TT_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_TT_DHZfirst_17->SetFrameBorderMode(0);
   Aplanarity_TT_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_TT_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1907 = new TH1D("VH_DHZfirst_Aplanarity__1907","",50,0,1);
   VH_DHZfirst_Aplanarity__1907->SetBinContent(1,12414.69);
   VH_DHZfirst_Aplanarity__1907->SetBinContent(2,1638.312);
   VH_DHZfirst_Aplanarity__1907->SetBinContent(3,364.2488);
   VH_DHZfirst_Aplanarity__1907->SetBinContent(4,98.3567);
   VH_DHZfirst_Aplanarity__1907->SetBinContent(5,36.02936);
   VH_DHZfirst_Aplanarity__1907->SetBinContent(6,13.2159);
   VH_DHZfirst_Aplanarity__1907->SetBinContent(7,6.229349);
   VH_DHZfirst_Aplanarity__1907->SetBinContent(8,2.138133);
   VH_DHZfirst_Aplanarity__1907->SetBinContent(9,1.472157);
   VH_DHZfirst_Aplanarity__1907->SetBinContent(10,0.8567915);
   VH_DHZfirst_Aplanarity__1907->SetBinContent(11,0.4754739);
   VH_DHZfirst_Aplanarity__1907->SetBinContent(12,0.2784118);
   VH_DHZfirst_Aplanarity__1907->SetBinContent(13,0.03641964);
   VH_DHZfirst_Aplanarity__1907->SetBinContent(14,0.03225538);
   VH_DHZfirst_Aplanarity__1907->SetBinContent(15,0.1389759);
   VH_DHZfirst_Aplanarity__1907->SetBinContent(17,0.03625802);
   VH_DHZfirst_Aplanarity__1907->SetBinError(1,32.79164);
   VH_DHZfirst_Aplanarity__1907->SetBinError(2,11.78739);
   VH_DHZfirst_Aplanarity__1907->SetBinError(3,5.603999);
   VH_DHZfirst_Aplanarity__1907->SetBinError(4,2.787691);
   VH_DHZfirst_Aplanarity__1907->SetBinError(5,1.781995);
   VH_DHZfirst_Aplanarity__1907->SetBinError(6,1.000419);
   VH_DHZfirst_Aplanarity__1907->SetBinError(7,0.6825179);
   VH_DHZfirst_Aplanarity__1907->SetBinError(8,0.3532897);
   VH_DHZfirst_Aplanarity__1907->SetBinError(9,0.3395133);
   VH_DHZfirst_Aplanarity__1907->SetBinError(10,0.2457067);
   VH_DHZfirst_Aplanarity__1907->SetBinError(11,0.1502759);
   VH_DHZfirst_Aplanarity__1907->SetBinError(12,0.1205127);
   VH_DHZfirst_Aplanarity__1907->SetBinError(13,0.03641964);
   VH_DHZfirst_Aplanarity__1907->SetBinError(14,0.03225538);
   VH_DHZfirst_Aplanarity__1907->SetBinError(15,0.08369246);
   VH_DHZfirst_Aplanarity__1907->SetBinError(17,0.02731361);
   VH_DHZfirst_Aplanarity__1907->SetEntries(239565);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1907->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1907->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1907->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1907->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1907->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1907->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1907->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1907->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1907->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1907->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1907->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1907->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1907->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1907->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1907->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1907->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_TT_DHZfirst_17->Modified();
   Aplanarity_TT_DHZfirst_17->cd();
   Aplanarity_TT_DHZfirst_17->SetSelected(Aplanarity_TT_DHZfirst_17);
}
