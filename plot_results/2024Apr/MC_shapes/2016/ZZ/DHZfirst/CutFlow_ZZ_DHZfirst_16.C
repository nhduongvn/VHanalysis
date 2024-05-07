#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZZ_DHZfirst_16()
{
//=========Macro generated from canvas: CutFlow_ZZ_DHZfirst_16/CutFlow_ZZ_DHZfirst_16
//=========  (Mon Apr 22 15:10:08 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZZ_DHZfirst_16 = new TCanvas("CutFlow_ZZ_DHZfirst_16", "CutFlow_ZZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZZ_DHZfirst_16->SetHighLightColor(2);
   CutFlow_ZZ_DHZfirst_16->Range(-1.4,-77663.65,7.933333,698972.8);
   CutFlow_ZZ_DHZfirst_16->SetFillColor(0);
   CutFlow_ZZ_DHZfirst_16->SetFillStyle(4000);
   CutFlow_ZZ_DHZfirst_16->SetBorderMode(0);
   CutFlow_ZZ_DHZfirst_16->SetBorderSize(2);
   CutFlow_ZZ_DHZfirst_16->SetLeftMargin(0.15);
   CutFlow_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   CutFlow_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__88 = new TH1D("CutFlow_evt_DHZfirst__88","",8,0,8);
   CutFlow_evt_DHZfirst__88->SetBinContent(1,591723);
   CutFlow_evt_DHZfirst__88->SetBinContent(2,576919.5);
   CutFlow_evt_DHZfirst__88->SetBinContent(3,14992.5);
   CutFlow_evt_DHZfirst__88->SetBinContent(4,2397.536);
   CutFlow_evt_DHZfirst__88->SetBinContent(5,599.7488);
   CutFlow_evt_DHZfirst__88->SetBinContent(6,237.8566);
   CutFlow_evt_DHZfirst__88->SetBinContent(7,78.79912);
   CutFlow_evt_DHZfirst__88->SetBinContent(8,28.69844);
   CutFlow_evt_DHZfirst__88->SetBinError(1,379.3564);
   CutFlow_evt_DHZfirst__88->SetBinError(2,374.581);
   CutFlow_evt_DHZfirst__88->SetBinError(3,60.38447);
   CutFlow_evt_DHZfirst__88->SetBinError(4,24.14742);
   CutFlow_evt_DHZfirst__88->SetBinError(5,12.07738);
   CutFlow_evt_DHZfirst__88->SetBinError(6,7.605815);
   CutFlow_evt_DHZfirst__88->SetBinError(7,4.377729);
   CutFlow_evt_DHZfirst__88->SetBinError(8,2.641906);
   CutFlow_evt_DHZfirst__88->SetEntries(4880521);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__88->SetLineColor(ci);
   CutFlow_evt_DHZfirst__88->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__88->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__88->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__88->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__88->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__88->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__88->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__88->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__88->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__88->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__88->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__88->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__88->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__88->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__88->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__88->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__88->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__88->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__88->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__88->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__88->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__88->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__88->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZZ_DHZfirst_16->Modified();
   CutFlow_ZZ_DHZfirst_16->cd();
   CutFlow_ZZ_DHZfirst_16->SetSelected(CutFlow_ZZ_DHZfirst_16);
}
