#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHbb_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHbb_DHZfirst_18/Aplanarity_ZHbb_DHZfirst_18
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHbb_DHZfirst_18 = new TCanvas("Aplanarity_ZHbb_DHZfirst_18", "Aplanarity_ZHbb_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHbb_DHZfirst_18->SetHighLightColor(2);
   Aplanarity_ZHbb_DHZfirst_18->Range(-0.2,-2.994157,1.133333,2.229988);
   Aplanarity_ZHbb_DHZfirst_18->SetFillColor(0);
   Aplanarity_ZHbb_DHZfirst_18->SetFillStyle(4000);
   Aplanarity_ZHbb_DHZfirst_18->SetBorderMode(0);
   Aplanarity_ZHbb_DHZfirst_18->SetBorderSize(2);
   Aplanarity_ZHbb_DHZfirst_18->SetLogy();
   Aplanarity_ZHbb_DHZfirst_18->SetLeftMargin(0.15);
   Aplanarity_ZHbb_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_DHZfirst_18->SetFrameBorderMode(0);
   Aplanarity_ZHbb_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1896 = new TH1D("VH_DHZfirst_Aplanarity__1896","",50,0,1);
   VH_DHZfirst_Aplanarity__1896->SetBinContent(1,26.9169);
   VH_DHZfirst_Aplanarity__1896->SetBinContent(2,1.951019);
   VH_DHZfirst_Aplanarity__1896->SetBinContent(3,0.2781369);
   VH_DHZfirst_Aplanarity__1896->SetBinContent(4,0.05232048);
   VH_DHZfirst_Aplanarity__1896->SetBinContent(5,0.006749741);
   VH_DHZfirst_Aplanarity__1896->SetBinContent(6,0.01252519);
   VH_DHZfirst_Aplanarity__1896->SetBinContent(7,0.00725573);
   VH_DHZfirst_Aplanarity__1896->SetBinError(1,0.4096517);
   VH_DHZfirst_Aplanarity__1896->SetBinError(2,0.07860857);
   VH_DHZfirst_Aplanarity__1896->SetBinError(3,0.02827176);
   VH_DHZfirst_Aplanarity__1896->SetBinError(4,0.009891996);
   VH_DHZfirst_Aplanarity__1896->SetBinError(5,0.002804631);
   VH_DHZfirst_Aplanarity__1896->SetBinError(6,0.009524037);
   VH_DHZfirst_Aplanarity__1896->SetBinError(7,0.006341836);
   VH_DHZfirst_Aplanarity__1896->SetEntries(23598);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1896->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1896->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1896->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1896->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1896->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1896->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1896->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1896->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1896->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1896->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1896->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1896->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1896->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1896->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1896->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1896->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHbb_DHZfirst_18->Modified();
   Aplanarity_ZHbb_DHZfirst_18->cd();
   Aplanarity_ZHbb_DHZfirst_18->SetSelected(Aplanarity_ZHbb_DHZfirst_18);
}
