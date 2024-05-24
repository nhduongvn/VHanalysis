#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_DHZfirst_2b1c_18/Aplanarity_ZHcc_DHZfirst_2b1c_18
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_DHZfirst_2b1c_18 = new TCanvas("Aplanarity_ZHcc_DHZfirst_2b1c_18", "Aplanarity_ZHcc_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_DHZfirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_ZHcc_DHZfirst_2b1c_18->Range(-0.2,-0.2343793,1.133333,2.109414);
   Aplanarity_ZHcc_DHZfirst_2b1c_18->SetFillColor(0);
   Aplanarity_ZHcc_DHZfirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_ZHcc_DHZfirst_2b1c_18->SetBorderMode(0);
   Aplanarity_ZHcc_DHZfirst_2b1c_18->SetBorderSize(2);
   Aplanarity_ZHcc_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_ZHcc_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_ZHcc_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4053 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4053","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4053->SetBinContent(1,1.785747);
   VH_DHZfirst_2b1c_Aplanarity__4053->SetBinContent(2,0.1422911);
   VH_DHZfirst_2b1c_Aplanarity__4053->SetBinContent(3,0.03137096);
   VH_DHZfirst_2b1c_Aplanarity__4053->SetBinContent(4,0.0008475656);
   VH_DHZfirst_2b1c_Aplanarity__4053->SetBinContent(5,0.002825103);
   VH_DHZfirst_2b1c_Aplanarity__4053->SetBinError(1,0.06320356);
   VH_DHZfirst_2b1c_Aplanarity__4053->SetBinError(2,0.0189777);
   VH_DHZfirst_2b1c_Aplanarity__4053->SetBinError(3,0.01197998);
   VH_DHZfirst_2b1c_Aplanarity__4053->SetBinError(4,0.000614312);
   VH_DHZfirst_2b1c_Aplanarity__4053->SetBinError(5,0.002246578);
   VH_DHZfirst_2b1c_Aplanarity__4053->SetEntries(2033);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4053->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4053->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4053->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4053->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4053->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4053->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4053->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4053->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4053->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4053->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4053->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4053->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4053->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4053->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4053->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4053->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_DHZfirst_2b1c_18->Modified();
   Aplanarity_ZHcc_DHZfirst_2b1c_18->cd();
   Aplanarity_ZHcc_DHZfirst_2b1c_18->SetSelected(Aplanarity_ZHcc_DHZfirst_2b1c_18);
}
