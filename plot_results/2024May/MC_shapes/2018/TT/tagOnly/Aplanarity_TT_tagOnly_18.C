#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_TT_tagOnly_18()
{
//=========Macro generated from canvas: Aplanarity_TT_tagOnly_18/Aplanarity_TT_tagOnly_18
//=========  (Fri May 24 12:42:22 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_TT_tagOnly_18 = new TCanvas("Aplanarity_TT_tagOnly_18", "Aplanarity_TT_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_TT_tagOnly_18->SetHighLightColor(2);
   Aplanarity_TT_tagOnly_18->Range(-0.2,-67196.14,1.133333,604765.3);
   Aplanarity_TT_tagOnly_18->SetFillColor(0);
   Aplanarity_TT_tagOnly_18->SetFillStyle(4000);
   Aplanarity_TT_tagOnly_18->SetBorderMode(0);
   Aplanarity_TT_tagOnly_18->SetBorderSize(2);
   Aplanarity_TT_tagOnly_18->SetLeftMargin(0.15);
   Aplanarity_TT_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_TT_tagOnly_18->SetFrameBorderMode(0);
   Aplanarity_TT_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_TT_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1188 = new TH1D("VH_tagOnly_Aplanarity__1188","",50,0,1);
   VH_tagOnly_Aplanarity__1188->SetBinContent(1,511970.6);
   VH_tagOnly_Aplanarity__1188->SetBinContent(2,68244.69);
   VH_tagOnly_Aplanarity__1188->SetBinContent(3,17804.97);
   VH_tagOnly_Aplanarity__1188->SetBinContent(4,6355.541);
   VH_tagOnly_Aplanarity__1188->SetBinContent(5,2961.665);
   VH_tagOnly_Aplanarity__1188->SetBinContent(6,1474.578);
   VH_tagOnly_Aplanarity__1188->SetBinContent(7,844.9801);
   VH_tagOnly_Aplanarity__1188->SetBinContent(8,484.0105);
   VH_tagOnly_Aplanarity__1188->SetBinContent(9,284.4228);
   VH_tagOnly_Aplanarity__1188->SetBinContent(10,197.19);
   VH_tagOnly_Aplanarity__1188->SetBinContent(11,122.7156);
   VH_tagOnly_Aplanarity__1188->SetBinContent(12,76.48472);
   VH_tagOnly_Aplanarity__1188->SetBinContent(13,45.69938);
   VH_tagOnly_Aplanarity__1188->SetBinContent(14,31.68113);
   VH_tagOnly_Aplanarity__1188->SetBinContent(15,19.31497);
   VH_tagOnly_Aplanarity__1188->SetBinContent(16,9.117618);
   VH_tagOnly_Aplanarity__1188->SetBinContent(17,9.235495);
   VH_tagOnly_Aplanarity__1188->SetBinContent(18,2.97319);
   VH_tagOnly_Aplanarity__1188->SetBinContent(19,1.689457);
   VH_tagOnly_Aplanarity__1188->SetBinContent(20,0.1694584);
   VH_tagOnly_Aplanarity__1188->SetBinContent(21,1.067082);
   VH_tagOnly_Aplanarity__1188->SetBinError(1,318.0174);
   VH_tagOnly_Aplanarity__1188->SetBinError(2,115.7274);
   VH_tagOnly_Aplanarity__1188->SetBinError(3,60.77717);
   VH_tagOnly_Aplanarity__1188->SetBinError(4,35.08881);
   VH_tagOnly_Aplanarity__1188->SetBinError(5,26.76014);
   VH_tagOnly_Aplanarity__1188->SetBinError(6,16.65214);
   VH_tagOnly_Aplanarity__1188->SetBinError(7,13.21232);
   VH_tagOnly_Aplanarity__1188->SetBinError(8,9.527443);
   VH_tagOnly_Aplanarity__1188->SetBinError(9,7.341995);
   VH_tagOnly_Aplanarity__1188->SetBinError(10,6.212126);
   VH_tagOnly_Aplanarity__1188->SetBinError(11,4.821193);
   VH_tagOnly_Aplanarity__1188->SetBinError(12,3.61759);
   VH_tagOnly_Aplanarity__1188->SetBinError(13,2.807311);
   VH_tagOnly_Aplanarity__1188->SetBinError(14,4.213389);
   VH_tagOnly_Aplanarity__1188->SetBinError(15,1.995827);
   VH_tagOnly_Aplanarity__1188->SetBinError(16,1.238781);
   VH_tagOnly_Aplanarity__1188->SetBinError(17,2.855522);
   VH_tagOnly_Aplanarity__1188->SetBinError(18,0.5950303);
   VH_tagOnly_Aplanarity__1188->SetBinError(19,0.4522526);
   VH_tagOnly_Aplanarity__1188->SetBinError(20,0.1206142);
   VH_tagOnly_Aplanarity__1188->SetBinError(21,0.5579123);
   VH_tagOnly_Aplanarity__1188->SetEntries(5043348);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1188->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1188->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1188->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1188->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1188->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1188->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1188->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1188->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1188->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1188->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1188->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1188->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1188->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1188->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1188->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1188->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_TT_tagOnly_18->Modified();
   Aplanarity_TT_tagOnly_18->cd();
   Aplanarity_TT_tagOnly_18->SetSelected(Aplanarity_TT_tagOnly_18);
}
