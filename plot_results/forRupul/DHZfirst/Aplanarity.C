#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity()
{
//=========Macro generated from canvas: Aplanarity/Aplanarity
//=========  (Wed Mar 27 16:46:18 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity = new TCanvas("Aplanarity", "Aplanarity",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity->SetHighLightColor(2);
   Aplanarity->Range(-0.2,-0.06017399,1.133333,0.5415659);
   Aplanarity->SetFillColor(0);
   Aplanarity->SetFillStyle(4000);
   Aplanarity->SetBorderMode(0);
   Aplanarity->SetBorderSize(2);
   Aplanarity->SetLeftMargin(0.15);
   Aplanarity->SetFrameFillStyle(1000);
   Aplanarity->SetFrameBorderMode(0);
   Aplanarity->SetFrameFillStyle(1000);
   Aplanarity->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__64 = new TH1D("VH_DHZfirst_Aplanarity__64","",50,0,1);
   VH_DHZfirst_Aplanarity__64->SetBinContent(1,0.4584685);
   VH_DHZfirst_Aplanarity__64->SetBinContent(2,0.03784931);
   VH_DHZfirst_Aplanarity__64->SetBinContent(3,0.002995392);
   VH_DHZfirst_Aplanarity__64->SetBinError(1,0.04457145);
   VH_DHZfirst_Aplanarity__64->SetBinError(2,0.01157729);
   VH_DHZfirst_Aplanarity__64->SetBinError(3,0.002995392);
   VH_DHZfirst_Aplanarity__64->SetEntries(172);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__64->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__64->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__64->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__64->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__64->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__64->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__64->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__64->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__64->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__64->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__64->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__64->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__64->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__64->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__64->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__64->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity->Modified();
   Aplanarity->cd();
   Aplanarity->SetSelected(Aplanarity);
}
