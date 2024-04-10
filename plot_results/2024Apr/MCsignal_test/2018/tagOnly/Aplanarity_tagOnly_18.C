#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_18()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_18/Aplanarity_tagOnly_18
//=========  (Tue Apr  9 15:53:52 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagOnly_18 = new TCanvas("Aplanarity_tagOnly_18", "Aplanarity_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tagOnly_18->SetHighLightColor(2);
   Aplanarity_tagOnly_18->Range(-0.2,-0.13125,1.133333,1.18125);
   Aplanarity_tagOnly_18->SetFillColor(0);
   Aplanarity_tagOnly_18->SetFillStyle(4000);
   Aplanarity_tagOnly_18->SetBorderMode(0);
   Aplanarity_tagOnly_18->SetBorderSize(2);
   Aplanarity_tagOnly_18->SetLeftMargin(0.15);
   Aplanarity_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_18->SetFrameBorderMode(0);
   Aplanarity_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__40 = new TH1D("VH_tagOnly_Aplanarity__40","",50,0,1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__40->SetLineColor(ci);
   VH_tagOnly_Aplanarity__40->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__40->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__40->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__40->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__40->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__40->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__40->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__40->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__40->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__40->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__40->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__40->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__40->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__40->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__40->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tagOnly_18->Modified();
   Aplanarity_tagOnly_18->cd();
   Aplanarity_tagOnly_18->SetSelected(Aplanarity_tagOnly_18);
}
