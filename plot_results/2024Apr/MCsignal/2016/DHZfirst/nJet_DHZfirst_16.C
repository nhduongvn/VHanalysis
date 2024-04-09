#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_DHZfirst_16()
{
//=========Macro generated from canvas: nJet_DHZfirst_16/nJet_DHZfirst_16
//=========  (Mon Apr  8 11:27:55 2024) by ROOT version 6.28/10
   TCanvas *nJet_DHZfirst_16 = new TCanvas("nJet_DHZfirst_16", "nJet_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_DHZfirst_16->SetHighLightColor(2);
   nJet_DHZfirst_16->Range(-3.3,-39.50879,15.36667,355.5791);
   nJet_DHZfirst_16->SetFillColor(0);
   nJet_DHZfirst_16->SetFillStyle(4000);
   nJet_DHZfirst_16->SetBorderMode(0);
   nJet_DHZfirst_16->SetBorderSize(2);
   nJet_DHZfirst_16->SetLeftMargin(0.15);
   nJet_DHZfirst_16->SetFrameFillStyle(1000);
   nJet_DHZfirst_16->SetFrameBorderMode(0);
   nJet_DHZfirst_16->SetFrameFillStyle(1000);
   nJet_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__373 = new TH1D("Jets_cut_nJet__373","",14,-0.5,13.5);
   Jets_cut_nJet__373->SetBinContent(1,271.0888);
   Jets_cut_nJet__373->SetBinContent(2,301.0194);
   Jets_cut_nJet__373->SetBinContent(3,283.8483);
   Jets_cut_nJet__373->SetBinContent(4,109.4574);
   Jets_cut_nJet__373->SetBinContent(5,44.52518);
   Jets_cut_nJet__373->SetBinContent(6,12.86797);
   Jets_cut_nJet__373->SetBinContent(7,3.489751);
   Jets_cut_nJet__373->SetBinContent(8,0.9962411);
   Jets_cut_nJet__373->SetBinContent(9,0.1600239);
   Jets_cut_nJet__373->SetBinContent(10,0.06579266);
   Jets_cut_nJet__373->SetBinContent(11,0.01109481);
   Jets_cut_nJet__373->SetBinError(1,1.792902);
   Jets_cut_nJet__373->SetBinError(2,1.840853);
   Jets_cut_nJet__373->SetBinError(3,1.594867);
   Jets_cut_nJet__373->SetBinError(4,0.6352418);
   Jets_cut_nJet__373->SetBinError(5,0.2930943);
   Jets_cut_nJet__373->SetBinError(6,0.1626298);
   Jets_cut_nJet__373->SetBinError(7,0.08713152);
   Jets_cut_nJet__373->SetBinError(8,0.04732135);
   Jets_cut_nJet__373->SetBinError(9,0.01913388);
   Jets_cut_nJet__373->SetBinError(10,0.01251299);
   Jets_cut_nJet__373->SetBinError(11,0.004974486);
   Jets_cut_nJet__373->SetEntries(249197);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__373->SetLineColor(ci);
   Jets_cut_nJet__373->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__373->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__373->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__373->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__373->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__373->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__373->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__373->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__373->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__373->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__373->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__373->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__373->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__373->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__373->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_DHZfirst_16->Modified();
   nJet_DHZfirst_16->cd();
   nJet_DHZfirst_16->SetSelected(nJet_DHZfirst_16);
}
