#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZJets_tagOnly_16_logY()
{
//=========Macro generated from canvas: CutFlow_ZJets_tagOnly_16/CutFlow_ZJets_tagOnly_16
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZJets_tagOnly_16 = new TCanvas("CutFlow_ZJets_tagOnly_16", "CutFlow_ZJets_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZJets_tagOnly_16->SetHighLightColor(2);
   CutFlow_ZJets_tagOnly_16->Range(-1.4,4.106851,7.933333,8.316292);
   CutFlow_ZJets_tagOnly_16->SetFillColor(0);
   CutFlow_ZJets_tagOnly_16->SetFillStyle(4000);
   CutFlow_ZJets_tagOnly_16->SetBorderMode(0);
   CutFlow_ZJets_tagOnly_16->SetBorderSize(2);
   CutFlow_ZJets_tagOnly_16->SetLogy();
   CutFlow_ZJets_tagOnly_16->SetLeftMargin(0.15);
   CutFlow_ZJets_tagOnly_16->SetFrameFillStyle(1000);
   CutFlow_ZJets_tagOnly_16->SetFrameBorderMode(0);
   CutFlow_ZJets_tagOnly_16->SetFrameFillStyle(1000);
   CutFlow_ZJets_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__43 = new TH1D("CutFlow_evt_tagOnly__43","",8,0,8);
   CutFlow_evt_tagOnly__43->SetBinContent(1,4.14762e+07);
   CutFlow_evt_tagOnly__43->SetBinContent(2,4.145527e+07);
   CutFlow_evt_tagOnly__43->SetBinContent(3,3097075);
   CutFlow_evt_tagOnly__43->SetBinContent(4,403652.2);
   CutFlow_evt_tagOnly__43->SetBinContent(5,249063.7);
   CutFlow_evt_tagOnly__43->SetBinContent(6,114764.9);
   CutFlow_evt_tagOnly__43->SetBinContent(7,67425.71);
   CutFlow_evt_tagOnly__43->SetBinContent(8,20063.17);
   CutFlow_evt_tagOnly__43->SetBinError(1,9879.738);
   CutFlow_evt_tagOnly__43->SetBinError(2,9879.36);
   CutFlow_evt_tagOnly__43->SetBinError(3,1903.692);
   CutFlow_evt_tagOnly__43->SetBinError(4,564.844);
   CutFlow_evt_tagOnly__43->SetBinError(5,437.6403);
   CutFlow_evt_tagOnly__43->SetBinError(6,296.0409);
   CutFlow_evt_tagOnly__43->SetBinError(7,217.5836);
   CutFlow_evt_tagOnly__43->SetBinError(8,106.5554);
   CutFlow_evt_tagOnly__43->SetEntries(1.15374e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__43->SetLineColor(ci);
   CutFlow_evt_tagOnly__43->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__43->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__43->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__43->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__43->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__43->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__43->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__43->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__43->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__43->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__43->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__43->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__43->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__43->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__43->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__43->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__43->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__43->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__43->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__43->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__43->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__43->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__43->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZJets_tagOnly_16->Modified();
   CutFlow_ZJets_tagOnly_16->cd();
   CutFlow_ZJets_tagOnly_16->SetSelected(CutFlow_ZJets_tagOnly_16);
}
