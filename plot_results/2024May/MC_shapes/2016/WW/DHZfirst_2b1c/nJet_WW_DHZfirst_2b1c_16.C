#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_WW_DHZfirst_2b1c_16()
{
//=========Macro generated from canvas: nJet_WW_DHZfirst_2b1c_16/nJet_WW_DHZfirst_2b1c_16
//=========  (Fri May 24 12:34:43 2024) by ROOT version 6.28/10
   TCanvas *nJet_WW_DHZfirst_2b1c_16 = new TCanvas("nJet_WW_DHZfirst_2b1c_16", "nJet_WW_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_WW_DHZfirst_2b1c_16->SetHighLightColor(2);
   nJet_WW_DHZfirst_2b1c_16->Range(-3.3,-860249.1,15.36667,7742241);
   nJet_WW_DHZfirst_2b1c_16->SetFillColor(0);
   nJet_WW_DHZfirst_2b1c_16->SetFillStyle(4000);
   nJet_WW_DHZfirst_2b1c_16->SetBorderMode(0);
   nJet_WW_DHZfirst_2b1c_16->SetBorderSize(2);
   nJet_WW_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   nJet_WW_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   nJet_WW_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   nJet_WW_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   nJet_WW_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__8242 = new TH1D("Jets_cut_nJet__8242","",14,-0.5,13.5);
   Jets_cut_nJet__8242->SetBinContent(1,6554278);
   Jets_cut_nJet__8242->SetBinContent(2,4011144);
   Jets_cut_nJet__8242->SetBinContent(3,1422459);
   Jets_cut_nJet__8242->SetBinContent(4,212961.1);
   Jets_cut_nJet__8242->SetBinContent(5,52105.19);
   Jets_cut_nJet__8242->SetBinContent(6,11634.14);
   Jets_cut_nJet__8242->SetBinContent(7,2216.27);
   Jets_cut_nJet__8242->SetBinContent(8,363.8926);
   Jets_cut_nJet__8242->SetBinContent(9,60.34514);
   Jets_cut_nJet__8242->SetBinContent(10,6.514718);
   Jets_cut_nJet__8242->SetBinContent(11,0.8591595);
   Jets_cut_nJet__8242->SetBinError(1,2015.843);
   Jets_cut_nJet__8242->SetBinError(2,1596.873);
   Jets_cut_nJet__8242->SetBinError(3,888.3126);
   Jets_cut_nJet__8242->SetBinError(4,224.9803);
   Jets_cut_nJet__8242->SetBinError(5,73.75197);
   Jets_cut_nJet__8242->SetBinError(6,35.95035);
   Jets_cut_nJet__8242->SetBinError(7,16.13517);
   Jets_cut_nJet__8242->SetBinError(8,6.685148);
   Jets_cut_nJet__8242->SetBinError(9,2.79029);
   Jets_cut_nJet__8242->SetBinError(10,0.9580408);
   Jets_cut_nJet__8242->SetBinError(11,0.3296561);
   Jets_cut_nJet__8242->SetEntries(3.168e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__8242->SetLineColor(ci);
   Jets_cut_nJet__8242->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__8242->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__8242->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__8242->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__8242->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__8242->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__8242->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__8242->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__8242->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__8242->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__8242->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__8242->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__8242->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__8242->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__8242->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_WW_DHZfirst_2b1c_16->Modified();
   nJet_WW_DHZfirst_2b1c_16->cd();
   nJet_WW_DHZfirst_2b1c_16->SetSelected(nJet_WW_DHZfirst_2b1c_16);
}
