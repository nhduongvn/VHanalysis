#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHbb_DHZfirst_17()
{
//=========Macro generated from canvas: Aplanarity_ZHbb_DHZfirst_17/Aplanarity_ZHbb_DHZfirst_17
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHbb_DHZfirst_17 = new TCanvas("Aplanarity_ZHbb_DHZfirst_17", "Aplanarity_ZHbb_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHbb_DHZfirst_17->SetHighLightColor(2);
   Aplanarity_ZHbb_DHZfirst_17->Range(-0.2,-1.781587,1.133333,16.03428);
   Aplanarity_ZHbb_DHZfirst_17->SetFillColor(0);
   Aplanarity_ZHbb_DHZfirst_17->SetFillStyle(4000);
   Aplanarity_ZHbb_DHZfirst_17->SetBorderMode(0);
   Aplanarity_ZHbb_DHZfirst_17->SetBorderSize(2);
   Aplanarity_ZHbb_DHZfirst_17->SetLeftMargin(0.15);
   Aplanarity_ZHbb_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_DHZfirst_17->SetFrameBorderMode(0);
   Aplanarity_ZHbb_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1895 = new TH1D("VH_DHZfirst_Aplanarity__1895","",50,0,1);
   VH_DHZfirst_Aplanarity__1895->SetBinContent(1,13.574);
   VH_DHZfirst_Aplanarity__1895->SetBinContent(2,1.068316);
   VH_DHZfirst_Aplanarity__1895->SetBinContent(3,0.1897351);
   VH_DHZfirst_Aplanarity__1895->SetBinContent(4,0.0293186);
   VH_DHZfirst_Aplanarity__1895->SetBinContent(5,0.004251304);
   VH_DHZfirst_Aplanarity__1895->SetBinContent(6,0.006657178);
   VH_DHZfirst_Aplanarity__1895->SetBinContent(7,0.0005844394);
   VH_DHZfirst_Aplanarity__1895->SetBinError(1,0.1340263);
   VH_DHZfirst_Aplanarity__1895->SetBinError(2,0.03569904);
   VH_DHZfirst_Aplanarity__1895->SetBinError(3,0.0166133);
   VH_DHZfirst_Aplanarity__1895->SetBinError(4,0.004175765);
   VH_DHZfirst_Aplanarity__1895->SetBinError(5,0.001809051);
   VH_DHZfirst_Aplanarity__1895->SetBinError(6,0.003597902);
   VH_DHZfirst_Aplanarity__1895->SetBinError(7,0.0004134618);
   VH_DHZfirst_Aplanarity__1895->SetEntries(24184);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1895->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1895->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1895->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1895->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1895->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1895->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1895->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1895->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1895->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1895->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1895->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1895->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1895->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1895->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1895->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1895->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHbb_DHZfirst_17->Modified();
   Aplanarity_ZHbb_DHZfirst_17->cd();
   Aplanarity_ZHbb_DHZfirst_17->SetSelected(Aplanarity_ZHbb_DHZfirst_17);
}
