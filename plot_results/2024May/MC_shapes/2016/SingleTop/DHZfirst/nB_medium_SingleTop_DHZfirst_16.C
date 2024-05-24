#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_SingleTop_DHZfirst_16()
{
//=========Macro generated from canvas: nB_medium_SingleTop_DHZfirst_16/nB_medium_SingleTop_DHZfirst_16
//=========  (Fri May 24 12:43:46 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_SingleTop_DHZfirst_16 = new TCanvas("nB_medium_SingleTop_DHZfirst_16", "nB_medium_SingleTop_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_SingleTop_DHZfirst_16->SetHighLightColor(2);
   nB_medium_SingleTop_DHZfirst_16->Range(-2.5,-1566148,10.83333,1.409533e+07);
   nB_medium_SingleTop_DHZfirst_16->SetFillColor(0);
   nB_medium_SingleTop_DHZfirst_16->SetFillStyle(4000);
   nB_medium_SingleTop_DHZfirst_16->SetBorderMode(0);
   nB_medium_SingleTop_DHZfirst_16->SetBorderSize(2);
   nB_medium_SingleTop_DHZfirst_16->SetLeftMargin(0.15);
   nB_medium_SingleTop_DHZfirst_16->SetFrameFillStyle(1000);
   nB_medium_SingleTop_DHZfirst_16->SetFrameBorderMode(0);
   nB_medium_SingleTop_DHZfirst_16->SetFrameFillStyle(1000);
   nB_medium_SingleTop_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__6019 = new TH1D("Jets_cut_nB_medium__6019","",10,-0.5,9.5);
   Jets_cut_nB_medium__6019->SetBinContent(1,1.193256e+07);
   Jets_cut_nB_medium__6019->SetBinContent(2,6934692);
   Jets_cut_nB_medium__6019->SetBinContent(3,669639.3);
   Jets_cut_nB_medium__6019->SetBinContent(4,25505.95);
   Jets_cut_nB_medium__6019->SetBinContent(5,803.5399);
   Jets_cut_nB_medium__6019->SetBinContent(6,31.06787);
   Jets_cut_nB_medium__6019->SetBinContent(7,1.186562);
   Jets_cut_nB_medium__6019->SetBinError(1,1974.257);
   Jets_cut_nB_medium__6019->SetBinError(2,1373.362);
   Jets_cut_nB_medium__6019->SetBinError(3,308.6189);
   Jets_cut_nB_medium__6019->SetBinError(4,54.27665);
   Jets_cut_nB_medium__6019->SetBinError(5,10.82528);
   Jets_cut_nB_medium__6019->SetBinError(6,2.453545);
   Jets_cut_nB_medium__6019->SetBinError(7,0.4171703);
   Jets_cut_nB_medium__6019->SetEntries(1.89034e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__6019->SetLineColor(ci);
   Jets_cut_nB_medium__6019->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__6019->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__6019->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6019->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6019->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6019->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__6019->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6019->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__6019->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__6019->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__6019->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6019->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6019->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6019->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6019->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_SingleTop_DHZfirst_16->Modified();
   nB_medium_SingleTop_DHZfirst_16->cd();
   nB_medium_SingleTop_DHZfirst_16->SetSelected(nB_medium_SingleTop_DHZfirst_16);
}
