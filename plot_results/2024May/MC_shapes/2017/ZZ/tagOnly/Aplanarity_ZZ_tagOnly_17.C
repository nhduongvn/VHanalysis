#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_tagOnly_17()
{
//=========Macro generated from canvas: Aplanarity_ZZ_tagOnly_17/Aplanarity_ZZ_tagOnly_17
//=========  (Fri May 24 12:42:22 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_tagOnly_17 = new TCanvas("Aplanarity_ZZ_tagOnly_17", "Aplanarity_ZZ_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_tagOnly_17->SetHighLightColor(2);
   Aplanarity_ZZ_tagOnly_17->Range(-0.2,-13.21473,1.133333,118.9326);
   Aplanarity_ZZ_tagOnly_17->SetFillColor(0);
   Aplanarity_ZZ_tagOnly_17->SetFillStyle(4000);
   Aplanarity_ZZ_tagOnly_17->SetBorderMode(0);
   Aplanarity_ZZ_tagOnly_17->SetBorderSize(2);
   Aplanarity_ZZ_tagOnly_17->SetLeftMargin(0.15);
   Aplanarity_ZZ_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagOnly_17->SetFrameBorderMode(0);
   Aplanarity_ZZ_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1199 = new TH1D("VH_tagOnly_Aplanarity__1199","",50,0,1);
   VH_tagOnly_Aplanarity__1199->SetBinContent(1,100.6837);
   VH_tagOnly_Aplanarity__1199->SetBinContent(2,10.20436);
   VH_tagOnly_Aplanarity__1199->SetBinContent(3,4.077401);
   VH_tagOnly_Aplanarity__1199->SetBinContent(4,0.7375593);
   VH_tagOnly_Aplanarity__1199->SetBinError(1,6.01084);
   VH_tagOnly_Aplanarity__1199->SetBinError(2,1.779815);
   VH_tagOnly_Aplanarity__1199->SetBinError(3,1.340036);
   VH_tagOnly_Aplanarity__1199->SetBinError(4,0.4480842);
   VH_tagOnly_Aplanarity__1199->SetEntries(445);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1199->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1199->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1199->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1199->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1199->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1199->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1199->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1199->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1199->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1199->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1199->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1199->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1199->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1199->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1199->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1199->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_tagOnly_17->Modified();
   Aplanarity_ZZ_tagOnly_17->cd();
   Aplanarity_ZZ_tagOnly_17->SetSelected(Aplanarity_ZZ_tagOnly_17);
}
