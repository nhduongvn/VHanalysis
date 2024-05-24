#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHbb_DHZfirst_2b1c_16()
{
//=========Macro generated from canvas: Aplanarity_ZHbb_DHZfirst_2b1c_16/Aplanarity_ZHbb_DHZfirst_2b1c_16
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHbb_DHZfirst_2b1c_16 = new TCanvas("Aplanarity_ZHbb_DHZfirst_2b1c_16", "Aplanarity_ZHbb_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHbb_DHZfirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_ZHbb_DHZfirst_2b1c_16->Range(-0.2,-10.20331,1.133333,91.82981);
   Aplanarity_ZHbb_DHZfirst_2b1c_16->SetFillColor(0);
   Aplanarity_ZHbb_DHZfirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_ZHbb_DHZfirst_2b1c_16->SetBorderMode(0);
   Aplanarity_ZHbb_DHZfirst_2b1c_16->SetBorderSize(2);
   Aplanarity_ZHbb_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_ZHbb_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_ZHbb_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4054 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4054","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinContent(1,77.73952);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinContent(2,6.975867);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinContent(3,1.117764);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinContent(4,0.2457644);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinContent(5,0.05625431);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinContent(6,0.02225488);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinContent(7,0.005274659);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinContent(8,0.006633402);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinContent(9,0.000465444);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinContent(10,0.0001895909);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinContent(12,0.00148224);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinError(1,0.2602083);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinError(2,0.07540179);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinError(3,0.02986847);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinError(4,0.01390572);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinError(5,0.006365207);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinError(6,0.00430012);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinError(7,0.002188607);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinError(8,0.002400795);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinError(9,0.0003291372);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinError(10,0.0001895909);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetBinError(12,0.001263908);
   VH_DHZfirst_2b1c_Aplanarity__4054->SetEntries(142012);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4054->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4054->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4054->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4054->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4054->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4054->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4054->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4054->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4054->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4054->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4054->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4054->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4054->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4054->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4054->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4054->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHbb_DHZfirst_2b1c_16->Modified();
   Aplanarity_ZHbb_DHZfirst_2b1c_16->cd();
   Aplanarity_ZHbb_DHZfirst_2b1c_16->SetSelected(Aplanarity_ZHbb_DHZfirst_2b1c_16);
}
