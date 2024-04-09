#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_18()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_18/Aplanarity_DHZfirst_18
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_DHZfirst_18 = new TCanvas("Aplanarity_DHZfirst_18", "Aplanarity_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_DHZfirst_18->SetHighLightColor(2);
   Aplanarity_DHZfirst_18->Range(-0.2,-0.06017399,1.133333,0.5415659);
   Aplanarity_DHZfirst_18->SetFillColor(0);
   Aplanarity_DHZfirst_18->SetFillStyle(4000);
   Aplanarity_DHZfirst_18->SetBorderMode(0);
   Aplanarity_DHZfirst_18->SetBorderSize(2);
   Aplanarity_DHZfirst_18->SetLeftMargin(0.15);
   Aplanarity_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_18->SetFrameBorderMode(0);
   Aplanarity_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__192 = new TH1D("VH_DHZfirst_Aplanarity__192","",50,0,1);
   VH_DHZfirst_Aplanarity__192->SetBinContent(1,0.4584685);
   VH_DHZfirst_Aplanarity__192->SetBinContent(2,0.03784931);
   VH_DHZfirst_Aplanarity__192->SetBinContent(3,0.002995392);
   VH_DHZfirst_Aplanarity__192->SetBinError(1,0.04457145);
   VH_DHZfirst_Aplanarity__192->SetBinError(2,0.01157729);
   VH_DHZfirst_Aplanarity__192->SetBinError(3,0.002995392);
   VH_DHZfirst_Aplanarity__192->SetEntries(172);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__192->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__192->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__192->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__192->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__192->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__192->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__192->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__192->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__192->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__192->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__192->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__192->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__192->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__192->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__192->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__192->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_DHZfirst_18->Modified();
   Aplanarity_DHZfirst_18->cd();
   Aplanarity_DHZfirst_18->SetSelected(Aplanarity_DHZfirst_18);
}
