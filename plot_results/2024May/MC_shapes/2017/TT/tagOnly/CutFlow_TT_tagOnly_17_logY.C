#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_TT_tagOnly_17_logY()
{
//=========Macro generated from canvas: CutFlow_TT_tagOnly_17/CutFlow_TT_tagOnly_17
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_TT_tagOnly_17 = new TCanvas("CutFlow_TT_tagOnly_17", "CutFlow_TT_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_TT_tagOnly_17->SetHighLightColor(2);
   CutFlow_TT_tagOnly_17->Range(-1.4,5.16323,7.933333,8.052787);
   CutFlow_TT_tagOnly_17->SetFillColor(0);
   CutFlow_TT_tagOnly_17->SetFillStyle(4000);
   CutFlow_TT_tagOnly_17->SetBorderMode(0);
   CutFlow_TT_tagOnly_17->SetBorderSize(2);
   CutFlow_TT_tagOnly_17->SetLogy();
   CutFlow_TT_tagOnly_17->SetLeftMargin(0.15);
   CutFlow_TT_tagOnly_17->SetFrameFillStyle(1000);
   CutFlow_TT_tagOnly_17->SetFrameBorderMode(0);
   CutFlow_TT_tagOnly_17->SetFrameFillStyle(1000);
   CutFlow_TT_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__47 = new TH1D("CutFlow_evt_tagOnly__47","",8,0,8);
   CutFlow_evt_tagOnly__47->SetBinContent(1,3.063958e+07);
   CutFlow_evt_tagOnly__47->SetBinContent(2,2.905105e+07);
   CutFlow_evt_tagOnly__47->SetBinContent(3,9323322);
   CutFlow_evt_tagOnly__47->SetBinContent(4,975882.8);
   CutFlow_evt_tagOnly__47->SetBinContent(5,950815.3);
   CutFlow_evt_tagOnly__47->SetBinContent(6,725978.5);
   CutFlow_evt_tagOnly__47->SetBinContent(7,566521.2);
   CutFlow_evt_tagOnly__47->SetBinContent(8,255838.3);
   CutFlow_evt_tagOnly__47->SetBinError(1,1301.043);
   CutFlow_evt_tagOnly__47->SetBinError(2,1276.501);
   CutFlow_evt_tagOnly__47->SetBinError(3,772.1683);
   CutFlow_evt_tagOnly__47->SetBinError(4,251.5843);
   CutFlow_evt_tagOnly__47->SetBinError(5,248.2084);
   CutFlow_evt_tagOnly__47->SetBinError(6,216.297);
   CutFlow_evt_tagOnly__47->SetBinError(7,191.7588);
   CutFlow_evt_tagOnly__47->SetBinError(8,130.1352);
   CutFlow_evt_tagOnly__47->SetEntries(1.403192e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__47->SetLineColor(ci);
   CutFlow_evt_tagOnly__47->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__47->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__47->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__47->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__47->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__47->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__47->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__47->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__47->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__47->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__47->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__47->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__47->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__47->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__47->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__47->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__47->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__47->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__47->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__47->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__47->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__47->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__47->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_TT_tagOnly_17->Modified();
   CutFlow_TT_tagOnly_17->cd();
   CutFlow_TT_tagOnly_17->SetSelected(CutFlow_TT_tagOnly_17);
}
