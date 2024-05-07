#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_TT_tagOnly_18_logY()
{
//=========Macro generated from canvas: CutFlow_TT_tagOnly_18/CutFlow_TT_tagOnly_18
//=========  (Mon Apr 22 15:12:12 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_TT_tagOnly_18 = new TCanvas("CutFlow_TT_tagOnly_18", "CutFlow_TT_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_TT_tagOnly_18->SetHighLightColor(2);
   CutFlow_TT_tagOnly_18->Range(-1.4,5.284126,7.933333,8.273565);
   CutFlow_TT_tagOnly_18->SetFillColor(0);
   CutFlow_TT_tagOnly_18->SetFillStyle(4000);
   CutFlow_TT_tagOnly_18->SetBorderMode(0);
   CutFlow_TT_tagOnly_18->SetBorderSize(2);
   CutFlow_TT_tagOnly_18->SetLogy();
   CutFlow_TT_tagOnly_18->SetLeftMargin(0.15);
   CutFlow_TT_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_TT_tagOnly_18->SetFrameBorderMode(0);
   CutFlow_TT_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_TT_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__48 = new TH1D("CutFlow_evt_tagOnly__48","",8,0,8);
   CutFlow_evt_tagOnly__48->SetBinContent(1,4.978202e+07);
   CutFlow_evt_tagOnly__48->SetBinContent(2,4.721097e+07);
   CutFlow_evt_tagOnly__48->SetBinContent(3,1.515959e+07);
   CutFlow_evt_tagOnly__48->SetBinContent(4,1284753);
   CutFlow_evt_tagOnly__48->SetBinContent(5,1258473);
   CutFlow_evt_tagOnly__48->SetBinContent(6,996025.1);
   CutFlow_evt_tagOnly__48->SetBinContent(7,765772.8);
   CutFlow_evt_tagOnly__48->SetBinContent(8,347393.1);
   CutFlow_evt_tagOnly__48->SetBinError(1,1697.976);
   CutFlow_evt_tagOnly__48->SetBinError(2,1662.44);
   CutFlow_evt_tagOnly__48->SetBinError(3,988.5159);
   CutFlow_evt_tagOnly__48->SetBinError(4,288.3615);
   CutFlow_evt_tagOnly__48->SetBinError(5,285.3192);
   CutFlow_evt_tagOnly__48->SetBinError(6,253.4353);
   CutFlow_evt_tagOnly__48->SetBinError(7,222.905);
   CutFlow_evt_tagOnly__48->SetBinError(8,151.2909);
   CutFlow_evt_tagOnly__48->SetEntries(2.075041e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__48->SetLineColor(ci);
   CutFlow_evt_tagOnly__48->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__48->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__48->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__48->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__48->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__48->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__48->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__48->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__48->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__48->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__48->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__48->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__48->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__48->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__48->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__48->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__48->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__48->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__48->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__48->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__48->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__48->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__48->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_TT_tagOnly_18->Modified();
   CutFlow_TT_tagOnly_18->cd();
   CutFlow_TT_tagOnly_18->SetSelected(CutFlow_TT_tagOnly_18);
}
