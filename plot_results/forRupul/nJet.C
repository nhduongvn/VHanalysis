#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet()
{
//=========Macro generated from canvas: nJet/nJet
//=========  (Wed Mar 27 12:51:56 2024) by ROOT version 6.28/10
   TCanvas *nJet = new TCanvas("nJet", "nJet",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet->SetHighLightColor(2);
   nJet->Range(-3.3,-16981.05,15.36667,152829.5);
   nJet->SetFillColor(0);
   nJet->SetFillStyle(4000);
   nJet->SetBorderMode(0);
   nJet->SetBorderSize(2);
   nJet->SetLeftMargin(0.15);
   nJet->SetFrameFillStyle(1000);
   nJet->SetFrameBorderMode(0);
   nJet->SetFrameFillStyle(1000);
   nJet->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__25 = new TH1D("Jets_cut_nJet__25","",14,-0.5,13.5);
   Jets_cut_nJet__25->SetBinContent(1,65209.73);
   Jets_cut_nJet__25->SetBinContent(2,85822.64);
   Jets_cut_nJet__25->SetBinContent(3,129379.4);
   Jets_cut_nJet__25->SetBinContent(4,106016.4);
   Jets_cut_nJet__25->SetBinContent(5,58390.06);
   Jets_cut_nJet__25->SetBinContent(6,18204.2);
   Jets_cut_nJet__25->SetBinContent(7,4985.943);
   Jets_cut_nJet__25->SetBinContent(8,1313.858);
   Jets_cut_nJet__25->SetBinContent(9,332.3588);
   Jets_cut_nJet__25->SetBinContent(10,64.15744);
   Jets_cut_nJet__25->SetBinContent(11,13.08564);
   Jets_cut_nJet__25->SetBinContent(13,3.221584);
   Jets_cut_nJet__25->SetBinContent(14,1.520247);
   Jets_cut_nJet__25->SetBinError(1,288.987);
   Jets_cut_nJet__25->SetBinError(2,320.8305);
   Jets_cut_nJet__25->SetBinError(3,384.8725);
   Jets_cut_nJet__25->SetBinError(4,367.9493);
   Jets_cut_nJet__25->SetBinError(5,309.2712);
   Jets_cut_nJet__25->SetBinError(6,185.754);
   Jets_cut_nJet__25->SetBinError(7,99.00781);
   Jets_cut_nJet__25->SetBinError(8,52.96449);
   Jets_cut_nJet__25->SetBinError(9,25.73424);
   Jets_cut_nJet__25->SetBinError(10,11.06526);
   Jets_cut_nJet__25->SetBinError(11,4.281806);
   Jets_cut_nJet__25->SetBinError(13,2.329733);
   Jets_cut_nJet__25->SetBinError(14,1.520247);
   Jets_cut_nJet__25->SetEntries(499433);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__25->SetLineColor(ci);
   Jets_cut_nJet__25->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__25->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__25->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__25->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__25->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__25->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__25->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__25->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__25->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__25->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__25->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__25->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__25->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__25->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__25->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet->Modified();
   nJet->cd();
   nJet->SetSelected(nJet);
}
