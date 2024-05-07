#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZZ_tagOnly_16_logY()
{
//=========Macro generated from canvas: CutFlow_ZZ_tagOnly_16/CutFlow_ZZ_tagOnly_16
//=========  (Mon Apr 22 15:12:12 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZZ_tagOnly_16 = new TCanvas("CutFlow_ZZ_tagOnly_16", "CutFlow_ZZ_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZZ_tagOnly_16->SetHighLightColor(2);
   CutFlow_ZZ_tagOnly_16->Range(-1.4,2.00032,7.933333,6.499595);
   CutFlow_ZZ_tagOnly_16->SetFillColor(0);
   CutFlow_ZZ_tagOnly_16->SetFillStyle(4000);
   CutFlow_ZZ_tagOnly_16->SetBorderMode(0);
   CutFlow_ZZ_tagOnly_16->SetBorderSize(2);
   CutFlow_ZZ_tagOnly_16->SetLogy();
   CutFlow_ZZ_tagOnly_16->SetLeftMargin(0.15);
   CutFlow_ZZ_tagOnly_16->SetFrameFillStyle(1000);
   CutFlow_ZZ_tagOnly_16->SetFrameBorderMode(0);
   CutFlow_ZZ_tagOnly_16->SetFrameFillStyle(1000);
   CutFlow_ZZ_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__58 = new TH1D("CutFlow_evt_tagOnly__58","",8,0,8);
   CutFlow_evt_tagOnly__58->SetBinContent(1,591723);
   CutFlow_evt_tagOnly__58->SetBinContent(2,576919.5);
   CutFlow_evt_tagOnly__58->SetBinContent(3,14992.5);
   CutFlow_evt_tagOnly__58->SetBinContent(4,2397.536);
   CutFlow_evt_tagOnly__58->SetBinContent(5,1698.316);
   CutFlow_evt_tagOnly__58->SetBinContent(6,949.4807);
   CutFlow_evt_tagOnly__58->SetBinContent(7,563.9974);
   CutFlow_evt_tagOnly__58->SetBinContent(8,202.8348);
   CutFlow_evt_tagOnly__58->SetBinError(1,379.3564);
   CutFlow_evt_tagOnly__58->SetBinError(2,374.581);
   CutFlow_evt_tagOnly__58->SetBinError(3,60.38447);
   CutFlow_evt_tagOnly__58->SetBinError(4,24.14742);
   CutFlow_evt_tagOnly__58->SetBinError(5,20.32345);
   CutFlow_evt_tagOnly__58->SetBinError(6,15.19607);
   CutFlow_evt_tagOnly__58->SetBinError(7,11.71188);
   CutFlow_evt_tagOnly__58->SetBinError(8,7.023593);
   CutFlow_evt_tagOnly__58->SetEntries(4890675);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__58->SetLineColor(ci);
   CutFlow_evt_tagOnly__58->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__58->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__58->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__58->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__58->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__58->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__58->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__58->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__58->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__58->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__58->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__58->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__58->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__58->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__58->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__58->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__58->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__58->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__58->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__58->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__58->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__58->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__58->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZZ_tagOnly_16->Modified();
   CutFlow_ZZ_tagOnly_16->cd();
   CutFlow_ZZ_tagOnly_16->SetSelected(CutFlow_ZZ_tagOnly_16);
}
