#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_tagFirst_16()
{
//=========Macro generated from canvas: Aplanarity_ZZ_tagFirst_16/Aplanarity_ZZ_tagFirst_16
//=========  (Fri May 24 12:42:12 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_tagFirst_16 = new TCanvas("Aplanarity_ZZ_tagFirst_16", "Aplanarity_ZZ_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_tagFirst_16->SetHighLightColor(2);
   Aplanarity_ZZ_tagFirst_16->Range(-0.2,-19.59388,1.133333,176.3449);
   Aplanarity_ZZ_tagFirst_16->SetFillColor(0);
   Aplanarity_ZZ_tagFirst_16->SetFillStyle(4000);
   Aplanarity_ZZ_tagFirst_16->SetBorderMode(0);
   Aplanarity_ZZ_tagFirst_16->SetBorderSize(2);
   Aplanarity_ZZ_tagFirst_16->SetLeftMargin(0.15);
   Aplanarity_ZZ_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagFirst_16->SetFrameBorderMode(0);
   Aplanarity_ZZ_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__478 = new TH1D("VH_tagFirst_Aplanarity__478","",50,0,1);
   VH_tagFirst_Aplanarity__478->SetBinContent(1,149.2867);
   VH_tagFirst_Aplanarity__478->SetBinContent(2,18.47092);
   VH_tagFirst_Aplanarity__478->SetBinContent(3,3.906129);
   VH_tagFirst_Aplanarity__478->SetBinContent(4,1.237765);
   VH_tagFirst_Aplanarity__478->SetBinContent(5,1.257059);
   VH_tagFirst_Aplanarity__478->SetBinContent(6,0.6878721);
   VH_tagFirst_Aplanarity__478->SetBinContent(8,0.2290902);
   VH_tagFirst_Aplanarity__478->SetBinError(1,5.624402);
   VH_tagFirst_Aplanarity__478->SetBinError(2,1.979813);
   VH_tagFirst_Aplanarity__478->SetBinError(3,0.9058488);
   VH_tagFirst_Aplanarity__478->SetBinError(4,0.5120562);
   VH_tagFirst_Aplanarity__478->SetBinError(5,0.5262113);
   VH_tagFirst_Aplanarity__478->SetBinError(6,0.3518065);
   VH_tagFirst_Aplanarity__478->SetBinError(8,0.2290902);
   VH_tagFirst_Aplanarity__478->SetEntries(868);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__478->SetLineColor(ci);
   VH_tagFirst_Aplanarity__478->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__478->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__478->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__478->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__478->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__478->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__478->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__478->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__478->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__478->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__478->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__478->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__478->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__478->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__478->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_tagFirst_16->Modified();
   Aplanarity_ZZ_tagFirst_16->cd();
   Aplanarity_ZZ_tagFirst_16->SetSelected(Aplanarity_ZZ_tagFirst_16);
}
