#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_tagOnly_17()
{
//=========Macro generated from canvas: Aplanarity_WW_tagOnly_17/Aplanarity_WW_tagOnly_17
//=========  (Fri May 24 12:42:22 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_tagOnly_17 = new TCanvas("Aplanarity_WW_tagOnly_17", "Aplanarity_WW_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_tagOnly_17->SetHighLightColor(2);
   Aplanarity_WW_tagOnly_17->Range(-0.2,-6.448039,1.133333,58.03235);
   Aplanarity_WW_tagOnly_17->SetFillColor(0);
   Aplanarity_WW_tagOnly_17->SetFillStyle(4000);
   Aplanarity_WW_tagOnly_17->SetBorderMode(0);
   Aplanarity_WW_tagOnly_17->SetBorderSize(2);
   Aplanarity_WW_tagOnly_17->SetLeftMargin(0.15);
   Aplanarity_WW_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_WW_tagOnly_17->SetFrameBorderMode(0);
   Aplanarity_WW_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_WW_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1193 = new TH1D("VH_tagOnly_Aplanarity__1193","",50,0,1);
   VH_tagOnly_Aplanarity__1193->SetBinContent(1,49.12791);
   VH_tagOnly_Aplanarity__1193->SetBinContent(2,6.622979);
   VH_tagOnly_Aplanarity__1193->SetBinContent(3,1.678995);
   VH_tagOnly_Aplanarity__1193->SetBinContent(4,0.4299916);
   VH_tagOnly_Aplanarity__1193->SetBinContent(6,0.2611829);
   VH_tagOnly_Aplanarity__1193->SetBinContent(8,0.1686304);
   VH_tagOnly_Aplanarity__1193->SetBinError(1,4.248057);
   VH_tagOnly_Aplanarity__1193->SetBinError(2,1.618144);
   VH_tagOnly_Aplanarity__1193->SetBinError(3,0.8050669);
   VH_tagOnly_Aplanarity__1193->SetBinError(4,0.2501648);
   VH_tagOnly_Aplanarity__1193->SetBinError(6,0.2611829);
   VH_tagOnly_Aplanarity__1193->SetBinError(8,0.1686304);
   VH_tagOnly_Aplanarity__1193->SetEntries(198);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1193->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1193->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1193->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1193->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1193->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1193->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1193->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1193->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1193->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1193->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1193->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1193->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1193->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1193->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1193->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1193->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_tagOnly_17->Modified();
   Aplanarity_WW_tagOnly_17->cd();
   Aplanarity_WW_tagOnly_17->SetSelected(Aplanarity_WW_tagOnly_17);
}
