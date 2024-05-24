#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: Aplanarity_WZ_tagOnly_2b1c_17/Aplanarity_WZ_tagOnly_2b1c_17
//=========  (Fri May 24 12:42:56 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_tagOnly_2b1c_17 = new TCanvas("Aplanarity_WZ_tagOnly_2b1c_17", "Aplanarity_WZ_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_tagOnly_2b1c_17->SetHighLightColor(2);
   Aplanarity_WZ_tagOnly_2b1c_17->Range(-0.2,-46.33153,1.133333,416.9837);
   Aplanarity_WZ_tagOnly_2b1c_17->SetFillColor(0);
   Aplanarity_WZ_tagOnly_2b1c_17->SetFillStyle(4000);
   Aplanarity_WZ_tagOnly_2b1c_17->SetBorderMode(0);
   Aplanarity_WZ_tagOnly_2b1c_17->SetBorderSize(2);
   Aplanarity_WZ_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_WZ_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_WZ_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3356 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3356","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinContent(1,353.0021);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinContent(2,31.86665);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinContent(3,6.724193);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinContent(4,1.530253);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinContent(5,0.629681);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinContent(6,0.8384539);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinContent(8,0.1216993);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinContent(11,0.5424682);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinContent(13,0.2249653);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinError(1,10.33077);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinError(2,2.913373);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinError(3,1.382795);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinError(4,0.5826529);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinError(5,0.3213836);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinError(6,0.6151703);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinError(8,0.1216993);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinError(11,0.5424682);
   VH_tagOnly_2b1c_Aplanarity__3356->SetBinError(13,0.2249653);
   VH_tagOnly_2b1c_Aplanarity__3356->SetEntries(1706);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3356->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3356->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3356->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3356->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3356->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3356->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3356->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3356->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3356->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3356->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3356->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3356->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3356->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3356->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3356->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3356->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_tagOnly_2b1c_17->Modified();
   Aplanarity_WZ_tagOnly_2b1c_17->cd();
   Aplanarity_WZ_tagOnly_2b1c_17->SetSelected(Aplanarity_WZ_tagOnly_2b1c_17);
}
