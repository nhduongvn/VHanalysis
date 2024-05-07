#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_TT_DHZfirst_17()
{
//=========Macro generated from canvas: CutFlow_TT_DHZfirst_17/CutFlow_TT_DHZfirst_17
//=========  (Mon Apr 22 15:10:08 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_TT_DHZfirst_17 = new TCanvas("CutFlow_TT_DHZfirst_17", "CutFlow_TT_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_TT_DHZfirst_17->SetHighLightColor(2);
   CutFlow_TT_DHZfirst_17->Range(-1.4,-4021445,7.933333,3.6193e+07);
   CutFlow_TT_DHZfirst_17->SetFillColor(0);
   CutFlow_TT_DHZfirst_17->SetFillStyle(4000);
   CutFlow_TT_DHZfirst_17->SetBorderMode(0);
   CutFlow_TT_DHZfirst_17->SetBorderSize(2);
   CutFlow_TT_DHZfirst_17->SetLeftMargin(0.15);
   CutFlow_TT_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_TT_DHZfirst_17->SetFrameBorderMode(0);
   CutFlow_TT_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_TT_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__77 = new TH1D("CutFlow_evt_DHZfirst__77","",8,0,8);
   CutFlow_evt_DHZfirst__77->SetBinContent(1,3.063958e+07);
   CutFlow_evt_DHZfirst__77->SetBinContent(2,2.905104e+07);
   CutFlow_evt_DHZfirst__77->SetBinContent(3,9323286);
   CutFlow_evt_DHZfirst__77->SetBinContent(4,975710.2);
   CutFlow_evt_DHZfirst__77->SetBinContent(5,403185.6);
   CutFlow_evt_DHZfirst__77->SetBinContent(6,113296.7);
   CutFlow_evt_DHZfirst__77->SetBinContent(7,38388.18);
   CutFlow_evt_DHZfirst__77->SetBinContent(8,12863.99);
   CutFlow_evt_DHZfirst__77->SetBinError(1,1223.206);
   CutFlow_evt_DHZfirst__77->SetBinError(2,1197.997);
   CutFlow_evt_DHZfirst__77->SetBinError(3,714.4529);
   CutFlow_evt_DHZfirst__77->SetBinError(4,232.3916);
   CutFlow_evt_DHZfirst__77->SetBinError(5,149.3017);
   CutFlow_evt_DHZfirst__77->SetBinError(6,78.58746);
   CutFlow_evt_DHZfirst__77->SetBinError(7,45.93322);
   CutFlow_evt_DHZfirst__77->SetBinError(8,26.61149);
   CutFlow_evt_DHZfirst__77->SetEntries(1.497541e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__77->SetLineColor(ci);
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__77->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__77->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__77->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__77->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__77->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__77->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__77->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__77->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__77->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__77->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_TT_DHZfirst_17->Modified();
   CutFlow_TT_DHZfirst_17->cd();
   CutFlow_TT_DHZfirst_17->SetSelected(CutFlow_TT_DHZfirst_17);
}
