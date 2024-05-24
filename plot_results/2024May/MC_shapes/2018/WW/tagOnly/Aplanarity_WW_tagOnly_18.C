#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_tagOnly_18()
{
//=========Macro generated from canvas: Aplanarity_WW_tagOnly_18/Aplanarity_WW_tagOnly_18
//=========  (Fri May 24 12:42:22 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_tagOnly_18 = new TCanvas("Aplanarity_WW_tagOnly_18", "Aplanarity_WW_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_tagOnly_18->SetHighLightColor(2);
   Aplanarity_WW_tagOnly_18->Range(-0.2,-12.23339,1.133333,110.1005);
   Aplanarity_WW_tagOnly_18->SetFillColor(0);
   Aplanarity_WW_tagOnly_18->SetFillStyle(4000);
   Aplanarity_WW_tagOnly_18->SetBorderMode(0);
   Aplanarity_WW_tagOnly_18->SetBorderSize(2);
   Aplanarity_WW_tagOnly_18->SetLeftMargin(0.15);
   Aplanarity_WW_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_WW_tagOnly_18->SetFrameBorderMode(0);
   Aplanarity_WW_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_WW_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1194 = new TH1D("VH_tagOnly_Aplanarity__1194","",50,0,1);
   VH_tagOnly_Aplanarity__1194->SetBinContent(1,93.20679);
   VH_tagOnly_Aplanarity__1194->SetBinContent(2,8.871872);
   VH_tagOnly_Aplanarity__1194->SetBinContent(3,2.724934);
   VH_tagOnly_Aplanarity__1194->SetBinContent(5,2.841078);
   VH_tagOnly_Aplanarity__1194->SetBinContent(7,0.5430295);
   VH_tagOnly_Aplanarity__1194->SetBinError(1,9.371381);
   VH_tagOnly_Aplanarity__1194->SetBinError(2,2.608971);
   VH_tagOnly_Aplanarity__1194->SetBinError(3,1.679032);
   VH_tagOnly_Aplanarity__1194->SetBinError(5,2.098525);
   VH_tagOnly_Aplanarity__1194->SetBinError(7,0.5430295);
   VH_tagOnly_Aplanarity__1194->SetEntries(144);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1194->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1194->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1194->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1194->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1194->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1194->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1194->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1194->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1194->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1194->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1194->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1194->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1194->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1194->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1194->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1194->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_tagOnly_18->Modified();
   Aplanarity_WW_tagOnly_18->cd();
   Aplanarity_WW_tagOnly_18->SetSelected(Aplanarity_WW_tagOnly_18);
}
