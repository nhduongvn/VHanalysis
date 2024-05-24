#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_ZZ_DHZfirst_16_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_ZZ_DHZfirst_16/H_jetmass_noJEC_ZZ_DHZfirst_16
//=========  (Thu May 23 20:48:53 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_noJEC_ZZ_DHZfirst_16 = new TCanvas("H_jetmass_noJEC_ZZ_DHZfirst_16", "H_jetmass_noJEC_ZZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_ZZ_DHZfirst_16->SetHighLightColor(2);
   H_jetmass_noJEC_ZZ_DHZfirst_16->Range(-60,-1.309531,340,1.120142);
   H_jetmass_noJEC_ZZ_DHZfirst_16->SetFillColor(0);
   H_jetmass_noJEC_ZZ_DHZfirst_16->SetFillStyle(4000);
   H_jetmass_noJEC_ZZ_DHZfirst_16->SetBorderMode(0);
   H_jetmass_noJEC_ZZ_DHZfirst_16->SetBorderSize(2);
   H_jetmass_noJEC_ZZ_DHZfirst_16->SetLogy();
   H_jetmass_noJEC_ZZ_DHZfirst_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   H_jetmass_noJEC_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   H_jetmass_noJEC_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_jetmass_noJEC__2008 = new TH1D("VH_DHZfirst_H_jetmass_noJEC__2008","",150,0,300);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(4,0.1715797);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(5,1.530695);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(6,2.923665);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(7,3.444556);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(8,3.977641);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(9,3.206197);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(10,3.413122);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(11,2.941453);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(12,2.713962);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(13,1.322337);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(14,0.6571553);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(15,0.9171885);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(16,1.012362);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(17,0.5190705);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(18,0.4103552);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(19,0.2431546);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(20,0.2827507);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(21,0.1773787);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinContent(38,0.3214725);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(4,0.1715797);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(5,0.5443589);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(6,0.7070594);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(7,0.8536412);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(8,0.8946234);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(9,0.7963873);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(10,0.8422721);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(11,0.7654364);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(12,0.791523);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(13,0.5115151);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(14,0.3880927);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(15,0.4254055);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(16,0.4545987);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(17,0.3070495);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(18,0.290176);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(19,0.2431546);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(20,0.2827507);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(21,0.1773787);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetBinError(38,0.3214725);
   VH_DHZfirst_H_jetmass_noJEC__2008->SetEntries(155);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_jetmass_noJEC__2008->SetLineColor(ci);
   VH_DHZfirst_H_jetmass_noJEC__2008->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VH_DHZfirst_H_jetmass_noJEC__2008->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_H_jetmass_noJEC__2008->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2008->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_noJEC__2008->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2008->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_H_jetmass_noJEC__2008->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2008->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_jetmass_noJEC__2008->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_jetmass_noJEC__2008->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_jetmass_noJEC__2008->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2008->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2008->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_noJEC__2008->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2008->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_ZZ_DHZfirst_16->Modified();
   H_jetmass_noJEC_ZZ_DHZfirst_16->cd();
   H_jetmass_noJEC_ZZ_DHZfirst_16->SetSelected(H_jetmass_noJEC_ZZ_DHZfirst_16);
}
