#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHbb_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: Aplanarity_ZHbb_tagOnly_2b1c_18/Aplanarity_ZHbb_tagOnly_2b1c_18
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHbb_tagOnly_2b1c_18 = new TCanvas("Aplanarity_ZHbb_tagOnly_2b1c_18", "Aplanarity_ZHbb_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHbb_tagOnly_2b1c_18->SetHighLightColor(2);
   Aplanarity_ZHbb_tagOnly_2b1c_18->Range(-0.2,-58.59093,1.133333,527.3183);
   Aplanarity_ZHbb_tagOnly_2b1c_18->SetFillColor(0);
   Aplanarity_ZHbb_tagOnly_2b1c_18->SetFillStyle(4000);
   Aplanarity_ZHbb_tagOnly_2b1c_18->SetBorderMode(0);
   Aplanarity_ZHbb_tagOnly_2b1c_18->SetBorderSize(2);
   Aplanarity_ZHbb_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_ZHbb_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_ZHbb_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3336 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3336","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(1,446.4071);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(2,44.36184);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(3,9.842264);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(4,3.204941);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(5,1.38433);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(6,0.6205572);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(7,0.3634477);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(8,0.1995633);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(9,0.09246323);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(10,0.08499463);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(11,0.07508876);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(12,0.02150969);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(13,0.01740843);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(14,0.01813778);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(15,0.004718425);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(16,0.006983139);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(17,0.001011005);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(18,0.0026845);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(19,0.0007295109);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinContent(21,0.0006013037);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(1,1.259453);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(2,0.3602719);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(3,0.1704611);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(4,0.125175);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(5,0.06185789);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(6,0.04290582);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(7,0.03054984);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(8,0.02587651);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(9,0.01180789);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(10,0.01457143);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(11,0.02015552);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(12,0.004815543);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(13,0.005073498);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(14,0.007567694);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(15,0.00419115);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(16,0.003901597);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(17,0.0007199697);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(18,0.002197769);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(19,0.0007295109);
   VH_tagOnly_2b1c_Aplanarity__3336->SetBinError(21,0.0006013037);
   VH_tagOnly_2b1c_Aplanarity__3336->SetEntries(454994);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3336->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3336->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3336->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3336->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3336->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3336->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3336->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3336->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3336->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3336->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3336->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3336->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3336->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3336->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3336->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3336->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHbb_tagOnly_2b1c_18->Modified();
   Aplanarity_ZHbb_tagOnly_2b1c_18->cd();
   Aplanarity_ZHbb_tagOnly_2b1c_18->SetSelected(Aplanarity_ZHbb_tagOnly_2b1c_18);
}
