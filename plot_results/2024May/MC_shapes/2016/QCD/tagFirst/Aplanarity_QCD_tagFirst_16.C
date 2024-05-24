#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_tagFirst_16()
{
//=========Macro generated from canvas: Aplanarity_QCD_tagFirst_16/Aplanarity_QCD_tagFirst_16
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_tagFirst_16 = new TCanvas("Aplanarity_QCD_tagFirst_16", "Aplanarity_QCD_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_tagFirst_16->SetHighLightColor(2);
   Aplanarity_QCD_tagFirst_16->Range(-0.2,-246791.6,1.133333,2221125);
   Aplanarity_QCD_tagFirst_16->SetFillColor(0);
   Aplanarity_QCD_tagFirst_16->SetFillStyle(4000);
   Aplanarity_QCD_tagFirst_16->SetBorderMode(0);
   Aplanarity_QCD_tagFirst_16->SetBorderSize(2);
   Aplanarity_QCD_tagFirst_16->SetLeftMargin(0.15);
   Aplanarity_QCD_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagFirst_16->SetFrameBorderMode(0);
   Aplanarity_QCD_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__457 = new TH1D("VH_tagFirst_Aplanarity__457","",50,0,1);
   VH_tagFirst_Aplanarity__457->SetBinContent(1,1880317);
   VH_tagFirst_Aplanarity__457->SetBinContent(2,272469.1);
   VH_tagFirst_Aplanarity__457->SetBinContent(3,68033.44);
   VH_tagFirst_Aplanarity__457->SetBinContent(4,22244.19);
   VH_tagFirst_Aplanarity__457->SetBinContent(5,6392.637);
   VH_tagFirst_Aplanarity__457->SetBinContent(6,3389.481);
   VH_tagFirst_Aplanarity__457->SetBinContent(7,2127.881);
   VH_tagFirst_Aplanarity__457->SetBinContent(8,652.9228);
   VH_tagFirst_Aplanarity__457->SetBinContent(9,1008.572);
   VH_tagFirst_Aplanarity__457->SetBinContent(10,130.4403);
   VH_tagFirst_Aplanarity__457->SetBinContent(11,151.7716);
   VH_tagFirst_Aplanarity__457->SetBinContent(12,349.4768);
   VH_tagFirst_Aplanarity__457->SetBinContent(13,106.9383);
   VH_tagFirst_Aplanarity__457->SetBinContent(14,20.96808);
   VH_tagFirst_Aplanarity__457->SetBinContent(15,38.4539);
   VH_tagFirst_Aplanarity__457->SetBinContent(16,0.4282265);
   VH_tagFirst_Aplanarity__457->SetBinContent(17,13.62232);
   VH_tagFirst_Aplanarity__457->SetBinError(1,28767.65);
   VH_tagFirst_Aplanarity__457->SetBinError(2,17787.44);
   VH_tagFirst_Aplanarity__457->SetBinError(3,4184.91);
   VH_tagFirst_Aplanarity__457->SetBinError(4,2220.667);
   VH_tagFirst_Aplanarity__457->SetBinError(5,879.0457);
   VH_tagFirst_Aplanarity__457->SetBinError(6,643.7993);
   VH_tagFirst_Aplanarity__457->SetBinError(7,489.6477);
   VH_tagFirst_Aplanarity__457->SetBinError(8,94.3879);
   VH_tagFirst_Aplanarity__457->SetBinError(9,365.0409);
   VH_tagFirst_Aplanarity__457->SetBinError(10,39.1976);
   VH_tagFirst_Aplanarity__457->SetBinError(11,42.91245);
   VH_tagFirst_Aplanarity__457->SetBinError(12,232.6812);
   VH_tagFirst_Aplanarity__457->SetBinError(13,37.66465);
   VH_tagFirst_Aplanarity__457->SetBinError(14,13.02655);
   VH_tagFirst_Aplanarity__457->SetBinError(15,18.0459);
   VH_tagFirst_Aplanarity__457->SetBinError(16,0.4282265);
   VH_tagFirst_Aplanarity__457->SetBinError(17,9.441003);
   VH_tagFirst_Aplanarity__457->SetEntries(184957);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__457->SetLineColor(ci);
   VH_tagFirst_Aplanarity__457->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__457->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__457->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__457->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__457->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__457->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__457->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__457->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__457->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__457->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__457->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__457->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__457->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__457->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__457->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_tagFirst_16->Modified();
   Aplanarity_QCD_tagFirst_16->cd();
   Aplanarity_QCD_tagFirst_16->SetSelected(Aplanarity_QCD_tagFirst_16);
}
