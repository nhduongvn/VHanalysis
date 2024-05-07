#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WW_tagOnly_18_logY()
{
//=========Macro generated from canvas: CutFlow_WW_tagOnly_18/CutFlow_WW_tagOnly_18
//=========  (Mon Apr 22 15:12:12 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WW_tagOnly_18 = new TCanvas("CutFlow_WW_tagOnly_18", "CutFlow_WW_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WW_tagOnly_18->SetHighLightColor(2);
   CutFlow_WW_tagOnly_18->Range(-1.4,1.233192,7.933333,7.783031);
   CutFlow_WW_tagOnly_18->SetFillColor(0);
   CutFlow_WW_tagOnly_18->SetFillStyle(4000);
   CutFlow_WW_tagOnly_18->SetBorderMode(0);
   CutFlow_WW_tagOnly_18->SetBorderSize(2);
   CutFlow_WW_tagOnly_18->SetLogy();
   CutFlow_WW_tagOnly_18->SetLeftMargin(0.15);
   CutFlow_WW_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_WW_tagOnly_18->SetFrameBorderMode(0);
   CutFlow_WW_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_WW_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__54 = new TH1D("CutFlow_evt_tagOnly__54","",8,0,8);
   CutFlow_evt_tagOnly__54->SetBinContent(1,7087577);
   CutFlow_evt_tagOnly__54->SetBinContent(2,6972701);
   CutFlow_evt_tagOnly__54->SetBinContent(3,141386.3);
   CutFlow_evt_tagOnly__54->SetBinContent(4,541.9992);
   CutFlow_evt_tagOnly__54->SetBinContent(5,398.2496);
   CutFlow_evt_tagOnly__54->SetBinContent(6,203.4192);
   CutFlow_evt_tagOnly__54->SetBinContent(7,154.5986);
   CutFlow_evt_tagOnly__54->SetBinContent(8,65.09414);
   CutFlow_evt_tagOnly__54->SetBinError(1,1789.941);
   CutFlow_evt_tagOnly__54->SetBinError(2,1775.376);
   CutFlow_evt_tagOnly__54->SetBinError(3,252.8095);
   CutFlow_evt_tagOnly__54->SetBinError(4,15.65269);
   CutFlow_evt_tagOnly__54->SetBinError(5,13.41737);
   CutFlow_evt_tagOnly__54->SetBinError(6,9.589273);
   CutFlow_evt_tagOnly__54->SetBinError(7,8.359734);
   CutFlow_evt_tagOnly__54->SetBinError(8,5.424512);
   CutFlow_evt_tagOnly__54->SetEntries(3.141966e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__54->SetLineColor(ci);
   CutFlow_evt_tagOnly__54->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__54->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__54->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__54->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__54->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__54->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__54->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__54->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__54->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__54->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__54->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__54->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__54->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__54->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__54->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__54->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__54->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__54->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__54->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__54->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__54->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__54->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__54->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WW_tagOnly_18->Modified();
   CutFlow_WW_tagOnly_18->cd();
   CutFlow_WW_tagOnly_18->SetSelected(CutFlow_WW_tagOnly_18);
}
