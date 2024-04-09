#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_tagOnly_16()
{
//=========Macro generated from canvas: nJet_tagOnly_16/nJet_tagOnly_16
//=========  (Mon Apr  8 11:27:54 2024) by ROOT version 6.28/10
   TCanvas *nJet_tagOnly_16 = new TCanvas("nJet_tagOnly_16", "nJet_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_tagOnly_16->SetHighLightColor(2);
   nJet_tagOnly_16->Range(-3.3,-39.50879,15.36667,355.5791);
   nJet_tagOnly_16->SetFillColor(0);
   nJet_tagOnly_16->SetFillStyle(4000);
   nJet_tagOnly_16->SetBorderMode(0);
   nJet_tagOnly_16->SetBorderSize(2);
   nJet_tagOnly_16->SetLeftMargin(0.15);
   nJet_tagOnly_16->SetFrameFillStyle(1000);
   nJet_tagOnly_16->SetFrameBorderMode(0);
   nJet_tagOnly_16->SetFrameFillStyle(1000);
   nJet_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__295 = new TH1D("Jets_cut_nJet__295","",14,-0.5,13.5);
   Jets_cut_nJet__295->SetBinContent(1,271.0888);
   Jets_cut_nJet__295->SetBinContent(2,301.0194);
   Jets_cut_nJet__295->SetBinContent(3,283.8483);
   Jets_cut_nJet__295->SetBinContent(4,109.4574);
   Jets_cut_nJet__295->SetBinContent(5,44.52518);
   Jets_cut_nJet__295->SetBinContent(6,12.86797);
   Jets_cut_nJet__295->SetBinContent(7,3.489751);
   Jets_cut_nJet__295->SetBinContent(8,0.9962411);
   Jets_cut_nJet__295->SetBinContent(9,0.1600239);
   Jets_cut_nJet__295->SetBinContent(10,0.06579266);
   Jets_cut_nJet__295->SetBinContent(11,0.01109481);
   Jets_cut_nJet__295->SetBinError(1,1.792902);
   Jets_cut_nJet__295->SetBinError(2,1.840853);
   Jets_cut_nJet__295->SetBinError(3,1.594867);
   Jets_cut_nJet__295->SetBinError(4,0.6352418);
   Jets_cut_nJet__295->SetBinError(5,0.2930943);
   Jets_cut_nJet__295->SetBinError(6,0.1626298);
   Jets_cut_nJet__295->SetBinError(7,0.08713152);
   Jets_cut_nJet__295->SetBinError(8,0.04732135);
   Jets_cut_nJet__295->SetBinError(9,0.01913388);
   Jets_cut_nJet__295->SetBinError(10,0.01251299);
   Jets_cut_nJet__295->SetBinError(11,0.004974486);
   Jets_cut_nJet__295->SetEntries(249197);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__295->SetLineColor(ci);
   Jets_cut_nJet__295->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__295->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__295->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__295->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__295->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__295->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__295->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__295->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__295->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__295->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__295->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__295->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__295->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__295->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__295->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_tagOnly_16->Modified();
   nJet_tagOnly_16->cd();
   nJet_tagOnly_16->SetSelected(nJet_tagOnly_16);
}
