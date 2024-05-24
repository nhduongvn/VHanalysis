#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: Aplanarity_WZ_tagFirst_2b1c_17/Aplanarity_WZ_tagFirst_2b1c_17
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_tagFirst_2b1c_17 = new TCanvas("Aplanarity_WZ_tagFirst_2b1c_17", "Aplanarity_WZ_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_tagFirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_WZ_tagFirst_2b1c_17->Range(-0.2,-36.95157,1.133333,332.5641);
   Aplanarity_WZ_tagFirst_2b1c_17->SetFillColor(0);
   Aplanarity_WZ_tagFirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_WZ_tagFirst_2b1c_17->SetBorderMode(0);
   Aplanarity_WZ_tagFirst_2b1c_17->SetBorderSize(2);
   Aplanarity_WZ_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_WZ_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_WZ_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2636 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2636","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinContent(1,281.5357);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinContent(2,26.92324);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinContent(3,6.43359);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinContent(4,1.362444);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinContent(5,0.7707585);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinContent(6,0.8895299);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinContent(7,0.2444762);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinContent(8,0.3216738);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinContent(11,0.5424682);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinError(1,9.298492);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinError(2,2.622876);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinError(3,1.347563);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinError(4,0.5579645);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinError(5,0.3954588);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinError(6,0.617287);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinError(7,0.2444762);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinError(8,0.2340951);
   VH_tagFirst_2b1c_Aplanarity__2636->SetBinError(11,0.5424682);
   VH_tagFirst_2b1c_Aplanarity__2636->SetEntries(1369);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2636->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2636->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2636->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2636->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2636->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2636->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2636->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2636->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2636->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2636->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2636->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2636->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2636->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2636->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2636->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2636->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_tagFirst_2b1c_17->Modified();
   Aplanarity_WZ_tagFirst_2b1c_17->cd();
   Aplanarity_WZ_tagFirst_2b1c_17->SetSelected(Aplanarity_WZ_tagFirst_2b1c_17);
}
