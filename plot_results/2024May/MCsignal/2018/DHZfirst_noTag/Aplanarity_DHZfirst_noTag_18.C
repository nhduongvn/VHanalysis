#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_noTag_18()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_noTag_18/Aplanarity_DHZfirst_noTag_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_DHZfirst_noTag_18 = new TCanvas("Aplanarity_DHZfirst_noTag_18", "Aplanarity_DHZfirst_noTag_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_DHZfirst_noTag_18->SetHighLightColor(2);
   Aplanarity_DHZfirst_noTag_18->Range(-0.2,-0.9405922,1.133333,8.46533);
   Aplanarity_DHZfirst_noTag_18->SetFillColor(0);
   Aplanarity_DHZfirst_noTag_18->SetFillStyle(4000);
   Aplanarity_DHZfirst_noTag_18->SetBorderMode(0);
   Aplanarity_DHZfirst_noTag_18->SetBorderSize(2);
   Aplanarity_DHZfirst_noTag_18->SetLeftMargin(0.15);
   Aplanarity_DHZfirst_noTag_18->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_noTag_18->SetFrameBorderMode(0);
   Aplanarity_DHZfirst_noTag_18->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_noTag_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_noTag_Aplanarity__88 = new TH1D("VH_DHZfirst_noTag_Aplanarity__88","",50,0,1);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinContent(1,7.166417);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinContent(2,0.6270086);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinContent(3,0.1537944);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinContent(4,0.05652574);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinContent(5,0.009680109);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinContent(7,0.003362647);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinError(1,0.1599169);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinError(2,0.04545156);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinError(3,0.0239672);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinError(4,0.01395978);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinError(5,0.004949376);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinError(7,0.003362647);
   VH_DHZfirst_noTag_Aplanarity__88->SetEntries(2747);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_noTag_Aplanarity__88->SetLineColor(ci);
   VH_DHZfirst_noTag_Aplanarity__88->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_noTag_Aplanarity__88->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_noTag_Aplanarity__88->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_noTag_Aplanarity__88->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_noTag_Aplanarity__88->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_noTag_Aplanarity__88->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_noTag_Aplanarity__88->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_noTag_Aplanarity__88->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_noTag_Aplanarity__88->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_noTag_Aplanarity__88->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_noTag_Aplanarity__88->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_noTag_Aplanarity__88->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_noTag_Aplanarity__88->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_noTag_Aplanarity__88->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_noTag_Aplanarity__88->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_DHZfirst_noTag_18->Modified();
   Aplanarity_DHZfirst_noTag_18->cd();
   Aplanarity_DHZfirst_noTag_18->SetSelected(Aplanarity_DHZfirst_noTag_18);
}
