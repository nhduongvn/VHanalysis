#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: Aplanarity_ZZ_tagOnly_2b1c_17/Aplanarity_ZZ_tagOnly_2b1c_17
//=========  (Fri May 24 12:42:56 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_tagOnly_2b1c_17 = new TCanvas("Aplanarity_ZZ_tagOnly_2b1c_17", "Aplanarity_ZZ_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_tagOnly_2b1c_17->SetHighLightColor(2);
   Aplanarity_ZZ_tagOnly_2b1c_17->Range(-0.2,-36.41797,1.133333,327.7617);
   Aplanarity_ZZ_tagOnly_2b1c_17->SetFillColor(0);
   Aplanarity_ZZ_tagOnly_2b1c_17->SetFillStyle(4000);
   Aplanarity_ZZ_tagOnly_2b1c_17->SetBorderMode(0);
   Aplanarity_ZZ_tagOnly_2b1c_17->SetBorderSize(2);
   Aplanarity_ZZ_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_ZZ_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_ZZ_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3359 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3359","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3359->SetBinContent(1,277.4702);
   VH_tagOnly_2b1c_Aplanarity__3359->SetBinContent(2,26.90837);
   VH_tagOnly_2b1c_Aplanarity__3359->SetBinContent(3,9.898442);
   VH_tagOnly_2b1c_Aplanarity__3359->SetBinContent(4,1.675657);
   VH_tagOnly_2b1c_Aplanarity__3359->SetBinContent(5,0.5171474);
   VH_tagOnly_2b1c_Aplanarity__3359->SetBinContent(6,0.1472719);
   VH_tagOnly_2b1c_Aplanarity__3359->SetBinContent(7,0.1832859);
   VH_tagOnly_2b1c_Aplanarity__3359->SetBinError(1,9.812902);
   VH_tagOnly_2b1c_Aplanarity__3359->SetBinError(2,3.030447);
   VH_tagOnly_2b1c_Aplanarity__3359->SetBinError(3,2.176198);
   VH_tagOnly_2b1c_Aplanarity__3359->SetBinError(4,0.9136895);
   VH_tagOnly_2b1c_Aplanarity__3359->SetBinError(5,0.299627);
   VH_tagOnly_2b1c_Aplanarity__3359->SetBinError(6,0.1472719);
   VH_tagOnly_2b1c_Aplanarity__3359->SetBinError(7,0.1832859);
   VH_tagOnly_2b1c_Aplanarity__3359->SetEntries(1231);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3359->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3359->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3359->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3359->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3359->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3359->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3359->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3359->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3359->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3359->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3359->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3359->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3359->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3359->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3359->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3359->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_tagOnly_2b1c_17->Modified();
   Aplanarity_ZZ_tagOnly_2b1c_17->cd();
   Aplanarity_ZZ_tagOnly_2b1c_17->SetSelected(Aplanarity_ZZ_tagOnly_2b1c_17);
}
