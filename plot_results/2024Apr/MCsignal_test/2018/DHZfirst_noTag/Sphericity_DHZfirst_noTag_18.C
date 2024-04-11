#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_noTag_18()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_noTag_18/Sphericity_DHZfirst_noTag_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_noTag_18 = new TCanvas("Sphericity_DHZfirst_noTag_18", "Sphericity_DHZfirst_noTag_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_DHZfirst_noTag_18->SetHighLightColor(2);
   Sphericity_DHZfirst_noTag_18->Range(-0.2,-917491.3,1.133333,8257421);
   Sphericity_DHZfirst_noTag_18->SetFillColor(0);
   Sphericity_DHZfirst_noTag_18->SetFillStyle(4000);
   Sphericity_DHZfirst_noTag_18->SetBorderMode(0);
   Sphericity_DHZfirst_noTag_18->SetBorderSize(2);
   Sphericity_DHZfirst_noTag_18->SetLeftMargin(0.15);
   Sphericity_DHZfirst_noTag_18->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_noTag_18->SetFrameBorderMode(0);
   Sphericity_DHZfirst_noTag_18->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_noTag_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_noTag_Sphericity__87 = new TH1D("VH_DHZfirst_noTag_Sphericity__87","",25,0,1);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(1,6990409);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(2,5396840);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(3,3777379);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(4,1173592);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(5,674577.9);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(6,165313.5);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(7,35332.23);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(8,24422.58);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(9,17904.21);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(10,4862.767);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(11,1334.278);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(12,2553.719);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(13,100355.8);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(14,1718.512);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(15,392.5087);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(17,318.4457);
   VH_DHZfirst_noTag_Sphericity__87->SetBinContent(19,916.7329);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(1,673113.6);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(2,554577.5);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(3,595543.3);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(4,175614.6);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(5,140497.1);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(6,30452.46);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(7,11734.58);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(8,11145.72);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(9,8981.392);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(10,2065.963);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(11,961.3221);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(12,1634.367);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(13,100115.4);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(14,1253.689);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(15,392.5087);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(17,318.4457);
   VH_DHZfirst_noTag_Sphericity__87->SetBinError(19,916.7329);
   VH_DHZfirst_noTag_Sphericity__87->SetEntries(5518);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_noTag_Sphericity__87->SetLineColor(ci);
   VH_DHZfirst_noTag_Sphericity__87->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_noTag_Sphericity__87->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_noTag_Sphericity__87->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_noTag_Sphericity__87->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_noTag_Sphericity__87->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_noTag_Sphericity__87->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_noTag_Sphericity__87->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_noTag_Sphericity__87->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_noTag_Sphericity__87->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_noTag_Sphericity__87->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_noTag_Sphericity__87->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_noTag_Sphericity__87->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_noTag_Sphericity__87->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_noTag_Sphericity__87->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_noTag_Sphericity__87->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_DHZfirst_noTag_18->Modified();
   Sphericity_DHZfirst_noTag_18->cd();
   Sphericity_DHZfirst_noTag_18->SetSelected(Sphericity_DHZfirst_noTag_18);
}
