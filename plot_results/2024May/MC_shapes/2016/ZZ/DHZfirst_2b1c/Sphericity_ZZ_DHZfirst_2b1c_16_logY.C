#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZZ_DHZfirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_ZZ_DHZfirst_2b1c_16/Sphericity_ZZ_DHZfirst_2b1c_16
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZZ_DHZfirst_2b1c_16 = new TCanvas("Sphericity_ZZ_DHZfirst_2b1c_16", "Sphericity_ZZ_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZZ_DHZfirst_2b1c_16->SetHighLightColor(2);
   Sphericity_ZZ_DHZfirst_2b1c_16->Range(-0.2,-1.513945,1.133333,2.312764);
   Sphericity_ZZ_DHZfirst_2b1c_16->SetFillColor(0);
   Sphericity_ZZ_DHZfirst_2b1c_16->SetFillStyle(4000);
   Sphericity_ZZ_DHZfirst_2b1c_16->SetBorderMode(0);
   Sphericity_ZZ_DHZfirst_2b1c_16->SetBorderSize(2);
   Sphericity_ZZ_DHZfirst_2b1c_16->SetLogy();
   Sphericity_ZZ_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_ZZ_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZZ_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_ZZ_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZZ_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4048 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4048","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinContent(1,44.93081);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinContent(2,34.45072);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinContent(3,22.27709);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinContent(4,12.27819);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinContent(5,10.00542);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinContent(6,3.0574);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinContent(7,1.186482);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinContent(8,0.1759759);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinContent(9,0.1478278);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinContent(14,0.2220362);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinError(1,3.034862);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinError(2,2.660599);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinError(3,2.140703);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinError(4,1.579026);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinError(5,1.443968);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinError(6,0.7977874);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinError(7,0.5372891);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinError(8,0.1759759);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinError(9,0.1478278);
   VH_DHZfirst_2b1c_Sphericity__4048->SetBinError(14,0.2220362);
   VH_DHZfirst_2b1c_Sphericity__4048->SetEntries(648);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4048->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4048->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4048->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4048->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4048->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4048->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4048->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4048->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4048->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4048->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4048->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4048->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4048->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4048->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4048->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4048->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZZ_DHZfirst_2b1c_16->Modified();
   Sphericity_ZZ_DHZfirst_2b1c_16->cd();
   Sphericity_ZZ_DHZfirst_2b1c_16->SetSelected(Sphericity_ZZ_DHZfirst_2b1c_16);
}
