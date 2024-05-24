#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_WJets_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Z_dR_WJets_DHZfirst_16/Z_dR_WJets_DHZfirst_16
//=========  (Thu May 23 20:48:47 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_WJets_DHZfirst_16 = new TCanvas("Z_dR_WJets_DHZfirst_16", "Z_dR_WJets_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_WJets_DHZfirst_16->SetHighLightColor(2);
   Z_dR_WJets_DHZfirst_16->Range(-1.2,-1.901503,6.8,3.013821);
   Z_dR_WJets_DHZfirst_16->SetFillColor(0);
   Z_dR_WJets_DHZfirst_16->SetFillStyle(4000);
   Z_dR_WJets_DHZfirst_16->SetBorderMode(0);
   Z_dR_WJets_DHZfirst_16->SetBorderSize(2);
   Z_dR_WJets_DHZfirst_16->SetLogy();
   Z_dR_WJets_DHZfirst_16->SetLeftMargin(0.15);
   Z_dR_WJets_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_WJets_DHZfirst_16->SetFrameBorderMode(0);
   Z_dR_WJets_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_WJets_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR__1570 = new TH1D("VH_DHZfirst_Z_dR__1570","",30,0,6);
   VH_DHZfirst_Z_dR__1570->SetBinContent(2,0.07781434);
   VH_DHZfirst_Z_dR__1570->SetBinContent(3,175.6869);
   VH_DHZfirst_Z_dR__1570->SetBinContent(4,147.4006);
   VH_DHZfirst_Z_dR__1570->SetBinContent(5,91.6766);
   VH_DHZfirst_Z_dR__1570->SetBinContent(6,97.64569);
   VH_DHZfirst_Z_dR__1570->SetBinContent(7,96.70878);
   VH_DHZfirst_Z_dR__1570->SetBinContent(8,63.6374);
   VH_DHZfirst_Z_dR__1570->SetBinContent(9,46.69296);
   VH_DHZfirst_Z_dR__1570->SetBinContent(10,47.25609);
   VH_DHZfirst_Z_dR__1570->SetBinContent(11,39.42605);
   VH_DHZfirst_Z_dR__1570->SetBinContent(12,45.18068);
   VH_DHZfirst_Z_dR__1570->SetBinContent(13,29.41274);
   VH_DHZfirst_Z_dR__1570->SetBinContent(14,27.41899);
   VH_DHZfirst_Z_dR__1570->SetBinContent(15,27.54984);
   VH_DHZfirst_Z_dR__1570->SetBinContent(16,35.99477);
   VH_DHZfirst_Z_dR__1570->SetBinContent(17,13.23427);
   VH_DHZfirst_Z_dR__1570->SetBinContent(18,19.40469);
   VH_DHZfirst_Z_dR__1570->SetBinContent(19,15.75899);
   VH_DHZfirst_Z_dR__1570->SetBinContent(20,8.000409);
   VH_DHZfirst_Z_dR__1570->SetBinContent(21,11.95622);
   VH_DHZfirst_Z_dR__1570->SetBinContent(22,13.17257);
   VH_DHZfirst_Z_dR__1570->SetBinContent(23,16.95333);
   VH_DHZfirst_Z_dR__1570->SetBinContent(24,10.74897);
   VH_DHZfirst_Z_dR__1570->SetBinContent(25,12.60393);
   VH_DHZfirst_Z_dR__1570->SetBinContent(26,14.00795);
   VH_DHZfirst_Z_dR__1570->SetBinContent(27,12.76436);
   VH_DHZfirst_Z_dR__1570->SetBinContent(28,15.66371);
   VH_DHZfirst_Z_dR__1570->SetBinContent(29,17.96244);
   VH_DHZfirst_Z_dR__1570->SetBinContent(30,8.268941);
   VH_DHZfirst_Z_dR__1570->SetBinContent(31,5.003202);
   VH_DHZfirst_Z_dR__1570->SetBinError(2,0.07781434);
   VH_DHZfirst_Z_dR__1570->SetBinError(3,14.07297);
   VH_DHZfirst_Z_dR__1570->SetBinError(4,12.65246);
   VH_DHZfirst_Z_dR__1570->SetBinError(5,8.259995);
   VH_DHZfirst_Z_dR__1570->SetBinError(6,14.4592);
   VH_DHZfirst_Z_dR__1570->SetBinError(7,13.66114);
   VH_DHZfirst_Z_dR__1570->SetBinError(8,10.34806);
   VH_DHZfirst_Z_dR__1570->SetBinError(9,5.995325);
   VH_DHZfirst_Z_dR__1570->SetBinError(10,7.326416);
   VH_DHZfirst_Z_dR__1570->SetBinError(11,7.938019);
   VH_DHZfirst_Z_dR__1570->SetBinError(12,8.453203);
   VH_DHZfirst_Z_dR__1570->SetBinError(13,7.452805);
   VH_DHZfirst_Z_dR__1570->SetBinError(14,6.094577);
   VH_DHZfirst_Z_dR__1570->SetBinError(15,4.909945);
   VH_DHZfirst_Z_dR__1570->SetBinError(16,9.778474);
   VH_DHZfirst_Z_dR__1570->SetBinError(17,2.483046);
   VH_DHZfirst_Z_dR__1570->SetBinError(18,6.51151);
   VH_DHZfirst_Z_dR__1570->SetBinError(19,5.018464);
   VH_DHZfirst_Z_dR__1570->SetBinError(20,2.004249);
   VH_DHZfirst_Z_dR__1570->SetBinError(21,2.422967);
   VH_DHZfirst_Z_dR__1570->SetBinError(22,2.570164);
   VH_DHZfirst_Z_dR__1570->SetBinError(23,4.755251);
   VH_DHZfirst_Z_dR__1570->SetBinError(24,2.041567);
   VH_DHZfirst_Z_dR__1570->SetBinError(25,2.466446);
   VH_DHZfirst_Z_dR__1570->SetBinError(26,4.724132);
   VH_DHZfirst_Z_dR__1570->SetBinError(27,2.415803);
   VH_DHZfirst_Z_dR__1570->SetBinError(28,5.212441);
   VH_DHZfirst_Z_dR__1570->SetBinError(29,5.414175);
   VH_DHZfirst_Z_dR__1570->SetBinError(30,1.818388);
   VH_DHZfirst_Z_dR__1570->SetBinError(31,0.829235);
   VH_DHZfirst_Z_dR__1570->SetEntries(9167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR__1570->SetLineColor(ci);
   VH_DHZfirst_Z_dR__1570->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_DHZfirst_Z_dR__1570->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR__1570->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1570->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1570->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1570->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR__1570->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1570->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR__1570->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR__1570->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR__1570->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1570->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1570->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1570->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1570->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_WJets_DHZfirst_16->Modified();
   Z_dR_WJets_DHZfirst_16->cd();
   Z_dR_WJets_DHZfirst_16->SetSelected(Z_dR_WJets_DHZfirst_16);
}
