#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_WW_DHZfirst_17_logY()
{
//=========Macro generated from canvas: H_pt_WW_DHZfirst_17/H_pt_WW_DHZfirst_17
//=========  (Fri May 24 12:42:27 2024) by ROOT version 6.28/10
   TCanvas *H_pt_WW_DHZfirst_17 = new TCanvas("H_pt_WW_DHZfirst_17", "H_pt_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_pt_WW_DHZfirst_17->SetHighLightColor(2);
   H_pt_WW_DHZfirst_17->Range(59.99999,-1.5818,1660,0.1420854);
   H_pt_WW_DHZfirst_17->SetFillColor(0);
   H_pt_WW_DHZfirst_17->SetFillStyle(4000);
   H_pt_WW_DHZfirst_17->SetBorderMode(0);
   H_pt_WW_DHZfirst_17->SetBorderSize(2);
   H_pt_WW_DHZfirst_17->SetLogy();
   H_pt_WW_DHZfirst_17->SetLeftMargin(0.15);
   H_pt_WW_DHZfirst_17->SetFrameFillStyle(1000);
   H_pt_WW_DHZfirst_17->SetFrameBorderMode(0);
   H_pt_WW_DHZfirst_17->SetFrameFillStyle(1000);
   H_pt_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_pt__1553 = new TH1D("VH_DHZfirst_H_pt__1553","",500,0,2000);
   VH_DHZfirst_H_pt__1553->SetBinContent(29,0.4956396);
   VH_DHZfirst_H_pt__1553->SetBinContent(34,0.1947795);
   VH_DHZfirst_H_pt__1553->SetBinContent(42,0.2353289);
   VH_DHZfirst_H_pt__1553->SetBinContent(43,0.1674855);
   VH_DHZfirst_H_pt__1553->SetBinContent(44,0.3529121);
   VH_DHZfirst_H_pt__1553->SetBinContent(56,0.2553652);
   VH_DHZfirst_H_pt__1553->SetBinContent(58,0.152338);
   VH_DHZfirst_H_pt__1553->SetBinContent(61,0.4893481);
   VH_DHZfirst_H_pt__1553->SetBinContent(62,0.2028034);
   VH_DHZfirst_H_pt__1553->SetBinContent(81,0.2290723);
   VH_DHZfirst_H_pt__1553->SetBinContent(93,0.2776511);
   VH_DHZfirst_H_pt__1553->SetBinContent(109,0.2037551);
   VH_DHZfirst_H_pt__1553->SetBinContent(113,0.4922072);
   VH_DHZfirst_H_pt__1553->SetBinContent(166,0.07791458);
   VH_DHZfirst_H_pt__1553->SetBinContent(243,0.2128171);
   VH_DHZfirst_H_pt__1553->SetBinError(29,0.4956396);
   VH_DHZfirst_H_pt__1553->SetBinError(34,0.1947795);
   VH_DHZfirst_H_pt__1553->SetBinError(42,0.2353289);
   VH_DHZfirst_H_pt__1553->SetBinError(43,0.1674855);
   VH_DHZfirst_H_pt__1553->SetBinError(44,0.3529121);
   VH_DHZfirst_H_pt__1553->SetBinError(56,0.2553652);
   VH_DHZfirst_H_pt__1553->SetBinError(58,0.152338);
   VH_DHZfirst_H_pt__1553->SetBinError(61,0.4893481);
   VH_DHZfirst_H_pt__1553->SetBinError(62,0.2028034);
   VH_DHZfirst_H_pt__1553->SetBinError(81,0.2290723);
   VH_DHZfirst_H_pt__1553->SetBinError(93,0.2776511);
   VH_DHZfirst_H_pt__1553->SetBinError(109,0.2037551);
   VH_DHZfirst_H_pt__1553->SetBinError(113,0.4922072);
   VH_DHZfirst_H_pt__1553->SetBinError(166,0.07791458);
   VH_DHZfirst_H_pt__1553->SetBinError(243,0.2128171);
   VH_DHZfirst_H_pt__1553->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_pt__1553->SetLineColor(ci);
   VH_DHZfirst_H_pt__1553->GetXaxis()->SetTitle("H p_{T} [GeV]");
   VH_DHZfirst_H_pt__1553->GetXaxis()->SetRange(76,375);
   VH_DHZfirst_H_pt__1553->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_pt__1553->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_pt__1553->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_pt__1553->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_DHZfirst_H_pt__1553->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_pt__1553->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_pt__1553->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_pt__1553->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_pt__1553->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_pt__1553->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_pt__1553->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_pt__1553->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_pt__1553->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_WW_DHZfirst_17->Modified();
   H_pt_WW_DHZfirst_17->cd();
   H_pt_WW_DHZfirst_17->SetSelected(H_pt_WW_DHZfirst_17);
}
