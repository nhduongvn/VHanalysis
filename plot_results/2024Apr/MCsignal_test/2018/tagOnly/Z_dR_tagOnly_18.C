#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tagOnly_18()
{
//=========Macro generated from canvas: Z_dR_tagOnly_18/Z_dR_tagOnly_18
//=========  (Thu Apr 11 14:04:08 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_tagOnly_18 = new TCanvas("Z_dR_tagOnly_18", "Z_dR_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tagOnly_18->SetHighLightColor(2);
   Z_dR_tagOnly_18->Range(-1.2,-61510.26,6.8,553592.3);
   Z_dR_tagOnly_18->SetFillColor(0);
   Z_dR_tagOnly_18->SetFillStyle(4000);
   Z_dR_tagOnly_18->SetBorderMode(0);
   Z_dR_tagOnly_18->SetBorderSize(2);
   Z_dR_tagOnly_18->SetLeftMargin(0.15);
   Z_dR_tagOnly_18->SetFrameFillStyle(1000);
   Z_dR_tagOnly_18->SetFrameBorderMode(0);
   Z_dR_tagOnly_18->SetFrameFillStyle(1000);
   Z_dR_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_dR__29 = new TH1D("VH_tagOnly_Z_dR__29","",30,0,6);
   VH_tagOnly_Z_dR__29->SetBinContent(3,123879.7);
   VH_tagOnly_Z_dR__29->SetBinContent(4,242440.2);
   VH_tagOnly_Z_dR__29->SetBinContent(5,289356.6);
   VH_tagOnly_Z_dR__29->SetBinContent(6,154127.5);
   VH_tagOnly_Z_dR__29->SetBinContent(7,48599.58);
   VH_tagOnly_Z_dR__29->SetBinContent(8,228343.6);
   VH_tagOnly_Z_dR__29->SetBinContent(9,52359.17);
   VH_tagOnly_Z_dR__29->SetBinContent(10,323823.3);
   VH_tagOnly_Z_dR__29->SetBinContent(11,126644);
   VH_tagOnly_Z_dR__29->SetBinContent(12,468649.5);
   VH_tagOnly_Z_dR__29->SetBinContent(13,85175.71);
   VH_tagOnly_Z_dR__29->SetBinContent(14,351828.4);
   VH_tagOnly_Z_dR__29->SetBinContent(15,55085.66);
   VH_tagOnly_Z_dR__29->SetBinContent(16,18252.75);
   VH_tagOnly_Z_dR__29->SetBinContent(17,63183.6);
   VH_tagOnly_Z_dR__29->SetBinContent(18,43980.23);
   VH_tagOnly_Z_dR__29->SetBinContent(19,75586.77);
   VH_tagOnly_Z_dR__29->SetBinContent(20,17512.3);
   VH_tagOnly_Z_dR__29->SetBinContent(21,41370.88);
   VH_tagOnly_Z_dR__29->SetBinContent(22,23253.1);
   VH_tagOnly_Z_dR__29->SetBinContent(23,14180.39);
   VH_tagOnly_Z_dR__29->SetBinContent(24,12790.25);
   VH_tagOnly_Z_dR__29->SetBinContent(25,3791.696);
   VH_tagOnly_Z_dR__29->SetBinContent(26,91247.05);
   VH_tagOnly_Z_dR__29->SetBinContent(27,22081.95);
   VH_tagOnly_Z_dR__29->SetBinContent(28,97914.71);
   VH_tagOnly_Z_dR__29->SetBinContent(29,100935.6);
   VH_tagOnly_Z_dR__29->SetBinContent(30,76113.95);
   VH_tagOnly_Z_dR__29->SetBinContent(31,4636.849);
   VH_tagOnly_Z_dR__29->SetBinError(3,29477.73);
   VH_tagOnly_Z_dR__29->SetBinError(4,171923.3);
   VH_tagOnly_Z_dR__29->SetBinError(5,181356.7);
   VH_tagOnly_Z_dR__29->SetBinError(6,57001.71);
   VH_tagOnly_Z_dR__29->SetBinError(7,17183.82);
   VH_tagOnly_Z_dR__29->SetBinError(8,158404.1);
   VH_tagOnly_Z_dR__29->SetBinError(9,26156.23);
   VH_tagOnly_Z_dR__29->SetBinError(10,250784.8);
   VH_tagOnly_Z_dR__29->SetBinError(11,65556.89);
   VH_tagOnly_Z_dR__29->SetBinError(12,304065.6);
   VH_tagOnly_Z_dR__29->SetBinError(13,34451.25);
   VH_tagOnly_Z_dR__29->SetBinError(14,251093.5);
   VH_tagOnly_Z_dR__29->SetBinError(15,18339.64);
   VH_tagOnly_Z_dR__29->SetBinError(16,4969.597);
   VH_tagOnly_Z_dR__29->SetBinError(17,27906.52);
   VH_tagOnly_Z_dR__29->SetBinError(18,16931.17);
   VH_tagOnly_Z_dR__29->SetBinError(19,29081.51);
   VH_tagOnly_Z_dR__29->SetBinError(20,4233.724);
   VH_tagOnly_Z_dR__29->SetBinError(21,23845.2);
   VH_tagOnly_Z_dR__29->SetBinError(22,9379.128);
   VH_tagOnly_Z_dR__29->SetBinError(23,4786.105);
   VH_tagOnly_Z_dR__29->SetBinError(24,8299.471);
   VH_tagOnly_Z_dR__29->SetBinError(25,1686.015);
   VH_tagOnly_Z_dR__29->SetBinError(26,78091.66);
   VH_tagOnly_Z_dR__29->SetBinError(27,11498.92);
   VH_tagOnly_Z_dR__29->SetBinError(28,70596.59);
   VH_tagOnly_Z_dR__29->SetBinError(29,79572.12);
   VH_tagOnly_Z_dR__29->SetBinError(30,71948.31);
   VH_tagOnly_Z_dR__29->SetBinError(31,1766.737);
   VH_tagOnly_Z_dR__29->SetEntries(780);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_dR__29->SetLineColor(ci);
   VH_tagOnly_Z_dR__29->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagOnly_Z_dR__29->GetXaxis()->SetRange(1,30);
   VH_tagOnly_Z_dR__29->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__29->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__29->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__29->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_Z_dR__29->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__29->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_dR__29->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_dR__29->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_dR__29->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__29->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__29->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__29->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__29->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tagOnly_18->Modified();
   Z_dR_tagOnly_18->cd();
   Z_dR_tagOnly_18->SetSelected(Z_dR_tagOnly_18);
}
