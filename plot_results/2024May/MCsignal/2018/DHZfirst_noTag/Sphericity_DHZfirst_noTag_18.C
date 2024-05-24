#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_noTag_18()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_noTag_18/Sphericity_DHZfirst_noTag_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_noTag_18 = new TCanvas("Sphericity_DHZfirst_noTag_18", "Sphericity_DHZfirst_noTag_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_DHZfirst_noTag_18->SetHighLightColor(2);
   Sphericity_DHZfirst_noTag_18->Range(-0.2,-0.3373165,1.133333,3.035848);
   Sphericity_DHZfirst_noTag_18->SetFillColor(0);
   Sphericity_DHZfirst_noTag_18->SetFillStyle(4000);
   Sphericity_DHZfirst_noTag_18->SetBorderMode(0);
   Sphericity_DHZfirst_noTag_18->SetBorderSize(2);
   Sphericity_DHZfirst_noTag_18->SetLeftMargin(0.15);
   Sphericity_DHZfirst_noTag_18->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_noTag_18->SetFrameBorderMode(0);
   Sphericity_DHZfirst_noTag_18->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_noTag_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_noTag_Sphericity__87 = new TH1D("VH_DHZfirst_noTag_Sphericity__87","",25,0,1);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(1,2.57003);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(2,2.381883);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(3,1.301387);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(4,0.9021454);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(5,0.5344752);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(6,0.2247106);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(7,0.07245186);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(8,0.01292463);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(9,0.01420831);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(10,0.001605625);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(12,0.000966368);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(1,0.0982419);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(2,0.0923993);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(3,0.06749351);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(4,0.0532689);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(5,0.04140653);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(6,0.02704576);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(7,0.01809244);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(8,0.005440516);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(9,0.007475892);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(10,0.001605625);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(12,0.000966368);
   VH_DHZfirst_noTag_Sphericity__87->SetEntries(2747);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_noTag_Sphericity__87->SetLineColor(ci);
   VH_DHZfirst_noTag_Sphericity__87->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_noTag_Sphericity__87->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_noTag_Sphericity__87->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_noTag_Sphericity__87->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_noTag_Sphericity__87->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_noTag_Sphericity__87->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_noTag_Sphericity__87->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_noTag_Sphericity__87->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_noTag_Sphericity__87->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_noTag_Sphericity__87->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_noTag_Sphericity__87->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_noTag_Sphericity__87->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_noTag_Sphericity__87->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_noTag_Sphericity__87->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_noTag_Sphericity__87->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_DHZfirst_noTag_18->Modified();
   Sphericity_DHZfirst_noTag_18->cd();
   Sphericity_DHZfirst_noTag_18->SetSelected(Sphericity_DHZfirst_noTag_18);
}
