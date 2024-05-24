#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_SingleTop_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: nC_medium_SingleTop_DHZfirst_2b1c_18/nC_medium_SingleTop_DHZfirst_2b1c_18
//=========  (Fri May 24 12:44:37 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_SingleTop_DHZfirst_2b1c_18 = new TCanvas("nC_medium_SingleTop_DHZfirst_2b1c_18", "nC_medium_SingleTop_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_SingleTop_DHZfirst_2b1c_18->SetHighLightColor(2);
   nC_medium_SingleTop_DHZfirst_2b1c_18->Range(-2.5,-1282066,10.83333,1.153859e+07);
   nC_medium_SingleTop_DHZfirst_2b1c_18->SetFillColor(0);
   nC_medium_SingleTop_DHZfirst_2b1c_18->SetFillStyle(4000);
   nC_medium_SingleTop_DHZfirst_2b1c_18->SetBorderMode(0);
   nC_medium_SingleTop_DHZfirst_2b1c_18->SetBorderSize(2);
   nC_medium_SingleTop_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   nC_medium_SingleTop_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   nC_medium_SingleTop_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   nC_medium_SingleTop_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   nC_medium_SingleTop_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__8391 = new TH1D("Jets_cut_nC_medium__8391","",10,-0.5,9.5);
   Jets_cut_nC_medium__8391->SetBinContent(1,9768122);
   Jets_cut_nC_medium__8391->SetBinContent(2,5555091);
   Jets_cut_nC_medium__8391->SetBinContent(3,1662197);
   Jets_cut_nC_medium__8391->SetBinContent(4,315870.5);
   Jets_cut_nC_medium__8391->SetBinContent(5,43236.69);
   Jets_cut_nC_medium__8391->SetBinContent(6,4723.284);
   Jets_cut_nC_medium__8391->SetBinContent(7,455.3634);
   Jets_cut_nC_medium__8391->SetBinContent(8,34.84012);
   Jets_cut_nC_medium__8391->SetBinContent(9,1.955482);
   Jets_cut_nC_medium__8391->SetBinError(1,1104.881);
   Jets_cut_nC_medium__8391->SetBinError(2,990.6534);
   Jets_cut_nC_medium__8391->SetBinError(3,670.8652);
   Jets_cut_nC_medium__8391->SetBinError(4,371.4169);
   Jets_cut_nC_medium__8391->SetBinError(5,161.1767);
   Jets_cut_nC_medium__8391->SetBinError(6,64.38834);
   Jets_cut_nC_medium__8391->SetBinError(7,27.18305);
   Jets_cut_nC_medium__8391->SetBinError(8,6.403593);
   Jets_cut_nC_medium__8391->SetBinError(9,1.059969);
   Jets_cut_nC_medium__8391->SetEntries(2.85745e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__8391->SetLineColor(ci);
   Jets_cut_nC_medium__8391->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__8391->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__8391->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__8391->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__8391->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__8391->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__8391->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__8391->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__8391->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__8391->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__8391->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__8391->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__8391->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__8391->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__8391->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_SingleTop_DHZfirst_2b1c_18->Modified();
   nC_medium_SingleTop_DHZfirst_2b1c_18->cd();
   nC_medium_SingleTop_DHZfirst_2b1c_18->SetSelected(nC_medium_SingleTop_DHZfirst_2b1c_18);
}
