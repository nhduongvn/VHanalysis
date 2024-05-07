#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZHbb_tagOnly_16_logY()
{
//=========Macro generated from canvas: CutFlow_ZHbb_tagOnly_16/CutFlow_ZHbb_tagOnly_16
//=========  (Mon Apr 22 15:12:12 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZHbb_tagOnly_16 = new TCanvas("CutFlow_ZHbb_tagOnly_16", "CutFlow_ZHbb_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZHbb_tagOnly_16->SetHighLightColor(2);
   CutFlow_ZHbb_tagOnly_16->Range(-1.4,1.962177,7.933333,4.720044);
   CutFlow_ZHbb_tagOnly_16->SetFillColor(0);
   CutFlow_ZHbb_tagOnly_16->SetFillStyle(4000);
   CutFlow_ZHbb_tagOnly_16->SetBorderMode(0);
   CutFlow_ZHbb_tagOnly_16->SetBorderSize(2);
   CutFlow_ZHbb_tagOnly_16->SetLogy();
   CutFlow_ZHbb_tagOnly_16->SetLeftMargin(0.15);
   CutFlow_ZHbb_tagOnly_16->SetFrameFillStyle(1000);
   CutFlow_ZHbb_tagOnly_16->SetFrameBorderMode(0);
   CutFlow_ZHbb_tagOnly_16->SetFrameFillStyle(1000);
   CutFlow_ZHbb_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__34 = new TH1D("CutFlow_evt_tagOnly__34","",8,0,8);
   CutFlow_evt_tagOnly__34->SetBinContent(1,14679.39);
   CutFlow_evt_tagOnly__34->SetBinContent(2,14654.27);
   CutFlow_evt_tagOnly__34->SetBinContent(3,2193.632);
   CutFlow_evt_tagOnly__34->SetBinContent(4,866.4645);
   CutFlow_evt_tagOnly__34->SetBinContent(5,828.1885);
   CutFlow_evt_tagOnly__34->SetBinContent(6,590.7069);
   CutFlow_evt_tagOnly__34->SetBinContent(7,345.9344);
   CutFlow_evt_tagOnly__34->SetBinContent(8,132.3386);
   CutFlow_evt_tagOnly__34->SetBinError(1,4.305276);
   CutFlow_evt_tagOnly__34->SetBinError(2,4.302151);
   CutFlow_evt_tagOnly__34->SetBinError(3,1.546363);
   CutFlow_evt_tagOnly__34->SetBinError(4,0.9611962);
   CutFlow_evt_tagOnly__34->SetBinError(5,0.939243);
   CutFlow_evt_tagOnly__34->SetBinError(6,0.7924922);
   CutFlow_evt_tagOnly__34->SetBinError(7,0.6060772);
   CutFlow_evt_tagOnly__34->SetBinError(8,0.3736755);
   CutFlow_evt_tagOnly__34->SetEntries(3.354111e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__34->SetLineColor(ci);
   CutFlow_evt_tagOnly__34->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__34->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__34->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__34->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__34->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__34->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__34->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__34->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__34->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__34->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__34->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__34->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__34->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__34->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__34->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__34->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__34->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__34->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__34->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__34->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__34->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__34->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__34->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZHbb_tagOnly_16->Modified();
   CutFlow_ZHbb_tagOnly_16->cd();
   CutFlow_ZHbb_tagOnly_16->SetSelected(CutFlow_ZHbb_tagOnly_16);
}
