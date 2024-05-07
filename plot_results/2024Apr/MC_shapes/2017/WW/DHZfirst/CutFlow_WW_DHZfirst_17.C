#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WW_DHZfirst_17()
{
//=========Macro generated from canvas: CutFlow_WW_DHZfirst_17/CutFlow_WW_DHZfirst_17
//=========  (Mon Apr 22 15:10:08 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WW_DHZfirst_17 = new TCanvas("CutFlow_WW_DHZfirst_17", "CutFlow_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WW_DHZfirst_17->SetHighLightColor(2);
   CutFlow_WW_DHZfirst_17->Range(-1.4,-572542.1,7.933333,5152878);
   CutFlow_WW_DHZfirst_17->SetFillColor(0);
   CutFlow_WW_DHZfirst_17->SetFillStyle(4000);
   CutFlow_WW_DHZfirst_17->SetBorderMode(0);
   CutFlow_WW_DHZfirst_17->SetBorderSize(2);
   CutFlow_WW_DHZfirst_17->SetLeftMargin(0.15);
   CutFlow_WW_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_WW_DHZfirst_17->SetFrameBorderMode(0);
   CutFlow_WW_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__83 = new TH1D("CutFlow_evt_DHZfirst__83","",8,0,8);
   CutFlow_evt_DHZfirst__83->SetBinContent(1,4362225);
   CutFlow_evt_DHZfirst__83->SetBinContent(2,4291043);
   CutFlow_evt_DHZfirst__83->SetBinContent(3,87272.12);
   CutFlow_evt_DHZfirst__83->SetBinContent(4,608.8253);
   CutFlow_evt_DHZfirst__83->SetBinContent(5,108.5394);
   CutFlow_evt_DHZfirst__83->SetBinContent(6,21.76369);
   CutFlow_evt_DHZfirst__83->SetBinContent(7,11.16087);
   CutFlow_evt_DHZfirst__83->SetBinContent(8,5.301412);
   CutFlow_evt_DHZfirst__83->SetBinError(1,1103.248);
   CutFlow_evt_DHZfirst__83->SetBinError(2,1094.209);
   CutFlow_evt_DHZfirst__83->SetBinError(3,156.0475);
   CutFlow_evt_DHZfirst__83->SetBinError(4,13.03363);
   CutFlow_evt_DHZfirst__83->SetBinError(5,5.503168);
   CutFlow_evt_DHZfirst__83->SetBinError(6,2.464253);
   CutFlow_evt_DHZfirst__83->SetBinError(7,1.764688);
   CutFlow_evt_DHZfirst__83->SetBinError(8,1.216227);
   CutFlow_evt_DHZfirst__83->SetEntries(3.132838e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__83->SetLineColor(ci);
   CutFlow_evt_DHZfirst__83->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__83->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__83->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__83->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__83->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__83->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__83->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__83->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__83->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__83->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__83->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__83->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__83->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__83->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__83->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__83->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__83->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__83->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__83->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__83->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__83->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__83->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__83->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WW_DHZfirst_17->Modified();
   CutFlow_WW_DHZfirst_17->cd();
   CutFlow_WW_DHZfirst_17->SetSelected(CutFlow_WW_DHZfirst_17);
}
